<?php
/**
 * @file
 * roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function roles_user_default_roles() {
  $roles = array();

  // Exported role: Content Manager.
  $roles['Content Manager'] = array(
    'name' => 'Content Manager',
    'weight' => '4',
  );

  // Exported role: Politician.
  $roles['Politician'] = array(
    'name' => 'Politician',
    'weight' => '3',
  );

  return $roles;
}
