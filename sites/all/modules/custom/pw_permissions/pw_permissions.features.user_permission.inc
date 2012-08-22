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

  // Exported permission: use custom search blocks.
  $permissions['use custom search blocks'] = array(
    'name' => 'use custom search blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'custom_search_blocks',
  );

  return $permissions;
}
