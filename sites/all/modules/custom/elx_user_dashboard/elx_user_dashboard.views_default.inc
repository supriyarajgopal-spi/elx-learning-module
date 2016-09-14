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
  $handler->display->display_options['pager']['type'] = 'full';
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
  $translatables['dashboard_user'] = array(
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
    t('Store'),
    t('Location'),
    t('Markets'),
    t('My Favorites'),
    t('Member Since'),
    t('Language'),
  );
  $export['dashboard_user'] = $view;

  return $export;
}
