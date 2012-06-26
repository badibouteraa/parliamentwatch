<?php

function rate_voteas_voting_form($form, &$form_state, $node){

  $widgets = rate_get_active_widgets('node',$node->type);
  //$widgets = variable_get(RATE_VAR_WIDGETS, array());
  
  foreach($widgets as $widget){
    $options = array();
    foreach($widget->options as $option){
      $options[$option[0]] = $option[1];
    }
  }
  
  $votingapi_results = votingapi_select_votes(array(
      'entity_type' => 'node',
      'entity_id' => $node->nid,
      'tag' => $widgets[1]->tag,
      'value_type' => $widgets[1]->value_type,
    ));
  //print_r($votingapi_results);
  if (isset($form_state['rate_count'])) {
    $choice_count = $form_state['rate_count'];
  }
  else {
    $choice_count = max(2, empty($votingapi_results) ? 2 : count($votingapi_results));
  }
  $form['rate_nid'] = array(
    '#type'=>'value',
    '#value'=> $node->nid,
  );
  $form['rate_widget_info'] = array(
    '#type'=>'value',
    '#value'=> $widgets[1],
  );
  $form['rate_widget_options'] = array(
    '#type'=>'value',
    '#value'=> $options,
  );
  // Add a wrapper for the choices and more button.
  $form['rate_wrapper'] = array(
    '#tree' => FALSE,
    '#weight' => -4,
    '#prefix' => '<div class="clearfix" id="rate-users-wrapper">',
    '#suffix' => '</div>',
  );

  // Container for just the poll choices.
  $form['rate_wrapper']['user'] = array(
    '#prefix' => '<div id="rate-user-vote">',
    '#suffix' => '</div>',
    '#theme' => 'rate_votes',
  );
  
  // Add initial or additional votes.
  $delta = 0;
  $weight = 0;
  
  $existing_delta = $delta;
  for ($delta; $delta < $choice_count; $delta++) {
    $user_info = NULL;
    $uid = NULL;
    $uname = NULL;
    $key = 'new:' . ($delta - $existing_delta);
    $option = NULL;
    // Increase the weight of each new choice.
    $weight++;
    if($votingapi_results[$delta]['uid']>0){
      $user_info = user_load($votingapi_results[$delta]['uid']);
      $uid = $user_info->uid;
      $uname = $user_info->name;
      $vote_id = $votingapi_results[$delta]['vote_id'];
      $option = $votingapi_results[$delta]['value'];
      
    }else{
      if($name = $form_state['values']['user'][$key]['user_name']){
        if($user_info = user_load_by_name($name)){
          $uid = $user_info->uid;
          $uname = $user_info->name;
        }
      }

    }
    
    $form['rate_upload'] = array(
    //'#name' => 'files[' . implode('_', $element['#parents']) . ']',
    '#type' => 'managed_file',
    '#title' => t('Choose a file'),
    '#title_display' => 'invisible',
    '#size' => 22,
    '#theme_wrappers' => array(),
    '#weight' => -10,
    '#upload_validators' => array(
        'file_validate_extensions' => array('csv'),
      ),
  	);
    
    $form['rate_wrapper']['user'][$key] = _rate_voteas_vote_form($key, $uid, $uname, 0, $weight, $choice_count, $options, $vote_id, $option);
  }
  
  $form['rate_wrapper']['rate_more'] = array(
      '#type' => 'submit',
      '#value' => t('More User Votes'),
      '#attributes' => array(
        'title' => t("If the amount of boxes above isn't enough, click here to add more votes."),
    ),
      '#weight' => 1,
      '#limit_validation_errors' => array(array('user')),
      '#submit' => array('rate_voteas_more_votes_submit'),
      '#ajax' => array(
        'callback' => 'rate_voteas_vote_js',
        'wrapper' => 'rate-user-vote',
        'effect' => 'fade',
    ),
  );
  
  $form['rate_submit'] = array(
    '#type'=>'submit',
    '#value'=> 'save',
  );
  $form['#submit'][] = 'rate_voteas_voting_form_submit';
  return $form;
}


