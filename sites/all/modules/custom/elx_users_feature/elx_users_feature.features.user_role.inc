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

  // Exported role: Brand Management and Field.
  $roles['Brand Management and Field'] = array(
    'name' => 'Brand Management and Field',
    'weight' => 6,
  );

  // Exported role: EL NYO Global Education System Admin.
  $roles['EL NYO Global Education System Admin'] = array(
    'name' => 'EL NYO Global Education System Admin',
    'weight' => 8,
  );

  // Exported role: EL Regional Market Admin.
  $roles['EL Regional Market Admin'] = array(
    'name' => 'EL Regional Market Admin',
    'weight' => 7,
  );

  // Exported role: Multi-Brand Sales Associate.
  $roles['Multi-Brand Sales Associate'] = array(
    'name' => 'Multi-Brand Sales Associate',
    'weight' => 5,
  );

  // Exported role: Store Management.
  $roles['Store Management'] = array(
    'name' => 'Store Management',
    'weight' => 4,
  );

  return $roles;
}
