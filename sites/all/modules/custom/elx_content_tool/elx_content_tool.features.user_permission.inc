<?php
/**
 * @file
 * elx_content_tool.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function elx_content_tool_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create og_user_node'.
  $permissions['create og_user_node'] = array(
    'name' => 'create og_user_node',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit og_user_node'.
  $permissions['edit og_user_node'] = array(
    'name' => 'edit og_user_node',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own og_user_node'.
  $permissions['edit own og_user_node'] = array(
    'name' => 'edit own og_user_node',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view og_user_node'.
  $permissions['view og_user_node'] = array(
    'name' => 'view og_user_node',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own og_user_node'.
  $permissions['view own og_user_node'] = array(
    'name' => 'view own og_user_node',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
