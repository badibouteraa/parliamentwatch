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
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:node/3
  $menu_links['main-menu:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:node/7
  $menu_links['main-menu:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Startseite',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:politicians/bezirkstag
  $menu_links['main-menu:politicians/bezirkstag'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'politicians/bezirkstag',
    'router_path' => 'politicians/%',
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
    'weight' => '-46',
  );
  // Exported menu link: main-menu:politicians/bundestag
  $menu_links['main-menu:politicians/bundestag'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'politicians/bundestag',
    'router_path' => 'politicians/%',
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
    'weight' => '-49',
  );
  // Exported menu link: main-menu:politicians/landtag
  $menu_links['main-menu:politicians/landtag'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'politicians/landtag',
    'router_path' => 'politicians/%',
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
    'weight' => '-48',
  );
  // Exported menu link: menu-menu-about-us:node/3
  $menu_links['menu-menu-about-us:node/3'] = array(
    'menu_name' => 'menu-menu-about-us',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-menu-about-us:node/4
  $menu_links['menu-menu-about-us:node/4'] = array(
    'menu_name' => 'menu-menu-about-us',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Impressum',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-parliaments:politicians/bezirkstag
  $menu_links['menu-parliaments:politicians/bezirkstag'] = array(
    'menu_name' => 'menu-parliaments',
    'link_path' => 'politicians/bezirkstag',
    'router_path' => 'politicians/%',
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
  // Exported menu link: menu-parliaments:politicians/bundestag
  $menu_links['menu-parliaments:politicians/bundestag'] = array(
    'menu_name' => 'menu-parliaments',
    'link_path' => 'politicians/bundestag',
    'router_path' => 'politicians/%',
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
  // Exported menu link: menu-parliaments:politicians/landtag
  $menu_links['menu-parliaments:politicians/landtag'] = array(
    'menu_name' => 'menu-parliaments',
    'link_path' => 'politicians/landtag',
    'router_path' => 'politicians/%',
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
  t('FAQ');
  t('Home');
  t('Impressum');
  t('Landtag');
  t('Startseite');


  return $menu_links;
}
