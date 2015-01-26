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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
    'field_job_title' => 'field_job_title',
    'field_market_name' => 'field_market_name',
    'status' => 'status',
    'language' => 'language',
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
    'field_job_title' => array(
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
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: User: Door */
  $handler->display->display_options['fields']['field_door']['id'] = 'field_door';
  $handler->display->display_options['fields']['field_door']['table'] = 'field_data_field_door';
  $handler->display->display_options['fields']['field_door']['field'] = 'field_door';
  /* Field: User: Account name */
  $handler->display->display_options['fields']['field_account_name']['id'] = 'field_account_name';
  $handler->display->display_options['fields']['field_account_name']['table'] = 'field_data_field_account_name';
  $handler->display->display_options['fields']['field_account_name']['field'] = 'field_account_name';
  /* Field: User: Account/field executive */
  $handler->display->display_options['fields']['field_account_field_executive']['id'] = 'field_account_field_executive';
  $handler->display->display_options['fields']['field_account_field_executive']['table'] = 'field_data_field_account_field_executive';
  $handler->display->display_options['fields']['field_account_field_executive']['field'] = 'field_account_field_executive';
  /* Field: User: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  /* Field: User: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  /* Field: User: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  /* Field: User: Region */
  $handler->display->display_options['fields']['field_region_list']['id'] = 'field_region_list';
  $handler->display->display_options['fields']['field_region_list']['table'] = 'field_data_field_region_list';
  $handler->display->display_options['fields']['field_region_list']['field'] = 'field_region_list';
  /* Field: User: Counter manager */
  $handler->display->display_options['fields']['field_counter_manager']['id'] = 'field_counter_manager';
  $handler->display->display_options['fields']['field_counter_manager']['table'] = 'field_data_field_counter_manager';
  $handler->display->display_options['fields']['field_counter_manager']['field'] = 'field_counter_manager';
  /* Field: User: Education manager/executive */
  $handler->display->display_options['fields']['field_education_manager_executiv']['id'] = 'field_education_manager_executiv';
  $handler->display->display_options['fields']['field_education_manager_executiv']['table'] = 'field_data_field_education_manager_executiv';
  $handler->display->display_options['fields']['field_education_manager_executiv']['field'] = 'field_education_manager_executiv';
  /* Field: User: Hire date */
  $handler->display->display_options['fields']['field_hire_date']['id'] = 'field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['table'] = 'field_data_field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['field'] = 'field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Job title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  /* Field: User: Market name */
  $handler->display->display_options['fields']['field_market_name']['id'] = 'field_market_name';
  $handler->display->display_options['fields']['field_market_name']['table'] = 'field_data_field_market_name';
  $handler->display->display_options['fields']['field_market_name']['field'] = 'field_market_name';
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
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: User: Employer number */
  $handler->display->display_options['fields']['field_employer_number']['id'] = 'field_employer_number';
  $handler->display->display_options['fields']['field_employer_number']['table'] = 'field_data_field_employer_number';
  $handler->display->display_options['fields']['field_employer_number']['field'] = 'field_employer_number';
  $handler->display->display_options['fields']['field_employer_number']['exclude'] = TRUE;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: User: Door */
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
  $handler->display->display_options['fields']['field_account_field_executive']['exclude'] = TRUE;
  /* Field: User: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  /* Field: User: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  /* Field: User: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  /* Field: User: Region */
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
  $handler->display->display_options['fields']['field_hire_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Job title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['exclude'] = TRUE;
  /* Field: User: Market name */
  $handler->display->display_options['fields']['field_market_name']['id'] = 'field_market_name';
  $handler->display->display_options['fields']['field_market_name']['table'] = 'field_data_field_market_name';
  $handler->display->display_options['fields']['field_market_name']['field'] = 'field_market_name';
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
  $handler->display->display_options['path'] = 'admin/user-export';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: User: Employer number */
  $handler->display->display_options['fields']['field_employer_number']['id'] = 'field_employer_number';
  $handler->display->display_options['fields']['field_employer_number']['table'] = 'field_data_field_employer_number';
  $handler->display->display_options['fields']['field_employer_number']['field'] = 'field_employer_number';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: User: Door */
  $handler->display->display_options['fields']['field_door']['id'] = 'field_door';
  $handler->display->display_options['fields']['field_door']['table'] = 'field_data_field_door';
  $handler->display->display_options['fields']['field_door']['field'] = 'field_door';
  /* Field: User: Account name */
  $handler->display->display_options['fields']['field_account_name']['id'] = 'field_account_name';
  $handler->display->display_options['fields']['field_account_name']['table'] = 'field_data_field_account_name';
  $handler->display->display_options['fields']['field_account_name']['field'] = 'field_account_name';
  /* Field: User: Account/field executive */
  $handler->display->display_options['fields']['field_account_field_executive']['id'] = 'field_account_field_executive';
  $handler->display->display_options['fields']['field_account_field_executive']['table'] = 'field_data_field_account_field_executive';
  $handler->display->display_options['fields']['field_account_field_executive']['field'] = 'field_account_field_executive';
  /* Field: User: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  /* Field: User: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  /* Field: User: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  /* Field: User: Region */
  $handler->display->display_options['fields']['field_region_list']['id'] = 'field_region_list';
  $handler->display->display_options['fields']['field_region_list']['table'] = 'field_data_field_region_list';
  $handler->display->display_options['fields']['field_region_list']['field'] = 'field_region_list';
  /* Field: User: Counter manager */
  $handler->display->display_options['fields']['field_counter_manager']['id'] = 'field_counter_manager';
  $handler->display->display_options['fields']['field_counter_manager']['table'] = 'field_data_field_counter_manager';
  $handler->display->display_options['fields']['field_counter_manager']['field'] = 'field_counter_manager';
  /* Field: User: Education manager/executive */
  $handler->display->display_options['fields']['field_education_manager_executiv']['id'] = 'field_education_manager_executiv';
  $handler->display->display_options['fields']['field_education_manager_executiv']['table'] = 'field_data_field_education_manager_executiv';
  $handler->display->display_options['fields']['field_education_manager_executiv']['field'] = 'field_education_manager_executiv';
  /* Field: User: Hire date */
  $handler->display->display_options['fields']['field_hire_date']['id'] = 'field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['table'] = 'field_data_field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['field'] = 'field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Job title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  /* Field: User: Market name */
  $handler->display->display_options['fields']['field_market_name']['id'] = 'field_market_name';
  $handler->display->display_options['fields']['field_market_name']['table'] = 'field_data_field_market_name';
  $handler->display->display_options['fields']['field_market_name']['field'] = 'field_market_name';
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
    t('Job title'),
    t('Market name'),
    t('Active'),
    t('Inactive'),
    t('Language'),
    t('Page'),
    t('Data export'),
  );
  $export['user_export'] = $view;

  return $export;
}