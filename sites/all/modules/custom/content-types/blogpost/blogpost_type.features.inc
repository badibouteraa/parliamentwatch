<?php
/**
 * @file
 * blogpost_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function blogpost_type_node_info() {
  $items = array(
    'blogpost' => array(
      'name' => t('Blogpost'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
