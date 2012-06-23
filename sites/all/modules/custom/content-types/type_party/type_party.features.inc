<?php
/**
 * @file
 * type_party.features.inc
 */

/**
 * Implements hook_node_info().
 */
function type_party_node_info() {
  $items = array(
    'party' => array(
      'name' => t('Party'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
