<?php
/**
 * @file
 * user_bar.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function user_bar_default_fe_block_settings() {
  $export = array();

  // abgeordnetenwatch
  $theme = array();

  $theme['block-user_bar_add_this'] = array(
    'module' => 'block',
    'theme' => 'abgeordnetenwatch',
    'status' => '1',
    'weight' => '-26',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Share',
    'cache' => -1,
    'machine_name' => 'user_bar_add_this',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'abgeordnetenwatch',
    'status' => '1',
    'weight' => '-29',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Language',
    'cache' => -1,
  );

  $theme['print-print-links'] = array(
    'module' => 'print',
    'delta' => 'print-links',
    'theme' => 'abgeordnetenwatch',
    'status' => '1',
    'weight' => '-28',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Print',
    'cache' => 4,
  );

  $theme['text_resize-0'] = array(
    'module' => 'text_resize',
    'delta' => '0',
    'theme' => 'abgeordnetenwatch',
    'status' => '1',
    'weight' => '-27',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Text resize',
    'cache' => '1',
  );

  $export['abgeordnetenwatch'] = $theme;

  // bartik
  $theme = array();

  $theme['block-user_bar_add_this'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'user_bar_add_this',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['print-print-links'] = array(
    'module' => 'print',
    'delta' => 'print-links',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 4,
  );

  $theme['text_resize-0'] = array(
    'module' => 'text_resize',
    'delta' => '0',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $export['bartik'] = $theme;

  // dailwatch
  $theme = array();

  $theme['block-user_bar_add_this'] = array(
    'module' => 'block',
    'theme' => 'dailwatch',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'user_bar_add_this',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'dailwatch',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['print-print-links'] = array(
    'module' => 'print',
    'delta' => 'print-links',
    'theme' => 'dailwatch',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 4,
  );

  $theme['text_resize-0'] = array(
    'module' => 'text_resize',
    'delta' => '0',
    'theme' => 'dailwatch',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $export['dailwatch'] = $theme;

  // omega
  $theme = array();

  $theme['block-user_bar_add_this'] = array(
    'module' => 'block',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'user_bar_add_this',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['print-print-links'] = array(
    'module' => 'print',
    'delta' => 'print-links',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 4,
  );

  $theme['text_resize-0'] = array(
    'module' => 'text_resize',
    'delta' => '0',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $export['omega'] = $theme;

  // seven
  $theme = array();

  $theme['block-user_bar_add_this'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Share',
    'cache' => -1,
    'machine_name' => 'user_bar_add_this',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Language',
    'cache' => -1,
  );

  $theme['print-print-links'] = array(
    'module' => 'print',
    'delta' => 'print-links',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Print',
    'cache' => 4,
  );

  $theme['text_resize-0'] = array(
    'module' => 'text_resize',
    'delta' => '0',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Text resize',
    'cache' => '1',
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
