<?php
/**
 * @file
 * subsite_conf.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function subsite_conf_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-menu-about-us
  $menus['menu-menu-about-us'] = array(
    'menu_name' => 'menu-menu-about-us',
    'title' => 'About us',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-parliaments
  $menus['menu-parliaments'] = array(
    'menu_name' => 'menu-parliaments',
    'title' => 'Parliaments',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Main menu');
  t('Parliaments');


  return $menus;
}
