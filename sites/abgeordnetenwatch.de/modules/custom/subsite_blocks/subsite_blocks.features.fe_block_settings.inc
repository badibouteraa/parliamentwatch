<?php
/**
 * @file
 * subsite_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function subsite_blocks_default_fe_block_settings() {
  $export = array();

  // abgeordnetenwatch
  $theme = array();

  $theme['delta_blocks-breadcrumb'] = array(
    'module' => 'delta_blocks',
    'delta' => 'breadcrumb',
    'theme' => 'abgeordnetenwatch',
    'status' => '1',
    'weight' => '-22',
    'region' => 'header_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
  );

  $theme['delta_blocks-messages'] = array(
    'module' => 'delta_blocks',
    'delta' => 'messages',
    'theme' => 'abgeordnetenwatch',
    'status' => '1',
    'weight' => '-26',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['forward-form'] = array(
    'module' => 'forward',
    'delta' => 'form',
    'theme' => 'abgeordnetenwatch',
    'status' => '1',
    'weight' => '-25',
    'region' => 'postscript_fourth',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Social Media',
    'cache' => '1',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'abgeordnetenwatch',
    'status' => '1',
    'weight' => '-26',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Language',
    'cache' => -1,
  );

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => '1',
    'theme' => 'abgeordnetenwatch',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['print-print-links'] = array(
    'module' => 'print',
    'delta' => 'print-links',
    'theme' => 'abgeordnetenwatch',
    'status' => '1',
    'weight' => '-26',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Print',
    'cache' => 4,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'abgeordnetenwatch',
    'status' => '1',
    'weight' => '-26',
    'region' => 'sidebar_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'abgeordnetenwatch',
    'status' => '1',
    'weight' => '-22',
    'region' => 'header_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'abgeordnetenwatch',
    'status' => '1',
    'weight' => '-25',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'abgeordnetenwatch',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'abgeordnetenwatch',
    'status' => 0,
    'weight' => '10',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['text_resize-0'] = array(
    'module' => 'text_resize',
    'delta' => '0',
    'theme' => 'abgeordnetenwatch',
    'status' => '1',
    'weight' => '-26',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Text resize',
    'cache' => '1',
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'abgeordnetenwatch',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-slider-block'] = array(
    'module' => 'views',
    'delta' => 'slider-block',
    'theme' => 'abgeordnetenwatch',
    'status' => '1',
    'weight' => '-17',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['abgeordnetenwatch'] = $theme;

  // bartik
  $theme = array();

  $theme['delta_blocks-breadcrumb'] = array(
    'module' => 'delta_blocks',
    'delta' => 'breadcrumb',
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

  $theme['delta_blocks-messages'] = array(
    'module' => 'delta_blocks',
    'delta' => 'messages',
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

  $theme['forward-form'] = array(
    'module' => 'forward',
    'delta' => 'form',
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

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => '1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
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

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '-1',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'help',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '10',
    'region' => 'footer',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
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

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-slider-block'] = array(
    'module' => 'views',
    'delta' => 'slider-block',
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

  $export['bartik'] = $theme;

  // seven
  $theme = array();

  $theme['delta_blocks-breadcrumb'] = array(
    'module' => 'delta_blocks',
    'delta' => 'breadcrumb',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
  );

  $theme['delta_blocks-messages'] = array(
    'module' => 'delta_blocks',
    'delta' => 'messages',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['forward-form'] = array(
    'module' => 'forward',
    'delta' => 'form',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Social Media',
    'cache' => '1',
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

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => '1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
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

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '-10',
    'region' => 'dashboard_inactive',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'help',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '10',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
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

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '10',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-slider-block'] = array(
    'module' => 'views',
    'delta' => 'slider-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
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
