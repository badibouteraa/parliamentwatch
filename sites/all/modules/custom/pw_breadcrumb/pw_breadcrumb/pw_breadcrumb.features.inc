<?php
/**
 * @file
 * pw_breadcrumb.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_breadcrumb_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
}
