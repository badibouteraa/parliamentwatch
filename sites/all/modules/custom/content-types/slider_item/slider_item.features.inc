<?php
/**
 * @file
 * slider_item.features.inc
 */

/**
 * Implements hook_node_info().
 */
function slider_item_node_info() {
  $items = array(
    'slider_item' => array(
      'name' => t('Slider item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
