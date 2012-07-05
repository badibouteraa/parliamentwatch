<?php
/**
 * @file
 * slider_item.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slider_item_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slider_item_views_api() {
  return array("version" => "3.0");
}

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
