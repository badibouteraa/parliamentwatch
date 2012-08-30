<?php
/**
 * @file
 * pw_poll.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_poll_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__pw_poll';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__pw_poll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rate_widgets';
  $strongarm->value = array(
    1 => (object) array(
      'name' => 'pw_voting',
      'tag' => 'vote',
      'title' => 'PW Voting',
      'node_types' => array(
        0 => 'pw_poll',
      ),
      'comment_types' => array(),
      'options' => array(
        0 => array(
          0 => '0',
          1 => 'yes',
        ),
        1 => array(
          0 => '1',
          1 => 'no',
        ),
        2 => array(
          0 => '2',
          1 => 'undecided',
        ),
        3 => array(
          0 => '3',
          1 => 'not_participate',
        ),
      ),
      'template' => 'custom',
      'node_display' => '0',
      'teaser_display' => FALSE,
      'comment_display' => '0',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        3 => 0,
        1 => 0,
        2 => 0,
        4 => 0,
        5 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'value_type' => 'points',
      'translate' => TRUE,
    ),
  );
  $export['rate_widgets'] = $strongarm;

  return $export;
}
