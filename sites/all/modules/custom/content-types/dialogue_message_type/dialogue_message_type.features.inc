<?php
/**
 * @file
 * dialogue_message_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function dialogue_message_type_node_info() {
  $items = array(
    'dialogue_message' => array(
      'name' => t('Dialogue message'),
      'base' => 'node_content',
      'description' => t('A question or answer in a dialogue.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
