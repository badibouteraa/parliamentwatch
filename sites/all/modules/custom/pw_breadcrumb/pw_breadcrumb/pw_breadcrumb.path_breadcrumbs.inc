<?php
/**
 * @file
 * pw_breadcrumb.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function pw_breadcrumb_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'profiles_list';
  $path_breadcrumb->name = 'Profiles list';
  $path_breadcrumb->path = 'politicians/%parliament';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%parliament:name',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'parliament' => array(
        'position' => 1,
        'argument' => 'term',
        'settings' => array(
          'identifier' => 'Taxonomy term: ID',
          'input_form' => 'term',
          'vids' => array(
            4 => '4',
            2 => 0,
            3 => 0,
            5 => 0,
            1 => 0,
          ),
          'breadcrumb' => 0,
          'transform' => 0,
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['profiles_list'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'profiles_user';
  $path_breadcrumb->name = 'Profiles user Bundestag';
  $path_breadcrumb->path = 'user/%id';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%id:field_user_parliament',
      1 => '%id:field_user_fname %id:field_user_lname',
    ),
    'paths' => array(
      0 => 'politicians/%id:field_user_parliament',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'id' => array(
        'position' => 1,
        'argument' => 'entity_id:user',
        'settings' => array(
          'identifier' => 'User: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 181527986,
            ),
          ),
          'context' => 'id',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:user:user:field_user_parliament',
          'settings' => array(
            'field_user_parliament' => array(
              'und' => array(
                0 => array(
                  'tid' => '2',
                ),
              ),
            ),
            'field_user_parliament_tid' => '2',
          ),
          'context' => 'id',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['profiles_user'] = $path_breadcrumb;

  return $export;
}
