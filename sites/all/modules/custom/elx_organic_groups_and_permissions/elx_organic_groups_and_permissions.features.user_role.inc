<?php
/**
 * @file
 * elx_organic_groups_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function elx_organic_groups_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Power Users.
  $roles['Power Users'] = array(
    'name' => 'Power Users',
    'weight' => 8,
  );

  return $roles;
}
