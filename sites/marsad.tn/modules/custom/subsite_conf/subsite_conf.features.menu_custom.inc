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
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-about-us
  $menus['menu-about-us'] = array(
    'menu_name' => 'menu-about-us',
    'title' => 'About us',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-main-menu-ar
  $menus['menu-main-menu-ar'] = array(
    'menu_name' => 'menu-main-menu-ar',
    'title' => 'Main Menu AR',
    'description' => '',
    'language' => 'ar',
    'i18n_mode' => '2',
  );
  // Exported menu: menu-main-menu-fr
  $menus['menu-main-menu-fr'] = array(
    'menu_name' => 'menu-main-menu-fr',
    'title' => 'Main Menu FR',
    'description' => '',
    'language' => 'fr',
    'i18n_mode' => '2',
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
  t('Main Menu AR');
  t('Main Menu FR');
  t('Main menu');
  t('Parliaments');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
