<?php
/**
 * @file
 * elx_users_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function elx_users_feature_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 2,
  );

  // Exported role: Beauty Advisor.
  $roles['Beauty Advisor'] = array(
    'name' => 'Beauty Advisor',
    'weight' => 3,
  );

  // Exported role: Counter Manager.
  $roles['Counter Manager'] = array(
    'name' => 'Counter Manager',
    'weight' => 4,
  );

  // Exported role: Field Executive.
  $roles['Field Executive'] = array(
    'name' => 'Field Executive',
    'weight' => 5,
  );

  return $roles;
}
