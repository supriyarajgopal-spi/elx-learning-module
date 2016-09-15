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
  $view->name = 'user_points';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'userpoints';
  $view->human_name = 'User Points';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Points';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
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
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
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
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['footer']['area']['content'] = '<a href="/tools">SEE FULL LEADERBOARD</a>';
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
    t('<a href="/tools">SEE FULL LEADERBOARD</a>'),
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
