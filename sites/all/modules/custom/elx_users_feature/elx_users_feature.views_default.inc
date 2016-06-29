<?php
/**
 * @file
 * elx_users_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function elx_users_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Export';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'mail' => 'mail',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_employer_number' => 'field_employer_number',
    'rid' => 'rid',
    'field_door' => 'field_door',
    'field_account_name' => 'field_account_name',
    'field_account_field_executive' => 'field_account_field_executive',
    'field_city' => 'field_city',
    'field_state' => 'field_state',
    'field_country' => 'field_country',
    'field_region_list' => 'field_region_list',
    'field_counter_manager' => 'field_counter_manager',
    'field_education_manager_executiv' => 'field_education_manager_executiv',
    'field_hire_date' => 'field_hire_date',
    'field_market_name' => 'field_market_name',
    'field_regional_vice_president' => 'field_regional_vice_president',
    'status' => 'status',
    'language' => 'language',
    'field_field_sales_director_regio' => 'field_field_sales_director_regio',
    'field_general_manager_brand_mana' => 'field_general_manager_brand_mana',
    'field_market_administrator' => 'field_market_administrator',
    'access' => 'access',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_employer_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_door' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_account_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_account_field_executive' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region_list' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_counter_manager' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_education_manager_executiv' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hire_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_market_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_regional_vice_president' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'language' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_field_sales_director_regio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_general_manager_brand_mana' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_market_administrator' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: User: Employer number */
  $handler->display->display_options['fields']['field_employer_number']['id'] = 'field_employer_number';
  $handler->display->display_options['fields']['field_employer_number']['table'] = 'field_data_field_employer_number';
  $handler->display->display_options['fields']['field_employer_number']['field'] = 'field_employer_number';
  $handler->display->display_options['fields']['field_employer_number']['exclude'] = TRUE;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: Field: Door */
  $handler->display->display_options['fields']['field_door']['id'] = 'field_door';
  $handler->display->display_options['fields']['field_door']['table'] = 'field_data_field_door';
  $handler->display->display_options['fields']['field_door']['field'] = 'field_door';
  $handler->display->display_options['fields']['field_door']['exclude'] = TRUE;
  /* Field: User: Account name */
  $handler->display->display_options['fields']['field_account_name']['id'] = 'field_account_name';
  $handler->display->display_options['fields']['field_account_name']['table'] = 'field_data_field_account_name';
  $handler->display->display_options['fields']['field_account_name']['field'] = 'field_account_name';
  $handler->display->display_options['fields']['field_account_name']['exclude'] = TRUE;
  /* Field: User: Account/field executive */
  $handler->display->display_options['fields']['field_account_field_executive']['id'] = 'field_account_field_executive';
  $handler->display->display_options['fields']['field_account_field_executive']['table'] = 'field_data_field_account_field_executive';
  $handler->display->display_options['fields']['field_account_field_executive']['field'] = 'field_account_field_executive';
  /* Field: User: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  /* Field: User: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  /* Field: Field: Region */
  $handler->display->display_options['fields']['field_region_list']['id'] = 'field_region_list';
  $handler->display->display_options['fields']['field_region_list']['table'] = 'field_data_field_region_list';
  $handler->display->display_options['fields']['field_region_list']['field'] = 'field_region_list';
  /* Field: User: Counter manager */
  $handler->display->display_options['fields']['field_counter_manager']['id'] = 'field_counter_manager';
  $handler->display->display_options['fields']['field_counter_manager']['table'] = 'field_data_field_counter_manager';
  $handler->display->display_options['fields']['field_counter_manager']['field'] = 'field_counter_manager';
  $handler->display->display_options['fields']['field_counter_manager']['exclude'] = TRUE;
  /* Field: User: Education manager/executive */
  $handler->display->display_options['fields']['field_education_manager_executiv']['id'] = 'field_education_manager_executiv';
  $handler->display->display_options['fields']['field_education_manager_executiv']['table'] = 'field_data_field_education_manager_executiv';
  $handler->display->display_options['fields']['field_education_manager_executiv']['field'] = 'field_education_manager_executiv';
  /* Field: User: Hire date */
  $handler->display->display_options['fields']['field_hire_date']['id'] = 'field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['table'] = 'field_data_field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['field'] = 'field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hire_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_market_name']['id'] = 'field_market_name';
  $handler->display->display_options['fields']['field_market_name']['table'] = 'field_data_field_market_name';
  $handler->display->display_options['fields']['field_market_name']['field'] = 'field_market_name';
  /* Field: User: Regional Vice President */
  $handler->display->display_options['fields']['field_regional_vice_president']['id'] = 'field_regional_vice_president';
  $handler->display->display_options['fields']['field_regional_vice_president']['table'] = 'field_data_field_regional_vice_president';
  $handler->display->display_options['fields']['field_regional_vice_president']['field'] = 'field_regional_vice_president';
  $handler->display->display_options['fields']['field_regional_vice_president']['exclude'] = TRUE;
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'custom';
  $handler->display->display_options['fields']['status']['type_custom_true'] = 'Active';
  $handler->display->display_options['fields']['status']['type_custom_false'] = 'Inactive';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'users';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  /* Field: User: Field Sales Director/Regional Education Director */
  $handler->display->display_options['fields']['field_field_sales_director_regio']['id'] = 'field_field_sales_director_regio';
  $handler->display->display_options['fields']['field_field_sales_director_regio']['table'] = 'field_data_field_field_sales_director_regio';
  $handler->display->display_options['fields']['field_field_sales_director_regio']['field'] = 'field_field_sales_director_regio';
  $handler->display->display_options['fields']['field_field_sales_director_regio']['exclude'] = TRUE;
  /* Field: User: General Manager/Brand Manager */
  $handler->display->display_options['fields']['field_general_manager_brand_mana']['id'] = 'field_general_manager_brand_mana';
  $handler->display->display_options['fields']['field_general_manager_brand_mana']['table'] = 'field_data_field_general_manager_brand_mana';
  $handler->display->display_options['fields']['field_general_manager_brand_mana']['field'] = 'field_general_manager_brand_mana';
  $handler->display->display_options['fields']['field_general_manager_brand_mana']['exclude'] = TRUE;
  /* Field: User: Market Administrator */
  $handler->display->display_options['fields']['field_market_administrator']['id'] = 'field_market_administrator';
  $handler->display->display_options['fields']['field_market_administrator']['table'] = 'field_data_field_market_administrator';
  $handler->display->display_options['fields']['field_market_administrator']['field'] = 'field_market_administrator';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['access']['second_date_format'] = 'long';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Roles';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Field: Region (field_region_list) */
  $handler->display->display_options['filters']['field_region_list_value']['id'] = 'field_region_list_value';
  $handler->display->display_options['filters']['field_region_list_value']['table'] = 'field_data_field_region_list';
  $handler->display->display_options['filters']['field_region_list_value']['field'] = 'field_region_list_value';
  $handler->display->display_options['filters']['field_region_list_value']['group'] = 1;
  $handler->display->display_options['filters']['field_region_list_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_list_value']['expose']['operator_id'] = 'field_region_list_value_op';
  $handler->display->display_options['filters']['field_region_list_value']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_list_value']['expose']['operator'] = 'field_region_list_value_op';
  $handler->display->display_options['filters']['field_region_list_value']['expose']['identifier'] = 'field_region_list_value';
  $handler->display->display_options['filters']['field_region_list_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_market_name_value']['id'] = 'field_market_name_value';
  $handler->display->display_options['filters']['field_market_name_value']['table'] = 'field_data_field_market_name';
  $handler->display->display_options['filters']['field_market_name_value']['field'] = 'field_market_name_value';
  $handler->display->display_options['filters']['field_market_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_market_name_value']['expose']['operator_id'] = 'field_market_name_value_op';
  $handler->display->display_options['filters']['field_market_name_value']['expose']['label'] = 'Market name';
  $handler->display->display_options['filters']['field_market_name_value']['expose']['operator'] = 'field_market_name_value_op';
  $handler->display->display_options['filters']['field_market_name_value']['expose']['identifier'] = 'field_market_name_value';
  $handler->display->display_options['filters']['field_market_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Market Administrator (field_market_administrator) */
  $handler->display->display_options['filters']['field_market_administrator_value']['id'] = 'field_market_administrator_value';
  $handler->display->display_options['filters']['field_market_administrator_value']['table'] = 'field_data_field_market_administrator';
  $handler->display->display_options['filters']['field_market_administrator_value']['field'] = 'field_market_administrator_value';
  $handler->display->display_options['filters']['field_market_administrator_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_market_administrator_value']['expose']['operator_id'] = 'field_market_administrator_value_op';
  $handler->display->display_options['filters']['field_market_administrator_value']['expose']['label'] = 'Market Administrator';
  $handler->display->display_options['filters']['field_market_administrator_value']['expose']['operator'] = 'field_market_administrator_value_op';
  $handler->display->display_options['filters']['field_market_administrator_value']['expose']['identifier'] = 'field_market_administrator_value';
  $handler->display->display_options['filters']['field_market_administrator_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Account/field executive (field_account_field_executive) */
  $handler->display->display_options['filters']['field_account_field_executive_value']['id'] = 'field_account_field_executive_value';
  $handler->display->display_options['filters']['field_account_field_executive_value']['table'] = 'field_data_field_account_field_executive';
  $handler->display->display_options['filters']['field_account_field_executive_value']['field'] = 'field_account_field_executive_value';
  $handler->display->display_options['filters']['field_account_field_executive_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_account_field_executive_value']['expose']['operator_id'] = 'field_account_field_executive_value_op';
  $handler->display->display_options['filters']['field_account_field_executive_value']['expose']['label'] = 'Account/field executive';
  $handler->display->display_options['filters']['field_account_field_executive_value']['expose']['operator'] = 'field_account_field_executive_value_op';
  $handler->display->display_options['filters']['field_account_field_executive_value']['expose']['identifier'] = 'field_account_field_executive_value';
  $handler->display->display_options['filters']['field_account_field_executive_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Last access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'users';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['access']['exposed'] = TRUE;
  $handler->display->display_options['filters']['access']['expose']['operator_id'] = 'access_op';
  $handler->display->display_options['filters']['access']['expose']['label'] = 'Last access';
  $handler->display->display_options['filters']['access']['expose']['operator'] = 'access_op';
  $handler->display->display_options['filters']['access']['expose']['identifier'] = 'access';
  $handler->display->display_options['filters']['access']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: Field: Door (field_door) */
  $handler->display->display_options['filters']['field_door_value']['id'] = 'field_door_value';
  $handler->display->display_options['filters']['field_door_value']['table'] = 'field_data_field_door';
  $handler->display->display_options['filters']['field_door_value']['field'] = 'field_door_value';
  $handler->display->display_options['filters']['field_door_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_door_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_door_value']['expose']['operator_id'] = 'field_door_value_op';
  $handler->display->display_options['filters']['field_door_value']['expose']['label'] = 'Door';
  $handler->display->display_options['filters']['field_door_value']['expose']['operator'] = 'field_door_value_op';
  $handler->display->display_options['filters']['field_door_value']['expose']['identifier'] = 'field_door_value';
  $handler->display->display_options['filters']['field_door_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Account name (field_account_name) */
  $handler->display->display_options['filters']['field_account_name_value']['id'] = 'field_account_name_value';
  $handler->display->display_options['filters']['field_account_name_value']['table'] = 'field_data_field_account_name';
  $handler->display->display_options['filters']['field_account_name_value']['field'] = 'field_account_name_value';
  $handler->display->display_options['filters']['field_account_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_account_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_account_name_value']['expose']['operator_id'] = 'field_account_name_value_op';
  $handler->display->display_options['filters']['field_account_name_value']['expose']['label'] = 'Account name';
  $handler->display->display_options['filters']['field_account_name_value']['expose']['operator'] = 'field_account_name_value_op';
  $handler->display->display_options['filters']['field_account_name_value']['expose']['identifier'] = 'field_account_name_value';
  $handler->display->display_options['filters']['field_account_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::one_time_login_send_register_no_approval_required' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Send welcome e-mail',
    ),
  );
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: User: Employer number */
  $handler->display->display_options['fields']['field_employer_number']['id'] = 'field_employer_number';
  $handler->display->display_options['fields']['field_employer_number']['table'] = 'field_data_field_employer_number';
  $handler->display->display_options['fields']['field_employer_number']['field'] = 'field_employer_number';
  $handler->display->display_options['fields']['field_employer_number']['exclude'] = TRUE;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: Field: Door */
  $handler->display->display_options['fields']['field_door']['id'] = 'field_door';
  $handler->display->display_options['fields']['field_door']['table'] = 'field_data_field_door';
  $handler->display->display_options['fields']['field_door']['field'] = 'field_door';
  $handler->display->display_options['fields']['field_door']['exclude'] = TRUE;
  /* Field: User: Account name */
  $handler->display->display_options['fields']['field_account_name']['id'] = 'field_account_name';
  $handler->display->display_options['fields']['field_account_name']['table'] = 'field_data_field_account_name';
  $handler->display->display_options['fields']['field_account_name']['field'] = 'field_account_name';
  $handler->display->display_options['fields']['field_account_name']['exclude'] = TRUE;
  /* Field: User: Account/field executive */
  $handler->display->display_options['fields']['field_account_field_executive']['id'] = 'field_account_field_executive';
  $handler->display->display_options['fields']['field_account_field_executive']['table'] = 'field_data_field_account_field_executive';
  $handler->display->display_options['fields']['field_account_field_executive']['field'] = 'field_account_field_executive';
  /* Field: User: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  /* Field: User: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  /* Field: Field: Region */
  $handler->display->display_options['fields']['field_region_list']['id'] = 'field_region_list';
  $handler->display->display_options['fields']['field_region_list']['table'] = 'field_data_field_region_list';
  $handler->display->display_options['fields']['field_region_list']['field'] = 'field_region_list';
  /* Field: User: Counter manager */
  $handler->display->display_options['fields']['field_counter_manager']['id'] = 'field_counter_manager';
  $handler->display->display_options['fields']['field_counter_manager']['table'] = 'field_data_field_counter_manager';
  $handler->display->display_options['fields']['field_counter_manager']['field'] = 'field_counter_manager';
  $handler->display->display_options['fields']['field_counter_manager']['exclude'] = TRUE;
  /* Field: User: Education manager/executive */
  $handler->display->display_options['fields']['field_education_manager_executiv']['id'] = 'field_education_manager_executiv';
  $handler->display->display_options['fields']['field_education_manager_executiv']['table'] = 'field_data_field_education_manager_executiv';
  $handler->display->display_options['fields']['field_education_manager_executiv']['field'] = 'field_education_manager_executiv';
  /* Field: User: Hire date */
  $handler->display->display_options['fields']['field_hire_date']['id'] = 'field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['table'] = 'field_data_field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['field'] = 'field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hire_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_market_name']['id'] = 'field_market_name';
  $handler->display->display_options['fields']['field_market_name']['table'] = 'field_data_field_market_name';
  $handler->display->display_options['fields']['field_market_name']['field'] = 'field_market_name';
  /* Field: User: Regional Vice President */
  $handler->display->display_options['fields']['field_regional_vice_president']['id'] = 'field_regional_vice_president';
  $handler->display->display_options['fields']['field_regional_vice_president']['table'] = 'field_data_field_regional_vice_president';
  $handler->display->display_options['fields']['field_regional_vice_president']['field'] = 'field_regional_vice_president';
  $handler->display->display_options['fields']['field_regional_vice_president']['exclude'] = TRUE;
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'custom';
  $handler->display->display_options['fields']['status']['type_custom_true'] = 'Active';
  $handler->display->display_options['fields']['status']['type_custom_false'] = 'Inactive';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'users';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  /* Field: User: Field Sales Director/Regional Education Director */
  $handler->display->display_options['fields']['field_field_sales_director_regio']['id'] = 'field_field_sales_director_regio';
  $handler->display->display_options['fields']['field_field_sales_director_regio']['table'] = 'field_data_field_field_sales_director_regio';
  $handler->display->display_options['fields']['field_field_sales_director_regio']['field'] = 'field_field_sales_director_regio';
  $handler->display->display_options['fields']['field_field_sales_director_regio']['exclude'] = TRUE;
  /* Field: User: General Manager/Brand Manager */
  $handler->display->display_options['fields']['field_general_manager_brand_mana']['id'] = 'field_general_manager_brand_mana';
  $handler->display->display_options['fields']['field_general_manager_brand_mana']['table'] = 'field_data_field_general_manager_brand_mana';
  $handler->display->display_options['fields']['field_general_manager_brand_mana']['field'] = 'field_general_manager_brand_mana';
  $handler->display->display_options['fields']['field_general_manager_brand_mana']['exclude'] = TRUE;
  /* Field: User: Market Administrator */
  $handler->display->display_options['fields']['field_market_administrator']['id'] = 'field_market_administrator';
  $handler->display->display_options['fields']['field_market_administrator']['table'] = 'field_data_field_market_administrator';
  $handler->display->display_options['fields']['field_market_administrator']['field'] = 'field_market_administrator';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['access']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Roles';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Field: Region (field_region_list) */
  $handler->display->display_options['filters']['field_region_list_value']['id'] = 'field_region_list_value';
  $handler->display->display_options['filters']['field_region_list_value']['table'] = 'field_data_field_region_list';
  $handler->display->display_options['filters']['field_region_list_value']['field'] = 'field_region_list_value';
  $handler->display->display_options['filters']['field_region_list_value']['group'] = 1;
  $handler->display->display_options['filters']['field_region_list_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_list_value']['expose']['operator_id'] = 'field_region_list_value_op';
  $handler->display->display_options['filters']['field_region_list_value']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_list_value']['expose']['operator'] = 'field_region_list_value_op';
  $handler->display->display_options['filters']['field_region_list_value']['expose']['identifier'] = 'field_region_list_value';
  $handler->display->display_options['filters']['field_region_list_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_market_name_value']['id'] = 'field_market_name_value';
  $handler->display->display_options['filters']['field_market_name_value']['table'] = 'field_data_field_market_name';
  $handler->display->display_options['filters']['field_market_name_value']['field'] = 'field_market_name_value';
  $handler->display->display_options['filters']['field_market_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_market_name_value']['expose']['operator_id'] = 'field_market_name_value_op';
  $handler->display->display_options['filters']['field_market_name_value']['expose']['label'] = 'Market name';
  $handler->display->display_options['filters']['field_market_name_value']['expose']['operator'] = 'field_market_name_value_op';
  $handler->display->display_options['filters']['field_market_name_value']['expose']['identifier'] = 'field_market_name_value';
  $handler->display->display_options['filters']['field_market_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Market Administrator (field_market_administrator) */
  $handler->display->display_options['filters']['field_market_administrator_value']['id'] = 'field_market_administrator_value';
  $handler->display->display_options['filters']['field_market_administrator_value']['table'] = 'field_data_field_market_administrator';
  $handler->display->display_options['filters']['field_market_administrator_value']['field'] = 'field_market_administrator_value';
  $handler->display->display_options['filters']['field_market_administrator_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_market_administrator_value']['expose']['operator_id'] = 'field_market_administrator_value_op';
  $handler->display->display_options['filters']['field_market_administrator_value']['expose']['label'] = 'Market Administrator';
  $handler->display->display_options['filters']['field_market_administrator_value']['expose']['operator'] = 'field_market_administrator_value_op';
  $handler->display->display_options['filters']['field_market_administrator_value']['expose']['identifier'] = 'field_market_administrator_value';
  $handler->display->display_options['filters']['field_market_administrator_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Account/field executive (field_account_field_executive) */
  $handler->display->display_options['filters']['field_account_field_executive_value']['id'] = 'field_account_field_executive_value';
  $handler->display->display_options['filters']['field_account_field_executive_value']['table'] = 'field_data_field_account_field_executive';
  $handler->display->display_options['filters']['field_account_field_executive_value']['field'] = 'field_account_field_executive_value';
  $handler->display->display_options['filters']['field_account_field_executive_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_account_field_executive_value']['expose']['operator_id'] = 'field_account_field_executive_value_op';
  $handler->display->display_options['filters']['field_account_field_executive_value']['expose']['label'] = 'Account/field executive';
  $handler->display->display_options['filters']['field_account_field_executive_value']['expose']['operator'] = 'field_account_field_executive_value_op';
  $handler->display->display_options['filters']['field_account_field_executive_value']['expose']['identifier'] = 'field_account_field_executive_value';
  $handler->display->display_options['filters']['field_account_field_executive_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Last access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'users';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['access']['exposed'] = TRUE;
  $handler->display->display_options['filters']['access']['expose']['operator_id'] = 'access_op';
  $handler->display->display_options['filters']['access']['expose']['label'] = 'Last access';
  $handler->display->display_options['filters']['access']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['access']['expose']['operator'] = 'access_op';
  $handler->display->display_options['filters']['access']['expose']['identifier'] = 'access';
  $handler->display->display_options['filters']['access']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Account name (field_account_name) */
  $handler->display->display_options['filters']['field_account_name_value']['id'] = 'field_account_name_value';
  $handler->display->display_options['filters']['field_account_name_value']['table'] = 'field_data_field_account_name';
  $handler->display->display_options['filters']['field_account_name_value']['field'] = 'field_account_name_value';
  $handler->display->display_options['filters']['field_account_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_account_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_account_name_value']['expose']['operator_id'] = 'field_account_name_value_op';
  $handler->display->display_options['filters']['field_account_name_value']['expose']['label'] = 'Account name';
  $handler->display->display_options['filters']['field_account_name_value']['expose']['operator'] = 'field_account_name_value_op';
  $handler->display->display_options['filters']['field_account_name_value']['expose']['identifier'] = 'field_account_name_value';
  $handler->display->display_options['filters']['field_account_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: Field: Door (field_door) */
  $handler->display->display_options['filters']['field_door_value']['id'] = 'field_door_value';
  $handler->display->display_options['filters']['field_door_value']['table'] = 'field_data_field_door';
  $handler->display->display_options['filters']['field_door_value']['field'] = 'field_door_value';
  $handler->display->display_options['filters']['field_door_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_door_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_door_value']['expose']['operator_id'] = 'field_door_value_op';
  $handler->display->display_options['filters']['field_door_value']['expose']['label'] = 'Door';
  $handler->display->display_options['filters']['field_door_value']['expose']['operator'] = 'field_door_value_op';
  $handler->display->display_options['filters']['field_door_value']['expose']['identifier'] = 'field_door_value';
  $handler->display->display_options['filters']['field_door_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'admin/user-export';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'feed';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  $handler->display->display_options['fields']['status']['type'] = 'custom';
  $handler->display->display_options['fields']['status']['type_custom_true'] = 'Active';
  $handler->display->display_options['fields']['status']['type_custom_false'] = 'Inactive';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = 'First Name';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Last Name';
  /* Field: User: Employer number */
  $handler->display->display_options['fields']['field_employer_number']['id'] = 'field_employer_number';
  $handler->display->display_options['fields']['field_employer_number']['table'] = 'field_data_field_employer_number';
  $handler->display->display_options['fields']['field_employer_number']['field'] = 'field_employer_number';
  $handler->display->display_options['fields']['field_employer_number']['label'] = 'Employer ID';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['label'] = 'Learner Group';
  /* Field: User: Account name */
  $handler->display->display_options['fields']['field_account_name']['id'] = 'field_account_name';
  $handler->display->display_options['fields']['field_account_name']['table'] = 'field_data_field_account_name';
  $handler->display->display_options['fields']['field_account_name']['field'] = 'field_account_name';
  $handler->display->display_options['fields']['field_account_name']['label'] = 'Account Name';
  /* Field: Field: Door */
  $handler->display->display_options['fields']['field_door']['id'] = 'field_door';
  $handler->display->display_options['fields']['field_door']['table'] = 'field_data_field_door';
  $handler->display->display_options['fields']['field_door']['field'] = 'field_door';
  /* Field: User: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  /* Field: User: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  /* Field: Field: Region */
  $handler->display->display_options['fields']['field_region_list']['id'] = 'field_region_list';
  $handler->display->display_options['fields']['field_region_list']['table'] = 'field_data_field_region_list';
  $handler->display->display_options['fields']['field_region_list']['field'] = 'field_region_list';
  $handler->display->display_options['fields']['field_region_list']['label'] = 'Region Code';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_market_name']['id'] = 'field_market_name';
  $handler->display->display_options['fields']['field_market_name']['table'] = 'field_data_field_market_name';
  $handler->display->display_options['fields']['field_market_name']['field'] = 'field_market_name';
  $handler->display->display_options['fields']['field_market_name']['label'] = 'Market Name';
  /* Field: User: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'users';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Field: User: Hire date */
  $handler->display->display_options['fields']['field_hire_date']['id'] = 'field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['table'] = 'field_data_field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['field'] = 'field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['label'] = 'Hire Date';
  $handler->display->display_options['fields']['field_hire_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Counter manager */
  $handler->display->display_options['fields']['field_counter_manager']['id'] = 'field_counter_manager';
  $handler->display->display_options['fields']['field_counter_manager']['table'] = 'field_data_field_counter_manager';
  $handler->display->display_options['fields']['field_counter_manager']['field'] = 'field_counter_manager';
  $handler->display->display_options['fields']['field_counter_manager']['label'] = 'Counter Manager';
  /* Field: User: Education manager/executive */
  $handler->display->display_options['fields']['field_education_manager_executiv']['id'] = 'field_education_manager_executiv';
  $handler->display->display_options['fields']['field_education_manager_executiv']['table'] = 'field_data_field_education_manager_executiv';
  $handler->display->display_options['fields']['field_education_manager_executiv']['field'] = 'field_education_manager_executiv';
  $handler->display->display_options['fields']['field_education_manager_executiv']['label'] = 'Education Manager/Executive';
  /* Field: User: Account/field executive */
  $handler->display->display_options['fields']['field_account_field_executive']['id'] = 'field_account_field_executive';
  $handler->display->display_options['fields']['field_account_field_executive']['table'] = 'field_data_field_account_field_executive';
  $handler->display->display_options['fields']['field_account_field_executive']['field'] = 'field_account_field_executive';
  $handler->display->display_options['fields']['field_account_field_executive']['label'] = 'Account/Field Executive';
  /* Field: User: Field Sales Director/Regional Education Director */
  $handler->display->display_options['fields']['field_field_sales_director_regio']['id'] = 'field_field_sales_director_regio';
  $handler->display->display_options['fields']['field_field_sales_director_regio']['table'] = 'field_data_field_field_sales_director_regio';
  $handler->display->display_options['fields']['field_field_sales_director_regio']['field'] = 'field_field_sales_director_regio';
  /* Field: User: Regional Vice President */
  $handler->display->display_options['fields']['field_regional_vice_president']['id'] = 'field_regional_vice_president';
  $handler->display->display_options['fields']['field_regional_vice_president']['table'] = 'field_data_field_regional_vice_president';
  $handler->display->display_options['fields']['field_regional_vice_president']['field'] = 'field_regional_vice_president';
  /* Field: User: General Manager/Brand Manager */
  $handler->display->display_options['fields']['field_general_manager_brand_mana']['id'] = 'field_general_manager_brand_mana';
  $handler->display->display_options['fields']['field_general_manager_brand_mana']['table'] = 'field_data_field_general_manager_brand_mana';
  $handler->display->display_options['fields']['field_general_manager_brand_mana']['field'] = 'field_general_manager_brand_mana';
  /* Field: User: Market Administrator */
  $handler->display->display_options['fields']['field_market_administrator']['id'] = 'field_market_administrator';
  $handler->display->display_options['fields']['field_market_administrator']['table'] = 'field_data_field_market_administrator';
  $handler->display->display_options['fields']['field_market_administrator']['field'] = 'field_market_administrator';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'medium';
  $handler->display->display_options['fields']['access']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['path'] = 'admin/user-export/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['user_export'] = array(
    t('Master'),
    t('User Export'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('E-mail'),
    t('First name'),
    t('Last name'),
    t('Employer number'),
    t('Roles'),
    t('Door'),
    t('Account name'),
    t('Account/field executive'),
    t('City'),
    t('State'),
    t('Country'),
    t('Region'),
    t('Counter manager'),
    t('Education manager/executive'),
    t('Hire date'),
    t('Broken handler field_data_field_market_name.field_market_name'),
    t('Regional Vice President'),
    t('Active'),
    t('Inactive'),
    t('Language'),
    t('Field Sales Director/Regional Education Director'),
    t('General Manager/Brand Manager'),
    t('Market Administrator'),
    t('Last access'),
    t('Market name'),
    t('Page'),
    t('User'),
    t('- Choose an operation -'),
    t('Send welcome e-mail'),
    t('Data export'),
    t('Status'),
    t('Email'),
    t('First Name'),
    t('Last Name'),
    t('Employer ID'),
    t('Learner Group'),
    t('Account Name'),
    t('Region Code'),
    t('Market Name'),
    t('Hire Date'),
    t('Counter Manager'),
    t('Education Manager/Executive'),
    t('Account/Field Executive'),
  );
  $export['user_export'] = $view;

  return $export;
}
