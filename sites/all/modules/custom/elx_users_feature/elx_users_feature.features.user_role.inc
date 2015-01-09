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

  return $roles;
}
