<?php
/**
 * @file
 * elx_user_dashboard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function elx_user_dashboard_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dashboard_favorites';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'dashboard favorites';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: My Favorites title */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['ui_name'] = 'My Favorites title';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'You currently have no favorites';
  /* Relationship: Flags: favorites */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'favorites';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'favorites';
  /* Field: Content: Hero image */
  $handler->display->display_options['fields']['field_hero_image']['id'] = 'field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['table'] = 'field_data_field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['field'] = 'field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['label'] = '';
  $handler->display->display_options['fields']['field_hero_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Featured image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Hot spot image */
  $handler->display->display_options['fields']['field_hot_spot_image']['id'] = 'field_hot_spot_image';
  $handler->display->display_options['fields']['field_hot_spot_image']['table'] = 'field_data_field_hot_spot_image';
  $handler->display->display_options['fields']['field_hot_spot_image']['field'] = 'field_hot_spot_image';
  $handler->display->display_options['fields']['field_hot_spot_image']['label'] = '';
  $handler->display->display_options['fields']['field_hot_spot_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hot_spot_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hot_spot_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Product image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Story image */
  $handler->display->display_options['fields']['field_story_image']['id'] = 'field_story_image';
  $handler->display->display_options['fields']['field_story_image']['table'] = 'field_data_field_story_image';
  $handler->display->display_options['fields']['field_story_image']['field'] = 'field_story_image';
  $handler->display->display_options['fields']['field_story_image']['label'] = '';
  $handler->display->display_options['fields']['field_story_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_story_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_story_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Display title */
  $handler->display->display_options['fields']['field_display_title']['id'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['table'] = 'field_data_field_display_title';
  $handler->display->display_options['fields']['field_display_title']['field'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['label'] = '';
  $handler->display->display_options['fields']['field_display_title']['element_label_colon'] = FALSE;
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $translatables['dashboard_favorites'] = array(
    t('Master'),
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
    t('You currently have no favorites'),
    t('favorites'),
  );
  $export['dashboard_favorites'] = $view;

  $view = new view();
  $view->name = 'dashboard_tools';
  $view->description = 'View of Estee Lauder tools';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'dashboard tools';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tools';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/tools">SEE ALL TOOLS</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Display title */
  $handler->display->display_options['fields']['field_display_title']['id'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['table'] = 'field_data_field_display_title';
  $handler->display->display_options['fields']['field_display_title']['field'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['label'] = '';
  $handler->display->display_options['fields']['field_display_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_display_title']['alter']['path'] = 'modal/nojs/[nid]';
  $handler->display->display_options['fields']['field_display_title']['alter']['link_class'] = 'use-ajax ctools-use-modal ctools-modal-elx-tools';
  $handler->display->display_options['fields']['field_display_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_title']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Content: Tool thumbnail */
  $handler->display->display_options['fields']['field_tool_thumbnail']['id'] = 'field_tool_thumbnail';
  $handler->display->display_options['fields']['field_tool_thumbnail']['table'] = 'field_data_field_tool_thumbnail';
  $handler->display->display_options['fields']['field_tool_thumbnail']['field'] = 'field_tool_thumbnail';
  $handler->display->display_options['fields']['field_tool_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_tool_thumbnail']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tool_thumbnail']['alter']['path'] = 'modal/nojs/[nid]';
  $handler->display->display_options['fields']['field_tool_thumbnail']['alter']['link_class'] = 'use-ajax ctools-use-modal ctools-modal-elx-tools';
  $handler->display->display_options['fields']['field_tool_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tool_thumbnail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tool_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tool_thumbnail']['settings'] = array(
    'image_style' => 'tools_thumbnail',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tools' => 'tools',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $translatables['dashboard_tools'] = array(
    t('Master'),
    t('Tools'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/tools">SEE ALL TOOLS</a>'),
  );
  $export['dashboard_tools'] = $view;

  $view = new view();
  $view->name = 'dashboard_user';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'dashboard user';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Field: Door */
  $handler->display->display_options['fields']['field_door']['id'] = 'field_door';
  $handler->display->display_options['fields']['field_door']['table'] = 'field_data_field_door';
  $handler->display->display_options['fields']['field_door']['field'] = 'field_door';
  $handler->display->display_options['fields']['field_door']['label'] = 'Store';
  $handler->display->display_options['fields']['field_door']['delta_offset'] = '0';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = 'Location';
  /* Field: User: Markets */
  $handler->display->display_options['fields']['og_user_node']['id'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_user_node']['field'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['empty'] = 'My Favorites';
  $handler->display->display_options['fields']['og_user_node']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_user_node']['delta_offset'] = '0';
  /* Field: User: Hire date */
  $handler->display->display_options['fields']['field_hire_date']['id'] = 'field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['table'] = 'field_data_field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['field'] = 'field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['label'] = 'Member Since';
  $handler->display->display_options['fields']['field_hire_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: User: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'users';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: All */
  $handler = $view->new_display('panel_pane', 'All', 'all');

  /* Display: User name */
  $handler = $view->new_display('panel_pane', 'User name', 'user_information_name');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;

  /* Display: User Info Left */
  $handler = $view->new_display('panel_pane', 'User Info Left', 'user_information_left');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: Field: Door */
  $handler->display->display_options['fields']['field_door']['id'] = 'field_door';
  $handler->display->display_options['fields']['field_door']['table'] = 'field_data_field_door';
  $handler->display->display_options['fields']['field_door']['field'] = 'field_door';
  $handler->display->display_options['fields']['field_door']['label'] = 'Store';
  $handler->display->display_options['fields']['field_door']['delta_offset'] = '0';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = 'Location';
  /* Field: User: Markets */
  $handler->display->display_options['fields']['og_user_node']['id'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_user_node']['field'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['empty'] = 'My Favorites';
  $handler->display->display_options['fields']['og_user_node']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_user_node']['delta_offset'] = '0';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;

  /* Display: User Info Right */
  $handler = $view->new_display('panel_pane', 'User Info Right', 'user_information_right');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Hire date */
  $handler->display->display_options['fields']['field_hire_date']['id'] = 'field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['table'] = 'field_data_field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['field'] = 'field_hire_date';
  $handler->display->display_options['fields']['field_hire_date']['label'] = 'Member Since';
  $handler->display->display_options['fields']['field_hire_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: User: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'users';
  $handler->display->display_options['fields']['language']['field'] = 'language';

  /* Display: Last Login */
  $handler = $view->new_display('panel_pane', 'Last Login', 'last_login');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['label'] = 'LAST LOGIN';
  $handler->display->display_options['fields']['login']['date_format'] = 'short';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'long';

  /* Display: My Points */
  $handler = $view->new_display('panel_pane', 'My Points', 'my_points');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Userpoints total: Current total points */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'userpoints_total';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['label'] = 'My Points';
  $translatables['dashboard_user'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Store'),
    t('Location'),
    t('Markets'),
    t('My Favorites'),
    t('Member Since'),
    t('Language'),
    t('All'),
    t('View panes'),
    t('User name'),
    t('User Info Left'),
    t('User Info Right'),
    t('Last Login'),
    t('LAST LOGIN'),
    t('My Points'),
    t('.'),
    t(','),
  );
  $export['dashboard_user'] = $view;

  $view = new view();
  $view->name = 'dashboard_user_activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'dashboard user activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: first_viewed_content */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'first_viewed_content';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = 'modal/nojs/[nid]';
  $handler->display->display_options['fields']['field_headline']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  /* Field: Content: Display title */
  $handler->display->display_options['fields']['field_display_title']['id'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['table'] = 'field_data_field_display_title';
  $handler->display->display_options['fields']['field_display_title']['field'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['label'] = '';
  $handler->display->display_options['fields']['field_display_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_display_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_display_title']['alter']['path'] = 'modal/nojs/[nid]';
  $handler->display->display_options['fields']['field_display_title']['alter']['alt'] = 'use-ajax';
  $handler->display->display_options['fields']['field_display_title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'h5p_content' => 'h5p_content',
    'product_detail' => 'product_detail',
    'tools' => 'tools',
  );

  /* Display: Activities */
  $handler = $view->new_display('panel_pane', 'Activities', 'activities');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Suggested */
  $handler = $view->new_display('panel_pane', 'Suggested', 'suggested');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['dashboard_user_activities'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('flag'),
    t('use-ajax'),
    t('Activities'),
    t('View panes'),
    t('Suggested'),
  );
  $export['dashboard_user_activities'] = $view;

  return $export;
}
