<?php
/**
 * @file
 * blogpost_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blogpost_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

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
