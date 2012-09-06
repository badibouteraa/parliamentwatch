<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
 

/////////////////////////// customize addthos button (ruth)
//////////////////////////////////////////////////////

function abgeordnetenwatch_addthis_element($variables) {
  $element = $variables['addthis_element'];
  $element['#attributes']['src'] = '/sites/all/themes/custom/abgeordnetenwatch/images/ic_share.png';
  if (!isset($element['#value'])) {
    return '<' . $element['#tag'] . drupal_attributes($element['#attributes']) . " />\n";
  }

  $output = '<' . $element['#tag'] . drupal_attributes($element['#attributes']) . '>';
  if (isset($element['#value_prefix'])) {
    $output .= $element['#value_prefix'];
  }
  $output .= $element['#value'];
  if (isset($element['#value_suffix'])) {
    $output .= $element['#value_suffix'];
  }
  $output .= '</' . $element['#tag'] . ">\n";
  return $output;
}


/////////////////////////// customize breadcrumb seperator (ruth)
//////////////////////////////////////////////////////

function abgeordnetenwatch_delta_blocks_breadcrumb($variables) {
  $output = '';

  if (!empty($variables['breadcrumb'])) {  
    if ($variables['breadcrumb_current']) {
      $variables['breadcrumb'][] = l(drupal_get_title(), current_path(), array('html' => TRUE));
    }

    $output = '<div id="breadcrumb" class="clearfix"><ul class="breadcrumb">';
    $switch = array('odd' => 'even', 'even' => 'odd');
    $zebra = 'even';
    $last = count($variables['breadcrumb']) - 1;    

    foreach ($variables['breadcrumb'] as $key => $item) {
      $zebra = $switch[$zebra];
      $attributes['class'] = array('depth-' . ($key + 1), $zebra);

      if ($key == 0) {
        $attributes['class'][] = 'first';
      }

      if ($key == $last) {
        $attributes['class'][] = 'last';
      }

      if ($key != $last) {
        $output .= '<li' . drupal_attributes($attributes) . '>' . $item . ' / </li>';
        }else{
        $output .= '<li' . drupal_attributes($attributes) . '>' . $item . '</li>';
        }
    }

    $output .= '</ul></div>';
  }

  return $output;
}

/////////////////////////// customize comment form (ruth)
//////////////////////////////////////////////////////

function abgeordnetenwatch_form_comment_form_alter(&$form, &$form_state) {
    global $user;
    if ($user->uid) {
        $form['author']['_author']['#title'] = t('You are logged in as');
    }
}

/////////////////////////// customize RSS block (ruth)
//////////////////////////////////////////////////////

function abgeordnetenwatch_feed_icon($variables) {
  $text = t('Subscribe to @feed-title', array('@feed-title' => $variables['title']));
  if ($image = theme('image', array('path' => 'misc/feed.png', 'width' => 16, 'height' => 16, 'alt' => $text))) {
    return l($text, $variables['url'], array('html' => TRUE, 'attributes' => array('class' => array('feed-link'), 'title' => $text)));
  }
}

/////////////////////////// hide the more link in tagclouds (ruth)
//////////////////////////////////////////////////////

function abgeordnetenwatch_tagadelic_weighted(array $vars) {
  $terms = $vars['terms'];
  $output = '';

  foreach ($terms as $term) {
    $output .= l($term->name, 'taxonomy/term/' . $term->tid, array(
      'attributes' => array(
        'class' => array("tagadelic", "level" . $term->weight),
        'rel' => 'tag',
        'title'  => $term->description,
        )
      )
    ) . " \n";
  }
  //if (count($terms) >= variable_get('tagadelic_block_tags_' . $vars['voc']->vid, 12)) {
  //  $output .= theme('more_link', array('title' => t('more tags'), 'url' => "tagadelic/chunk/{$vars['voc']->vid}"));
  //}
  return $output;
}


/////////////////////////// cusomize the pager (waqar)
//////////////////////////////////////////////////////

function abgeordnetenwatch_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

    $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] :'1'), 'element' => $element, 'parameters' => $parameters));
    $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ prev')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
    $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
    $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : $pager_max), 'element' => $element, 'parameters' => $parameters));

    global $base_path;
    
    //set first page link
    $first = $li_first;
    
    //set last page link
    $last = $li_last;
    
    
    //add left side arrow and text
    if ($li_previous == ""){
        $new_li_first = '<span>'.t('‹ prev').'</span>';
    }else {
        $new_li_previous = $li_previous;
        $new_li_first = str_replace(t('‹ prev'),''.t('‹ prev'),	$new_li_previous);
    }
    
    //add rigth side arrow and text
    if ($li_next == ""){
        $new_li_last = '<span>'.t('next ›').'</span>';
    }else {
        $new_li_next = $li_next;
        $new_li_last = str_replace(t('next ›'),	t('next ›'),	$new_li_next);
        //$new_li_last = t('next ›').' '.$new_li_last;
    }

  if ($pager_total[$element] > 1) {
//    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $new_li_first,
      );
//    }
//    if ($li_previous) {
      $items[] = array(
        'class' => '',
        'data' => t('Page'),
      );
//    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => $first.' …',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager-current'),
            'data' => $i,
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max+1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '… '.$last,
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'),
        'data' => '',
      );
    }
//    if ($li_last) {
      $items[] = array(
        'class' => array('pager-last'),
        'data' => $new_li_last,
      );
//    }
    return '<h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list', array(
      'items' => $items,
      'attributes' => array('class' => array('pager')),
    ));
  }
}

/////////////////////////// hide filter tips
//////////////////////////////////////////////////////

function abgeordnetenwatch_filter_tips_more_info() {
  return '';
}