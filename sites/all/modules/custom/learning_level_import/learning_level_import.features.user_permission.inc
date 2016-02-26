<?php
/**
 * @file
 * learning_level_import.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function learning_level_import_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer data tables'.
  $permissions['administer data tables'] = array(
    'name' => 'administer data tables',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'data_ui',
  );

  return $permissions;
}
