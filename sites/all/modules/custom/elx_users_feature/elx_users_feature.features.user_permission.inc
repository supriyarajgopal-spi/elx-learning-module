<?php
/**
 * @file
 * elx_users_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function elx_users_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_account_field_executive'.
  $permissions['create field_account_field_executive'] = array(
    'name' => 'create field_account_field_executive',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_account_name'.
  $permissions['create field_account_name'] = array(
    'name' => 'create field_account_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_city'.
  $permissions['create field_city'] = array(
    'name' => 'create field_city',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_counter_manager'.
  $permissions['create field_counter_manager'] = array(
    'name' => 'create field_counter_manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_country'.
  $permissions['create field_country'] = array(
    'name' => 'create field_country',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_door'.
  $permissions['create field_door'] = array(
    'name' => 'create field_door',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_education_manager_executiv'.
  $permissions['create field_education_manager_executiv'] = array(
    'name' => 'create field_education_manager_executiv',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_employer_number'.
  $permissions['create field_employer_number'] = array(
    'name' => 'create field_employer_number',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_employment_status'.
  $permissions['create field_employment_status'] = array(
    'name' => 'create field_employment_status',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_field_sales_director_regio'.
  $permissions['create field_field_sales_director_regio'] = array(
    'name' => 'create field_field_sales_director_regio',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_first_name'.
  $permissions['create field_first_name'] = array(
    'name' => 'create field_first_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_general_manager_brand_mana'.
  $permissions['create field_general_manager_brand_mana'] = array(
    'name' => 'create field_general_manager_brand_mana',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_hire_date'.
  $permissions['create field_hire_date'] = array(
    'name' => 'create field_hire_date',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_last_name'.
  $permissions['create field_last_name'] = array(
    'name' => 'create field_last_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_market_administrator'.
  $permissions['create field_market_administrator'] = array(
    'name' => 'create field_market_administrator',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_region_list'.
  $permissions['create field_region_list'] = array(
    'name' => 'create field_region_list',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_regional_vice_president'.
  $permissions['create field_regional_vice_president'] = array(
    'name' => 'create field_regional_vice_president',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_state'.
  $permissions['create field_state'] = array(
    'name' => 'create field_state',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_account_field_executive'.
  $permissions['edit field_account_field_executive'] = array(
    'name' => 'edit field_account_field_executive',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_account_name'.
  $permissions['edit field_account_name'] = array(
    'name' => 'edit field_account_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_city'.
  $permissions['edit field_city'] = array(
    'name' => 'edit field_city',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_counter_manager'.
  $permissions['edit field_counter_manager'] = array(
    'name' => 'edit field_counter_manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_country'.
  $permissions['edit field_country'] = array(
    'name' => 'edit field_country',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_door'.
  $permissions['edit field_door'] = array(
    'name' => 'edit field_door',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_education_manager_executiv'.
  $permissions['edit field_education_manager_executiv'] = array(
    'name' => 'edit field_education_manager_executiv',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_employer_number'.
  $permissions['edit field_employer_number'] = array(
    'name' => 'edit field_employer_number',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_employment_status'.
  $permissions['edit field_employment_status'] = array(
    'name' => 'edit field_employment_status',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_field_sales_director_regio'.
  $permissions['edit field_field_sales_director_regio'] = array(
    'name' => 'edit field_field_sales_director_regio',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_first_name'.
  $permissions['edit field_first_name'] = array(
    'name' => 'edit field_first_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_general_manager_brand_mana'.
  $permissions['edit field_general_manager_brand_mana'] = array(
    'name' => 'edit field_general_manager_brand_mana',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_hire_date'.
  $permissions['edit field_hire_date'] = array(
    'name' => 'edit field_hire_date',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_last_name'.
  $permissions['edit field_last_name'] = array(
    'name' => 'edit field_last_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_market_administrator'.
  $permissions['edit field_market_administrator'] = array(
    'name' => 'edit field_market_administrator',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_region_list'.
  $permissions['edit field_region_list'] = array(
    'name' => 'edit field_region_list',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_regional_vice_president'.
  $permissions['edit field_regional_vice_president'] = array(
    'name' => 'edit field_regional_vice_president',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_state'.
  $permissions['edit field_state'] = array(
    'name' => 'edit field_state',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_account_field_executive'.
  $permissions['edit own field_account_field_executive'] = array(
    'name' => 'edit own field_account_field_executive',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_account_name'.
  $permissions['edit own field_account_name'] = array(
    'name' => 'edit own field_account_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_city'.
  $permissions['edit own field_city'] = array(
    'name' => 'edit own field_city',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_counter_manager'.
  $permissions['edit own field_counter_manager'] = array(
    'name' => 'edit own field_counter_manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_country'.
  $permissions['edit own field_country'] = array(
    'name' => 'edit own field_country',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_door'.
  $permissions['edit own field_door'] = array(
    'name' => 'edit own field_door',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_education_manager_executiv'.
  $permissions['edit own field_education_manager_executiv'] = array(
    'name' => 'edit own field_education_manager_executiv',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_employer_number'.
  $permissions['edit own field_employer_number'] = array(
    'name' => 'edit own field_employer_number',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_employment_status'.
  $permissions['edit own field_employment_status'] = array(
    'name' => 'edit own field_employment_status',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_field_sales_director_regio'.
  $permissions['edit own field_field_sales_director_regio'] = array(
    'name' => 'edit own field_field_sales_director_regio',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_first_name'.
  $permissions['edit own field_first_name'] = array(
    'name' => 'edit own field_first_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_general_manager_brand_mana'.
  $permissions['edit own field_general_manager_brand_mana'] = array(
    'name' => 'edit own field_general_manager_brand_mana',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_hire_date'.
  $permissions['edit own field_hire_date'] = array(
    'name' => 'edit own field_hire_date',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_last_name'.
  $permissions['edit own field_last_name'] = array(
    'name' => 'edit own field_last_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_market_administrator'.
  $permissions['edit own field_market_administrator'] = array(
    'name' => 'edit own field_market_administrator',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_region_list'.
  $permissions['edit own field_region_list'] = array(
    'name' => 'edit own field_region_list',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_regional_vice_president'.
  $permissions['edit own field_regional_vice_president'] = array(
    'name' => 'edit own field_regional_vice_president',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_state'.
  $permissions['edit own field_state'] = array(
    'name' => 'edit own field_state',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_account_field_executive'.
  $permissions['view field_account_field_executive'] = array(
    'name' => 'view field_account_field_executive',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_account_name'.
  $permissions['view field_account_name'] = array(
    'name' => 'view field_account_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_city'.
  $permissions['view field_city'] = array(
    'name' => 'view field_city',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_counter_manager'.
  $permissions['view field_counter_manager'] = array(
    'name' => 'view field_counter_manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_country'.
  $permissions['view field_country'] = array(
    'name' => 'view field_country',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_door'.
  $permissions['view field_door'] = array(
    'name' => 'view field_door',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_education_manager_executiv'.
  $permissions['view field_education_manager_executiv'] = array(
    'name' => 'view field_education_manager_executiv',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_employer_number'.
  $permissions['view field_employer_number'] = array(
    'name' => 'view field_employer_number',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_employment_status'.
  $permissions['view field_employment_status'] = array(
    'name' => 'view field_employment_status',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_field_sales_director_regio'.
  $permissions['view field_field_sales_director_regio'] = array(
    'name' => 'view field_field_sales_director_regio',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_first_name'.
  $permissions['view field_first_name'] = array(
    'name' => 'view field_first_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_general_manager_brand_mana'.
  $permissions['view field_general_manager_brand_mana'] = array(
    'name' => 'view field_general_manager_brand_mana',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_hire_date'.
  $permissions['view field_hire_date'] = array(
    'name' => 'view field_hire_date',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_last_name'.
  $permissions['view field_last_name'] = array(
    'name' => 'view field_last_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_market_administrator'.
  $permissions['view field_market_administrator'] = array(
    'name' => 'view field_market_administrator',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_region_list'.
  $permissions['view field_region_list'] = array(
    'name' => 'view field_region_list',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_regional_vice_president'.
  $permissions['view field_regional_vice_president'] = array(
    'name' => 'view field_regional_vice_president',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_state'.
  $permissions['view field_state'] = array(
    'name' => 'view field_state',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_account_field_executive'.
  $permissions['view own field_account_field_executive'] = array(
    'name' => 'view own field_account_field_executive',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_account_name'.
  $permissions['view own field_account_name'] = array(
    'name' => 'view own field_account_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_city'.
  $permissions['view own field_city'] = array(
    'name' => 'view own field_city',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_counter_manager'.
  $permissions['view own field_counter_manager'] = array(
    'name' => 'view own field_counter_manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_country'.
  $permissions['view own field_country'] = array(
    'name' => 'view own field_country',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_door'.
  $permissions['view own field_door'] = array(
    'name' => 'view own field_door',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_education_manager_executiv'.
  $permissions['view own field_education_manager_executiv'] = array(
    'name' => 'view own field_education_manager_executiv',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_employer_number'.
  $permissions['view own field_employer_number'] = array(
    'name' => 'view own field_employer_number',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_employment_status'.
  $permissions['view own field_employment_status'] = array(
    'name' => 'view own field_employment_status',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_field_sales_director_regio'.
  $permissions['view own field_field_sales_director_regio'] = array(
    'name' => 'view own field_field_sales_director_regio',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_first_name'.
  $permissions['view own field_first_name'] = array(
    'name' => 'view own field_first_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_general_manager_brand_mana'.
  $permissions['view own field_general_manager_brand_mana'] = array(
    'name' => 'view own field_general_manager_brand_mana',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_hire_date'.
  $permissions['view own field_hire_date'] = array(
    'name' => 'view own field_hire_date',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_last_name'.
  $permissions['view own field_last_name'] = array(
    'name' => 'view own field_last_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_market_administrator'.
  $permissions['view own field_market_administrator'] = array(
    'name' => 'view own field_market_administrator',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_region_list'.
  $permissions['view own field_region_list'] = array(
    'name' => 'view own field_region_list',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_regional_vice_president'.
  $permissions['view own field_regional_vice_president'] = array(
    'name' => 'view own field_regional_vice_president',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_state'.
  $permissions['view own field_state'] = array(
    'name' => 'view own field_state',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
