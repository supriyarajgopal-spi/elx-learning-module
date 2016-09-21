<?php
/**
 * @file
 * dashboard_and_menu.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dashboard_and_menu_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'elx_administration_users';
  $view->description = 'List, add, and edit users.';
  $view->tag = 'ELX,admin';
  $view->base_table = 'users';
  $view->human_name = 'ELX Administration: Users';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Users';
  $handler->display->display_options['css_class'] = 'admin-views-view';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'menu';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'mail' => 'name',
    'status' => 'status',
    'rid' => 'rid',
    'created' => 'created',
    'access' => 'access',
    'edit_node' => 'edit_node',
    'cancel_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'access';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '&emsp;',
      'empty_column' => 0,
    ),
    'cancel_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No users available.';
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_user_cancel_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_user_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Award Badges',
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Change user roles',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Send e-mail',
    ),
    'action::one_time_login_send_register_admin_created' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Send welcome email',
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['label'] = 'Position';
  $handler->display->display_options['fields']['rid']['type'] = 'ul';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member for';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'time ago';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  /* Field: User: Cancel link */
  $handler->display->display_options['fields']['cancel_node']['id'] = 'cancel_node';
  $handler->display->display_options['fields']['cancel_node']['table'] = 'users';
  $handler->display->display_options['fields']['cancel_node']['field'] = 'cancel_node';
  $handler->display->display_options['fields']['cancel_node']['label'] = '';
  $handler->display->display_options['fields']['cancel_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cancel_node']['hide_alter_empty'] = FALSE;
  /* Field: User: Market Administrator */
  $handler->display->display_options['fields']['field_market_administrator']['id'] = 'field_market_administrator';
  $handler->display->display_options['fields']['field_market_administrator']['table'] = 'field_data_field_market_administrator';
  $handler->display->display_options['fields']['field_market_administrator']['field'] = 'field_market_administrator';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );
  $handler->display->display_options['filters']['uid']['group'] = 1;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
  /* Filter criterion: User: First name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: User: Last name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Position';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
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
  /* Filter criterion: User: Account name (field_account_name) */
  $handler->display->display_options['filters']['field_account_name_value']['id'] = 'field_account_name_value';
  $handler->display->display_options['filters']['field_account_name_value']['table'] = 'field_data_field_account_name';
  $handler->display->display_options['filters']['field_account_name_value']['field'] = 'field_account_name_value';
  $handler->display->display_options['filters']['field_account_name_value']['group'] = 1;
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
  $handler->display->display_options['filters']['field_door_value']['group'] = 1;
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
  /* Filter criterion: User: Market Administrator (field_market_administrator) */
  $handler->display->display_options['filters']['field_market_administrator_value']['id'] = 'field_market_administrator_value';
  $handler->display->display_options['filters']['field_market_administrator_value']['table'] = 'field_data_field_market_administrator';
  $handler->display->display_options['filters']['field_market_administrator_value']['field'] = 'field_market_administrator_value';
  $handler->display->display_options['filters']['field_market_administrator_value']['group'] = 1;
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
  /* Filter criterion: User: Created date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'users';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Created date';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
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
  /* Filter criterion: User: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'users';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
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

  /* Display: System */
  $handler = $view->new_display('system', 'System', 'system_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['path'] = 'admin/people';
  $translatables['elx_administration_users'] = array(
    t('Defaults'),
    t('Users'),
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
    t('No users available.'),
    t('- Choose an operation -'),
    t('Award Badges'),
    t('Change user roles'),
    t('Send e-mail'),
    t('Send welcome email'),
    t('Name'),
    t('Active'),
    t('Position'),
    t('Member for'),
    t('Last access'),
    t('Operations'),
    t('Market Administrator'),
    t('E-mail'),
    t('First name'),
    t('Last name'),
    t('Region'),
    t('Account name'),
    t('Door'),
    t('Created date'),
    t('Language'),
    t('System'),
  );
  $export['elx_administration_users'] = $view;

  $view = new view();
  $view->name = 'elx_control_users';
  $view->description = 'Total Control over user accounts: Contains a panel pane and a page to control user accounts.';
  $view->tag = 'ELX,total_control';
  $view->base_table = 'users';
  $view->human_name = 'ELX control_users';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'User Accounts';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'have total control';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '35';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'mail' => 'name',
    'status' => 'status',
    'rid' => 'rid',
    'created' => 'created',
    'login' => 'login',
    'edit_node' => 'edit_node',
    'cancel_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'login';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'login' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '&emsp;',
      'empty_column' => 0,
    ),
    'cancel_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No users available.';
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_user_cancel_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_user_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Award Badges',
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::one_time_login_send_register_no_approval_required' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Send welcome email',
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['label'] = 'Position';
  $handler->display->display_options['fields']['rid']['type'] = 'ul';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member for';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['access']['second_date_format'] = 'long';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: User: Cancel link */
  $handler->display->display_options['fields']['cancel_node']['id'] = 'cancel_node';
  $handler->display->display_options['fields']['cancel_node']['table'] = 'users';
  $handler->display->display_options['fields']['cancel_node']['field'] = 'cancel_node';
  $handler->display->display_options['fields']['cancel_node']['label'] = '';
  $handler->display->display_options['fields']['cancel_node']['element_label_colon'] = FALSE;
  /* Field: User: Market Administrator */
  $handler->display->display_options['fields']['field_market_administrator']['id'] = 'field_market_administrator';
  $handler->display->display_options['fields']['field_market_administrator']['table'] = 'field_data_field_market_administrator';
  $handler->display->display_options['fields']['field_market_administrator']['field'] = 'field_market_administrator';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'User: Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
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
  /* Filter criterion: User: First name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: User: Last name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Position';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_region_list_value']['expose']['remember'] = TRUE;
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
  /* Filter criterion: User: Account name (field_account_name) */
  $handler->display->display_options['filters']['field_account_name_value']['id'] = 'field_account_name_value';
  $handler->display->display_options['filters']['field_account_name_value']['table'] = 'field_data_field_account_name';
  $handler->display->display_options['filters']['field_account_name_value']['field'] = 'field_account_name_value';
  $handler->display->display_options['filters']['field_account_name_value']['group'] = 1;
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
  $handler->display->display_options['filters']['field_door_value']['group'] = 1;
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
  /* Filter criterion: User: Market Administrator (field_market_administrator) */
  $handler->display->display_options['filters']['field_market_administrator_value']['id'] = 'field_market_administrator_value';
  $handler->display->display_options['filters']['field_market_administrator_value']['table'] = 'field_data_field_market_administrator';
  $handler->display->display_options['filters']['field_market_administrator_value']['field'] = 'field_market_administrator_value';
  $handler->display->display_options['filters']['field_market_administrator_value']['group'] = 1;
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

  /* Display: User Admin */
  $handler = $view->new_display('page', 'User Admin', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['path'] = 'admin/dashboard/users';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'User Accounts';
  $handler->display->display_options['menu']['weight'] = '-14';
  $translatables['elx_control_users'] = array(
    t('Defaults'),
    t('User Accounts'),
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
    t('No users available.'),
    t('- Choose an operation -'),
    t('Award Badges'),
    t('Send welcome email'),
    t('Name'),
    t('E-mail'),
    t('Active'),
    t('Position'),
    t('Member for'),
    t('Last access'),
    t('Operations'),
    t('edit'),
    t('Market Administrator'),
    t('User: Name'),
    t('First name'),
    t('Last name'),
    t('Region'),
    t('Account name'),
    t('Door'),
    t('User Admin'),
  );
  $export['elx_control_users'] = $view;

  $view = new view();
  $view->name = 'elx_og_members_admin';
  $view->description = '';
  $view->tag = 'ELX,og';
  $view->base_table = 'users';
  $view->human_name = 'ELX OG members admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'OG members admin';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'og_context';
  $handler->display->display_options['access']['perm'] = 'manage members';
  $handler->display->display_options['access']['group_id_arg'] = '1';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'state' => 'state',
    'og_roles' => 'og_roles',
    'created' => 'created',
    'og_membership_request' => 'og_membership_request',
    'edit_membership' => 'edit_membership',
    'delete_membership' => 'edit_membership',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_roles' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_membership_request' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_membership' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'delete_membership' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No people found matching the search criteria.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: User: Markets (og_user_node) */
  $handler->display->display_options['arguments']['og_user_node_target_id']['id'] = 'og_user_node_target_id';
  $handler->display->display_options['arguments']['og_user_node_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_user_node_target_id']['field'] = 'og_user_node_target_id';
  $handler->display->display_options['arguments']['og_user_node_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_user_node_target_id']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['og_user_node_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_user_node_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_user_node_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_user_node_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_user_node_target_id']['validate']['type'] = 'og';
  $handler->display->display_options['arguments']['og_user_node_target_id']['validate']['fail'] = 'empty';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'node/%/badges';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Award Badges';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['elx_og_members_admin'] = array(
    t('Master'),
    t('OG members admin'),
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
    t('No people found matching the search criteria.'),
    t('User'),
    t('- Choose an operation -'),
    t('Name'),
    t('All'),
    t('Page'),
  );
  $export['elx_og_members_admin'] = $view;

  $view = new view();
  $view->name = 'user_points';
  $view->description = '';
  $view->tag = 'ELX';
  $view->base_table = 'userpoints';
  $view->human_name = 'User Points';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Points';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'h5p-user';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_country_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_region_list_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  /* No results behavior: Global: Result summary */
  $handler->display->display_options['empty']['result']['id'] = 'result';
  $handler->display->display_options['empty']['result']['table'] = 'views';
  $handler->display->display_options['empty']['result']['field'] = 'result';
  $handler->display->display_options['empty']['result']['empty'] = TRUE;
  /* Relationship: Userpoints: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'userpoints';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Hidden First Name Field */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name']['ui_name'] = 'Hidden First Name Field';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Display Full Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name']['ui_name'] = 'Display Full Name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Gravatar */
  $handler->display->display_options['fields']['user_gravatar_picture']['id'] = 'user_gravatar_picture';
  $handler->display->display_options['fields']['user_gravatar_picture']['table'] = 'users';
  $handler->display->display_options['fields']['user_gravatar_picture']['field'] = 'user_gravatar_picture';
  $handler->display->display_options['fields']['user_gravatar_picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['user_gravatar_picture']['label'] = '';
  $handler->display->display_options['fields']['user_gravatar_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user_gravatar_picture']['picture'] = TRUE;
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  /* Field: Userpoints total: Current total points */
  $handler->display->display_options['fields']['points_1']['id'] = 'points_1';
  $handler->display->display_options['fields']['points_1']['table'] = 'userpoints_total';
  $handler->display->display_options['fields']['points_1']['field'] = 'points';
  $handler->display->display_options['fields']['points_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['points_1']['label'] = '';
  $handler->display->display_options['fields']['points_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Userpoints total: Current total points */
  $handler->display->display_options['sorts']['points']['id'] = 'points';
  $handler->display->display_options['sorts']['points']['table'] = 'userpoints_total';
  $handler->display->display_options['sorts']['points']['field'] = 'points';
  $handler->display->display_options['sorts']['points']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['points']['order'] = 'DESC';
  /* Contextual filter: Field: Door (field_door) */
  $handler->display->display_options['arguments']['field_door_value']['id'] = 'field_door_value';
  $handler->display->display_options['arguments']['field_door_value']['table'] = 'field_data_field_door';
  $handler->display->display_options['arguments']['field_door_value']['field'] = 'field_door_value';
  $handler->display->display_options['arguments']['field_door_value']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['field_door_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_door_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_door_value']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_door_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_door_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_door_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_door_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_door_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_door_value']['limit'] = '0';
  /* Contextual filter: User: Account name (field_account_name) */
  $handler->display->display_options['arguments']['field_account_name_value']['id'] = 'field_account_name_value';
  $handler->display->display_options['arguments']['field_account_name_value']['table'] = 'field_data_field_account_name';
  $handler->display->display_options['arguments']['field_account_name_value']['field'] = 'field_account_name_value';
  $handler->display->display_options['arguments']['field_account_name_value']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['field_account_name_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_account_name_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_account_name_value']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['field_account_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_account_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_account_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_account_name_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_account_name_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_account_name_value']['limit'] = '0';
  /* Contextual filter: Field: Region (field_region_list) */
  $handler->display->display_options['arguments']['field_region_list_value']['id'] = 'field_region_list_value';
  $handler->display->display_options['arguments']['field_region_list_value']['table'] = 'field_data_field_region_list';
  $handler->display->display_options['arguments']['field_region_list_value']['field'] = 'field_region_list_value';
  $handler->display->display_options['arguments']['field_region_list_value']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['field_region_list_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_region_list_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_region_list_value']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['field_region_list_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_region_list_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_region_list_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_region_list_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_region_list_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_region_list_value']['limit'] = '0';
  /* Contextual filter: User: Markets (og_user_node) */
  $handler->display->display_options['arguments']['og_user_node_target_id']['id'] = 'og_user_node_target_id';
  $handler->display->display_options['arguments']['og_user_node_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_user_node_target_id']['field'] = 'og_user_node_target_id';
  $handler->display->display_options['arguments']['og_user_node_target_id']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['og_user_node_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_user_node_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_user_node_target_id']['default_argument_options']['index'] = '5';
  $handler->display->display_options['arguments']['og_user_node_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_user_node_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_user_node_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_user_node_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_user_node_target_id']['validate']['fail'] = 'ignore';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'uid';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user-points';

  /* Display: List User Points */
  $handler = $view->new_display('panel_pane', 'List User Points', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Personal User Points */
  $handler = $view->new_display('panel_pane', 'Personal User Points', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'user_points_total';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_3';
  /* Field: User: Gravatar */
  $handler->display->display_options['fields']['user_gravatar_picture']['id'] = 'user_gravatar_picture';
  $handler->display->display_options['fields']['user_gravatar_picture']['table'] = 'users';
  $handler->display->display_options['fields']['user_gravatar_picture']['field'] = 'user_gravatar_picture';
  $handler->display->display_options['fields']['user_gravatar_picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['user_gravatar_picture']['label'] = '';
  $handler->display->display_options['fields']['user_gravatar_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user_gravatar_picture']['picture'] = TRUE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Userpoints total: Current total points */
  $handler->display->display_options['fields']['points_1']['id'] = 'points_1';
  $handler->display->display_options['fields']['points_1']['table'] = 'userpoints_total';
  $handler->display->display_options['fields']['points_1']['field'] = 'points';
  $handler->display->display_options['fields']['points_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['points_1']['label'] = '';
  $handler->display->display_options['fields']['points_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Dashboard User Points */
  $handler = $view->new_display('panel_pane', 'Dashboard User Points', 'dashboard_user_points');
  $handler->display->display_options['display_description'] = 'For User Dashboard "My Leaderboard"';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/leaderboard">SEE FULL LEADERBOARD</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['user_points'] = array(
    t('Master'),
    t('User Points'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Displaying @start - @end of @total'),
    t('Users'),
    t('[field_first_name] [field_last_name]'),
    t('.'),
    t(','),
    t('All'),
    t('Page'),
    t('List User Points'),
    t('View panes'),
    t('Personal User Points'),
    t('Dashboard User Points'),
    t('For User Dashboard "My Leaderboard"'),
    t('<a href="/leaderboard">SEE FULL LEADERBOARD</a>'),
  );
  $export['user_points'] = $view;

  $view = new view();
  $view->name = 'user_points_total';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'userpoints_total';
  $view->human_name = 'User Points Total';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Points Total';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Userpoints total: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'userpoints_total';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: COUNT(Userpoints total: Current total points) */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'userpoints_total';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['group_type'] = 'count';
  $handler->display->display_options['fields']['points']['label'] = '';
  $handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
  /* Contextual filter: Field: Door (field_door) */
  $handler->display->display_options['arguments']['field_door_value']['id'] = 'field_door_value';
  $handler->display->display_options['arguments']['field_door_value']['table'] = 'field_data_field_door';
  $handler->display->display_options['arguments']['field_door_value']['field'] = 'field_door_value';
  $handler->display->display_options['arguments']['field_door_value']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['field_door_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_door_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_door_value']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_door_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_door_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_door_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_door_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_door_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_door_value']['limit'] = '0';
  /* Contextual filter: User: Account name (field_account_name) */
  $handler->display->display_options['arguments']['field_account_name_value']['id'] = 'field_account_name_value';
  $handler->display->display_options['arguments']['field_account_name_value']['table'] = 'field_data_field_account_name';
  $handler->display->display_options['arguments']['field_account_name_value']['field'] = 'field_account_name_value';
  $handler->display->display_options['arguments']['field_account_name_value']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['field_account_name_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_account_name_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_account_name_value']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['field_account_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_account_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_account_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_account_name_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_account_name_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_account_name_value']['limit'] = '0';
  /* Contextual filter: Field: Region (field_region_list) */
  $handler->display->display_options['arguments']['field_region_list_value']['id'] = 'field_region_list_value';
  $handler->display->display_options['arguments']['field_region_list_value']['table'] = 'field_data_field_region_list';
  $handler->display->display_options['arguments']['field_region_list_value']['field'] = 'field_region_list_value';
  $handler->display->display_options['arguments']['field_region_list_value']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['field_region_list_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_region_list_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_region_list_value']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['field_region_list_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_region_list_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_region_list_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_region_list_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_region_list_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_region_list_value']['limit'] = '0';
  /* Filter criterion: Global: View */
  $handler->display->display_options['filters']['view']['id'] = 'view';
  $handler->display->display_options['filters']['view']['table'] = 'views';
  $handler->display->display_options['filters']['view']['field'] = 'view';
  $handler->display->display_options['filters']['view']['operator'] = '>=';
  $handler->display->display_options['filters']['view']['group'] = 1;
  $handler->display->display_options['filters']['view']['view'] = 'user_points:panel_pane_2';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user-points-total';

  /* Display: Full Leaderboard Ranking */
  $handler = $view->new_display('panel_pane', 'Full Leaderboard Ranking', 'panel_pane_3');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Userpoints total: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'userpoints_total';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT User: Uid) */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Door (field_door) */
  $handler->display->display_options['arguments']['field_door_value']['id'] = 'field_door_value';
  $handler->display->display_options['arguments']['field_door_value']['table'] = 'field_data_field_door';
  $handler->display->display_options['arguments']['field_door_value']['field'] = 'field_door_value';
  $handler->display->display_options['arguments']['field_door_value']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['field_door_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_door_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_door_value']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_door_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_door_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_door_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_door_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_door_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_door_value']['limit'] = '0';
  /* Contextual filter: User: Account name (field_account_name) */
  $handler->display->display_options['arguments']['field_account_name_value']['id'] = 'field_account_name_value';
  $handler->display->display_options['arguments']['field_account_name_value']['table'] = 'field_data_field_account_name';
  $handler->display->display_options['arguments']['field_account_name_value']['field'] = 'field_account_name_value';
  $handler->display->display_options['arguments']['field_account_name_value']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['field_account_name_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_account_name_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_account_name_value']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['field_account_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_account_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_account_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_account_name_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_account_name_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_account_name_value']['limit'] = '0';
  /* Contextual filter: Field: Region (field_region_list) */
  $handler->display->display_options['arguments']['field_region_list_value']['id'] = 'field_region_list_value';
  $handler->display->display_options['arguments']['field_region_list_value']['table'] = 'field_data_field_region_list';
  $handler->display->display_options['arguments']['field_region_list_value']['field'] = 'field_region_list_value';
  $handler->display->display_options['arguments']['field_region_list_value']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['field_region_list_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_region_list_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_region_list_value']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['field_region_list_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_region_list_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_region_list_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_region_list_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_region_list_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_region_list_value']['limit'] = '0';
  /* Contextual filter: User: Markets (og_user_node) */
  $handler->display->display_options['arguments']['og_user_node_target_id']['id'] = 'og_user_node_target_id';
  $handler->display->display_options['arguments']['og_user_node_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_user_node_target_id']['field'] = 'og_user_node_target_id';
  $handler->display->display_options['arguments']['og_user_node_target_id']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['og_user_node_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_user_node_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_user_node_target_id']['default_argument_options']['index'] = '5';
  $handler->display->display_options['arguments']['og_user_node_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_user_node_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_user_node_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_user_node_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_user_node_target_id']['validate']['fail'] = 'ignore';
  $translatables['user_points_total'] = array(
    t('Master'),
    t('User Points Total'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Users'),
    t('.'),
    t(','),
    t('All'),
    t('Page'),
    t('Full Leaderboard Ranking'),
    t('View panes'),
  );
  $export['user_points_total'] = $view;

  return $export;
}
