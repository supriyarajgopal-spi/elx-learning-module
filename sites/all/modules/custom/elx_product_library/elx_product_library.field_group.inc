<?php
/**
 * @file
 * elx_product_library.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function elx_product_library_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partners|node|product_detail|default';
  $field_group->group_name = 'group_partners';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Perfect partners',
    'weight' => '7',
    'children' => array(
      0 => 'field_perfect_partners',
      1 => 'field_perfect_partners_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Perfect partners',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-partners field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_partners|node|product_detail|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partners|node|product_detail|form';
  $field_group->group_name = 'group_partners';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Perfect partners',
    'weight' => '16',
    'children' => array(
      0 => 'field_perfect_partners',
      1 => 'field_perfect_partners_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-partners field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_partners|node|product_detail|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partners|node|product_detail|modal';
  $field_group->group_name = 'group_partners';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail';
  $field_group->mode = 'modal';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Perfect partners',
    'weight' => '7',
    'children' => array(
      0 => 'field_perfect_partners',
      1 => 'field_perfect_partners_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Perfect partners',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-partners field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_partners|node|product_detail|modal'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Perfect partners');

  return $field_groups;
}
