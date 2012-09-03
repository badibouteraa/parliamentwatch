<?php
/**
 * @file
 * subsite_blocks.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function subsite_blocks_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Revue de presse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'fr',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: main-menu:politicians/assemblée-nationale-constituante
  $menu_links['main-menu:politicians/assemblée-nationale-constituante'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'politicians/assemblée-nationale-constituante',
    'router_path' => 'politicians/%',
    'link_title' => 'L\'Assemblée',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'fr',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-parliaments:politicians/assemblée-nationale-constituante
  $menu_links['menu-parliaments:politicians/assemblée-nationale-constituante'] = array(
    'menu_name' => 'menu-parliaments',
    'link_path' => 'politicians/assemblée-nationale-constituante',
    'router_path' => 'politicians/%',
    'link_title' => 'Assemblée nationale constituante',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Assemblée nationale constituante');
  t('L\'Assemblée');
  t('Revue de presse');


  return $menu_links;
}