function rate_voteas_voting_form_submit($form, &$form_state){
  $votes = array();
  $criteria = array();
  
  //Get file contents from csv determine user and save vote
  
  //echo "<pre>RATE WIDGET:".print_r($form_state['values']['rate_widget_info'],1)."</pre>";
  $file = file_load($form_state['values']['rate_upload']);
  $file = str_replace('temporary://', '/tmp/', $file->uri);
  //print_r($file);
  $arrResult = array();
  $handle = fopen($file, "r");
  if( $handle ) {
    while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
      $user = user_load_by_name($data[0]);
      $option = array_search($data[1], $form_state['values']['rate_widget_options']);
      $vote = array();
      $vote['entity_id'] = $form_state['values']['rate_nid'];
      $vote['uid'] = $user->uid;
      $vote['value'] = $option;
      $vote['tag'] = $form_state['values']['rate_widget_info']->tag;
      $vote['value_type'] = $form_state['values']['rate_widget_info']->value_type;
      $votes[] = $vote;
      $arrResult[] = $data;
    }
    fclose($handle);
  }

  /**
 * Cast a vote on a particular piece of content.
 *
 * This function does most of the heavy lifting needed by third-party modules
 * based on VotingAPI. Handles clearing out old votes for a given piece of
 * content, saving the incoming votes, and re-tallying the results given the
 * new data.
 *
 * Modules that need more explicit control can call votingapi_add_votes() and
 * manage the deletion/recalculation tasks manually.
 *
 * @param $votes
 *   An array of votes, each with the following structure:
 *   $vote['entity_type']  (Optional, defaults to 'node')
 *   $vote['entity_id']    (Required)
 *   $vote['value_type']    (Optional, defaults to 'percent')
 *   $vote['value']         (Required)
 *   $vote['tag']           (Optional, defaults to 'vote')
 *   $vote['uid']           (Optional, defaults to current user)
 *   $vote['vote_source']   (Optional, defaults to current IP)
 *   $vote['timestamp']     (Optional, defaults to REQUEST_TIME)
 * @param $criteria
 *   A keyed array used to determine what votes will be deleted when the current
 *   vote is cast. If no value is specified, all votes for the current content
 *   by the current user will be reset. If an empty array is passed in, no votes
 *   will be reset and all incoming votes will be saved IN ADDITION to existing
 *   ones.
 *   $criteria['vote_id']     (If this is set, all other keys are skipped)
 *   $criteria['entity_type']
 *   $criteria['entity_type']
 *   $criteria['value_type']
 *   $criteria['tag']
 *   $criteria['uid']
 *   $criteria['vote_source']
 *   $criteria['timestamp']   (If this is set, records with timestamps
 *      GREATER THAN the set value will be selected.)
 * @return
 *   An array of vote result records affected by the vote. The values are
 *   contained in a nested array keyed thusly:
 *   $value = $results[$entity_type][$entity_id][$tag][$value_type][$function]
 *
 * @see votingapi_add_votes()
 * @see votingapi_recalculate_results()
 */
  /*$votes = array();
  $criteria = array();
  foreach($form_state['values']['user'] as $user){
    $vote = array();
    $vote['entity_id'] = $form_state['values']['rate_nid'];
    $vote['uid'] = $user['uid'];
    $vote['value'] = $user['user_vote'];
    $vote['tag'] = $form_state['values']['rate_widget_info']->tag;
    $vote['value_type'] = $form_state['values']['rate_widget_info']->value_type;
    
    if($user['uid'] > 0){
      $votes[] = $vote;
      $criteria[]['vote_id'] = $user['vote_id'];
    }
    
    
  }*/
  $results = votingapi_set_votes($votes, $criteria);
}

/**
 * Ajax callback in response to new choices being added to the form.
 *
 * This returns the new page content to replace the page content made obsolete
 * by the form submission.
 *
 * @see poll_more_choices_submit()
 */
function rate_voteas_vote_js($form, $form_state) {
  return $form['rate_wrapper']['user'];
}

/**
 * Submit handler to add more users to a vote form.
 *
 * This handler is run regardless of whether JS is enabled or not. It makes
 * changes to the form state. If the button was clicked with JS disabled, then
 * the page is reloaded with the complete rebuilt form. If the button was
 * clicked with JS enabled, then ajax_form_callback() calls poll_choice_js() to
 * return just the changed part of the form.
 */
