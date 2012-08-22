<?php
/**
 * @file
 * subsite_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function subsite_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:politicians/bezirkstag
  $menu_links['main-menu:politicians/bezirkstag'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'politicians/bezirkstag',
    'router_path' => 'politicians',
    'link_title' => 'Bezirkstag',
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
    'weight' => '-48',
  );
  // Exported menu link: main-menu:politicians/bundestag
  $menu_links['main-menu:politicians/bundestag'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'politicians/bundestag',
    'router_path' => 'politicians',
    'link_title' => 'Bundestag',
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
    'weight' => '-50',
  );
  // Exported menu link: main-menu:politicians/landtag
  $menu_links['main-menu:politicians/landtag'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'politicians/landtag',
    'router_path' => 'politicians',
    'link_title' => 'Landtag',
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
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bezirkstag');
  t('Bundestag');
  t('Landtag');


  return $menu_links;
}
