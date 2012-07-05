<?php
/**
 * @file
 * committee_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function committee_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function committee_type_node_info() {
  $items = array(
    'committee' => array(
      'name' => t('Committee'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Committee'),
      'help' => '',
    ),
  );
  return $items;
}
