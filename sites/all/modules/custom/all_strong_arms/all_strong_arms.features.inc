<?php
/**
 * @file
 * all_strong_arms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function all_strong_arms_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
