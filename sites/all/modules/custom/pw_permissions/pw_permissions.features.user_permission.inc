<?php
/**
 * @file
 * pw_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access forward.
  $permissions['access forward'] = array(
    'name' => 'access forward',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'forward',
  );

  // Exported permission: access print.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'print',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: use custom search.
  $permissions['use custom search'] = array(
    'name' => 'use custom search',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: use custom search blocks.
  $permissions['use custom search blocks'] = array(
    'name' => 'use custom search blocks',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'custom_search_blocks',
  );

  return $permissions;
}
