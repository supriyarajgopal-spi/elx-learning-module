<?php
/**
 * @file
 * elx_guest_url.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function elx_guest_url_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_account_status'.
  $field_bases['field_account_status'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_account_status',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'blocked' => 'Blocked',
        'active' => 'Active',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_guest_url'.
  $field_bases['field_guest_url'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_guest_url',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
