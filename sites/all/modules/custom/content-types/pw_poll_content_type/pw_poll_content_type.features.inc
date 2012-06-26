<?php
/**
 * @file
 * pw_poll_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function pw_poll_content_type_node_info() {
  $items = array(
    'pw_poll' => array(
      'name' => t('PW Poll'),
      'base' => 'node_content',
      'description' => t('Custom Poll content wrapper for politician voting display'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
