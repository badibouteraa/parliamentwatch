<?php
/**
 * @file
 * sidebar.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sidebar_default_fe_block_settings() {
  $export = array();

  // abgeordnetenwatch
  $theme = array();

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'abgeordnetenwatch',
    'status' => '1',
    'weight' => '-25',
    'region' => 'sidebar_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['abgeordnetenwatch'] = $theme;

  // seven
  $theme = array();

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '-10',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
