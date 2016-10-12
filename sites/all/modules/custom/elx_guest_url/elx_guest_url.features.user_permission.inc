<?php
/**
 * @file
 * elx_guest_url.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function elx_guest_url_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create guest_accounts content'.
  $permissions['create guest_accounts content'] = array(
    'name' => 'create guest_accounts content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any guest_accounts content'.
  $permissions['delete any guest_accounts content'] = array(
    'name' => 'delete any guest_accounts content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own guest_accounts content'.
  $permissions['delete own guest_accounts content'] = array(
    'name' => 'delete own guest_accounts content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any guest_accounts content'.
  $permissions['edit any guest_accounts content'] = array(
    'name' => 'edit any guest_accounts content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own guest_accounts content'.
  $permissions['edit own guest_accounts content'] = array(
    'name' => 'edit own guest_accounts content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
