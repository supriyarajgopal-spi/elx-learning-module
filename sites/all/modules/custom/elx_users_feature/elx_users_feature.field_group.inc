<?php
/**
 * @file
 * elx_users_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function elx_users_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_elx_user|user|user|form';
  $field_group->group_name = 'group_elx_user';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ELX Data',
    'weight' => '3',
    'children' => array(
      0 => 'field_last_access_date',
      1 => 'field_level',
      2 => 'field_modified_date',
      3 => 'field_rank',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'ELX Data',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-elx-user field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_elx_user|user|user|form'] = $field_group;

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
    'weight' => '1',
    'children' => array(
      0 => 'field_account_field_executive',
      1 => 'field_account_name',
      2 => 'field_counter_manager',
      3 => 'field_door',
      4 => 'field_education_manager_executiv',
      5 => 'field_employer_number',
      6 => 'field_hire_date',
      7 => 'field_field_sales_director_regio',
      8 => 'field_general_manager_brand_mana',
      9 => 'field_market_administrator',
      10 => 'field_regional_vice_president',
      11 => 'field_employment_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Employee info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-employee field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_employee|user|user|form'] = $field_group;

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
    'weight' => '0',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'account',
      3 => 'locale',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Personal information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-personal field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_personal|user|user|form'] = $field_group;

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
    'weight' => '2',
    'children' => array(
      0 => 'field_city',
      1 => 'field_country',
      2 => 'field_region_list',
      3 => 'field_state',
      4 => 'og_user_node',
      5 => 'timezone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Regional information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-regional field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_regional|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('ELX Data');
  t('Employee info');
  t('Personal information');
  t('Regional information');

  return $field_groups;
}
