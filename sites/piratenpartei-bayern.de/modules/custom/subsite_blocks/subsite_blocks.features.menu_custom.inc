<?php
/**
 * @file
 * subsite_blocks.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function subsite_blocks_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-about-us
  $menus['menu-menu-about-us'] = array(
    'menu_name' => 'menu-menu-about-us',
    'title' => 'About us',
    'description' => '',
  );
  // Exported menu: menu-parliaments
  $menus['menu-parliaments'] = array(
    'menu_name' => 'menu-parliaments',
    'title' => 'Parliaments',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Parliaments');


  return $menus;
}