function rate_voteas_more_votes_submit($form, &$form_state) {
  // If this is a Ajax POST, add 1, otherwise add 5 more choices to the form.
  if ($form_state['values']['rate_more']) {
    $n = $_GET['q'] == 'system/ajax' ? 1 : 5;
    $form_state['rate_count'] = count($form_state['values']['user']) + $n;
  }
  // Renumber the choices. This invalidates the corresponding key/value
  // associations in $form_state['input'], so clear that out. This requires
  // poll_form() to rebuild the choices with the values in
  // $form_state['node']->choice, which it does.
  $form_state['user'] = array_values($form_state['values']['user']);
  unset($form_state['input']['user']);
  $form_state['rebuild'] = TRUE;
}


function _rate_voteas_vote_form($key, $uid = NULL, $username = '', $option = 0, $weight = 0, $size = 10 , $options, $vote_id = NULL, $option = NULL) {
  $form = array(
    '#tree' => TRUE,
    '#weight' => $weight,
  );

  // We'll manually set the #parents property of these fields so that
  // their values appear in the $form_state['values']['choice'] array.
  $form['uid'] = array(
    '#type' => 'value',
    '#value' => $uid,
    '#parents' => array('user', $key, 'uid'),
  );
  /*$form['vote_id'] = array(
    '#type' => 'value',
    '#value' => $vote_id,
    '#parents' => array('user', $key, 'vote_id'),
  );*/
  $form['user_name'] = array(
    '#type' => 'textfield',
    '#title' => 'Username',
    '#title_display' => 'invisible',
    '#default_value' => $username,
    '#parents' => array('user', $key, 'user_name'),
    '#autocomplete_path' => 'user/autocomplete'
  );

  $form['user_vote'] = array(
    '#type' => 'select',
    '#title' => 'Voted',
    '#title_display' => 'invisible',
    '#default_value' => $option,
    '#options'=> $options,
    '#parents' => array('user', $key, 'user_vote'),
  );

  $form['weight'] = array(
    '#type' => 'weight',
    '#title' => 'Weight',
    '#title_display' => 'invisible',
    '#default_value' => $weight,
    '#delta' => $size,
    '#parents' => array('user', $key, 'weight'),
  );

  return $form;
}

/**
 * Returns HTML for an admin poll form for choices.
 *
 * @param $variables
 *   An associative array containing:
 *   - form: A render element representing the form.
 *
 * @ingroup themeable
 */
function theme_rate_votes($variables) {
  $form = $variables['form'];

  drupal_add_tabledrag('rate-votes-table', 'order', 'sibling', 'rate-weight');

  //$is_admin= user_access('administer nodes');
  $delta = 0;
  $rows = array();
  $headers = array('', t('User'));
  //if ($is_admin) {
  $headers[] = t('Votes');
  //}
  $headers[] = t('Weight');

  foreach (element_children($form) as $key) {
    $delta++;
    // Set special classes for drag and drop updating.
    $form[$key]['weight']['#attributes']['class'] = array('rate-weight');

    // Build the table row.
    $row = array(
      'data' => array(
        array('class' => array('rate-flag')),
        drupal_render($form[$key]['user_name']),
      ),
      'class' => array('draggable'),
    );

      $row['data'][] = drupal_render($form[$key]['user_vote']);

    $row['data'][] = drupal_render($form[$key]['weight']);

    // Add any additional classes set on the row.
    if (!empty($form[$key]['#attributes']['class'])) {
      $row['class'] = array_merge($row['class'], $form[$key]['#attributes']['class']);
    }

    $rows[] = $row;
  }

  $output = theme('table', array('header' => $headers, 'rows' => $rows, 'attributes' => array('id' => 'rate-votes-table')));
  $output .= drupal_render_children($form);
  return $output;
}

/**
 * Implements hook_theme().
 */
function rate_voteas_theme() {
  $theme_hooks = array(
    'rate_votes' => array(
      'render element' => 'form',
    ),
  );

  return $theme_hooks;
}
