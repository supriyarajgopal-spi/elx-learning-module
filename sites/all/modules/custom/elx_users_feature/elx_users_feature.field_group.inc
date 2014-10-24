<?php
/**
 * @file
 * elx_users_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function elx_users_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_employee|user|user|form';
  $field_group->group_name = 'group_employee';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Employee info',
    'weight' => '4',
    'children' => array(
      0 => 'field_job_title',
      1 => 'field_employer_number',
      2 => 'field_subordinates',
      3 => 'field_store_counter_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Employee info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-employee field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_employee|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal|user|user|form';
  $field_group->group_name = 'group_personal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal information',
    'weight' => '3',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'account',
      3 => 'picture',
      4 => 'locale',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Personal information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-personal field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_personal|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_regional|user|user|form';
  $field_group->group_name = 'group_regional';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Regional information',
    'weight' => '5',
    'children' => array(
      0 => 'field_city',
      1 => 'field_country',
      2 => 'field_region_list',
      3 => 'timezone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Regional information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-regional field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_regional|user|user|form'] = $field_group;

  return $export;
}
