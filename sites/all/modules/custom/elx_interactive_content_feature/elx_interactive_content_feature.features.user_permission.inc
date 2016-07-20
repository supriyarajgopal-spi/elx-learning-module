<?php
/**
 * @file
 * elx_interactive_content_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function elx_interactive_content_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access all h5p results'.
  $permissions['access all h5p results'] = array(
    'name' => 'access all h5p results',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'h5p',
  );

  // Exported permission: 'access h5p results for own content'.
  $permissions['access h5p results for own content'] = array(
    'name' => 'access h5p results for own content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'h5p',
  );

  // Exported permission: 'access own h5p results'.
  $permissions['access own h5p results'] = array(
    'name' => 'access own h5p results',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'h5p',
  );

  // Exported permission: 'create restricted h5p content types'.
  $permissions['create restricted h5p content types'] = array(
    'name' => 'create restricted h5p content types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'h5p',
  );

  // Exported permission: 'update h5p libraries'.
  $permissions['update h5p libraries'] = array(
    'name' => 'update h5p libraries',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'h5p',
  );

  return $permissions;
}
