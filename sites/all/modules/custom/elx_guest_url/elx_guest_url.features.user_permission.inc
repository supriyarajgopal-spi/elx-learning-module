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

  // Exported permission: 'access resource invite'.
  $permissions['access resource invite'] = array(
    'name' => 'access resource invite',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource invite_type'.
  $permissions['access resource invite_type'] = array(
    'name' => 'access resource invite_type',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'administer invitations'.
  $permissions['administer invitations'] = array(
    'name' => 'administer invitations',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'administer invite types'.
  $permissions['administer invite types'] = array(
    'name' => 'administer invite types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'administer referral'.
  $permissions['administer referral'] = array(
    'name' => 'administer referral',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'referral',
  );

  // Exported permission: 'create any invite entities'.
  $permissions['create any invite entities'] = array(
    'name' => 'create any invite entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'create guest_url entity'.
  $permissions['create guest_url entity'] = array(
    'name' => 'create guest_url entity',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'create invite_by_email entity'.
  $permissions['create invite_by_email entity'] = array(
    'name' => 'create invite_by_email entity',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'edit any invite entities'.
  $permissions['edit any invite entities'] = array(
    'name' => 'edit any invite entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'edit own invite entities'.
  $permissions['edit own invite entities'] = array(
    'name' => 'edit own invite entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'use referral'.
  $permissions['use referral'] = array(
    'name' => 'use referral',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'referral',
  );

  // Exported permission: 'view any invite entities'.
  $permissions['view any invite entities'] = array(
    'name' => 'view any invite entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'withdraw own accepted invitations'.
  $permissions['withdraw own accepted invitations'] = array(
    'name' => 'withdraw own accepted invitations',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'invite',
  );

  // Exported permission: 'withdraw own invitations'.
  $permissions['withdraw own invitations'] = array(
    'name' => 'withdraw own invitations',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'invite',
  );

  return $permissions;
}
