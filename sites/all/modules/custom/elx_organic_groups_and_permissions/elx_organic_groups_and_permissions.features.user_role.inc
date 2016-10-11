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

  // Exported role: EL Regional Market Translater.
  $roles['EL Regional Market Translater'] = array(
    'name' => 'EL Regional Market Translater',
    'weight' => 9,
  );

  return $roles;
}
