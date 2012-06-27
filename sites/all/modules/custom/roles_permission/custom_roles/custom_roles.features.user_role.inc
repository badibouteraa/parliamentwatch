<?php
/**
 * @file
 * custom_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function custom_roles_user_default_roles() {
  $roles = array();

  // Exported role: Politician.
  $roles['Politician'] = array(
    'name' => 'Politician',
    'weight' => '4',
  );

  return $roles;
}
