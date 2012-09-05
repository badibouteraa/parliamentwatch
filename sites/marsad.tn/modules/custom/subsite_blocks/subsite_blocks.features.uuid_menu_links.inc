<?php
/**
 * @file
 * subsite_blocks.features.uuid_menu_links.inc
 */

/**
 * Implements hook_uuid_menu_default_menu_links().
 */
function subsite_blocks_uuid_menu_default_menu_links() {
  $uuid_menu_links = array();

  // Exported menu link: main-menu:committees/assemblée-nationale-constituante
  $uuid_menu_links['main-menu:committees/assemblée-nationale-constituante'] = array(
    'router_path' => 'committees',
    'link_title' => 'Committees',
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
    'weight' => '4',
    'uuid_link_path' => 'committees/assemblée-nationale-constituante',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: main-menu:politicians/assemblée-nationale-constituante
  $uuid_menu_links['main-menu:politicians/assemblée-nationale-constituante'] = array(
    'router_path' => 'politicians/%',
    'link_title' => 'Deputies',
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
    'uuid_link_path' => 'politicians/assemblée-nationale-constituante',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: main-menu:votings/assemblée-nationale-constituante
  $uuid_menu_links['main-menu:votings/assemblée-nationale-constituante'] = array(
    'router_path' => 'votings/%',
    'link_title' => 'Votings',
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
    'weight' => '5',
    'uuid_link_path' => 'votings/assemblée-nationale-constituante',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-about-us:<front>
  $uuid_menu_links['menu-about-us:<front>'] = array(
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
    'uuid_link_path' => '<front>',
    'uuid_menu_name' => 'menu-about-us',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-about-us:politicians/assemblée-nationale-constituante
  $uuid_menu_links['menu-about-us:politicians/assemblée-nationale-constituante'] = array(
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
    'uuid_link_path' => 'politicians/assemblée-nationale-constituante',
    'uuid_menu_name' => 'menu-about-us',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-parliaments:politicians/assemblée-nationale-constituante
  $uuid_menu_links['menu-parliaments:politicians/assemblée-nationale-constituante'] = array(
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
    'uuid_link_path' => 'politicians/assemblée-nationale-constituante',
    'uuid_menu_name' => 'menu-parliaments',
    'uuid_parent_path' => NULL,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Assemblée nationale constituante');
  t('Committees');
  t('Deputies');
  t('L\'Assemblée');
  t('Revue de presse');
  t('Votings');


  return $uuid_menu_links;
}
