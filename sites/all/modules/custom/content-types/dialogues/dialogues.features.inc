<?php
/**
 * @file
 * dialogues.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dialogues_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dialogues_node_info() {
  $items = array(
    'dialogue' => array(
      'name' => t('Dialogue'),
      'base' => 'node_content',
      'description' => t('A dialogue. The node content is the question, comments are answers by the politician or further questions. Node and questions have the same fields.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
