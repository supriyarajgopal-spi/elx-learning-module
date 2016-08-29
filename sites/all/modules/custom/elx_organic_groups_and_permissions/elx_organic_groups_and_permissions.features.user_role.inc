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

  // Exported role: EL NYO GLOBAL EDUCATION SYSTEM ADMIN.
  $roles['EL NYO GLOBAL EDUCATION SYSTEM ADMIN'] = array(
    'name' => 'EL NYO Global Education System Admin',
    'weight' => 8,
  );

  return $roles;
}
