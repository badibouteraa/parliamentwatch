<?php
/**
 * @file
 * constituency.features.inc
 */

/**
 * Implements hook_node_info().
 */
function constituency_node_info() {
  $items = array(
    'constituency' => array(
      'name' => t('Constituency'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
