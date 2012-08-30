<?php
/**
 * @file
 * pw_poll_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_poll_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

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
