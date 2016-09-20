<?php
/**
 * @file
 * elx_rpu145_badges_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function elx_rpu145_badges_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'badges';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Badges';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Badges';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/badges">SEE ALL BADGES</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You currently have no earned badges';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Flags: high_five_badge */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'High Five Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'high_five_badge';
  /* Relationship: Flags: perfect_10_badge */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Perfect 10 Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'perfect_10_badge';
  /* Relationship: Flags: on_your_way_badge */
  $handler->display->display_options['relationships']['flag_content_rel_2']['id'] = 'flag_content_rel_2';
  $handler->display->display_options['relationships']['flag_content_rel_2']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_2']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_2']['label'] = 'On Your Way Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_2']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_2']['flag'] = 'on_your_way_badge';
  /* Relationship: Flags: one_hundred_percent_club_badge */
  $handler->display->display_options['relationships']['flag_content_rel_3']['id'] = 'flag_content_rel_3';
  $handler->display->display_options['relationships']['flag_content_rel_3']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_3']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_3']['label'] = '100% Club Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_3']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_3']['flag'] = 'one_hundred_percent_club_badge';
  /* Relationship: Flags: service_star_badge */
  $handler->display->display_options['relationships']['flag_content_rel_4']['id'] = 'flag_content_rel_4';
  $handler->display->display_options['relationships']['flag_content_rel_4']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_4']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_4']['label'] = 'Service Star Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_4']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_4']['flag'] = 'service_star_badge';
  /* Relationship: Flags: first_5_000_points_badge */
  $handler->display->display_options['relationships']['flag_content_rel_5']['id'] = 'flag_content_rel_5';
  $handler->display->display_options['relationships']['flag_content_rel_5']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_5']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_5']['label'] = 'First 5,000 Points Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_5']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_5']['flag'] = 'first_5_000_points_badge';
  /* Relationship: Flags: first_1_000_points_badge */
  $handler->display->display_options['relationships']['flag_content_rel_6']['id'] = 'flag_content_rel_6';
  $handler->display->display_options['relationships']['flag_content_rel_6']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_6']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_6']['label'] = 'First 1,000 Points Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_6']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_6']['flag'] = 'first_1_000_points_badge';
  /* Relationship: Flags: we_heart_you_badge */
  $handler->display->display_options['relationships']['flag_content_rel_7']['id'] = 'flag_content_rel_7';
  $handler->display->display_options['relationships']['flag_content_rel_7']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_7']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_7']['label'] = 'We Heart You Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_7']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_7']['flag'] = 'we_heart_you_badge';
  /* Relationship: Flags: product_pro_badge */
  $handler->display->display_options['relationships']['flag_content_rel_8']['id'] = 'flag_content_rel_8';
  $handler->display->display_options['relationships']['flag_content_rel_8']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_8']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_8']['label'] = 'Product Pro Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_8']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_8']['flag'] = 'product_pro_badge';
  /* Relationship: Flags: first_10000_points_badge */
  $handler->display->display_options['relationships']['flag_content_rel_9']['id'] = 'flag_content_rel_9';
  $handler->display->display_options['relationships']['flag_content_rel_9']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_9']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_9']['label'] = 'First 10000 Points Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_9']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_9']['flag'] = 'first_10000_points_badge';
  /* Relationship: Flags: welcome_badge */
  $handler->display->display_options['relationships']['flag_content_rel_10']['id'] = 'flag_content_rel_10';
  $handler->display->display_options['relationships']['flag_content_rel_10']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_10']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_10']['label'] = 'Welcome Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_10']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_10']['flag'] = 'welcome_badge';
  /* Relationship: Flags: little_brown_bottle_badge */
  $handler->display->display_options['relationships']['flag_content_rel_11']['id'] = 'flag_content_rel_11';
  $handler->display->display_options['relationships']['flag_content_rel_11']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_11']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_11']['label'] = 'Little Brown Bottle Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_11']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_11']['flag'] = 'little_brown_bottle_badge';
  /* Relationship: Flags: beauty_queen_badge */
  $handler->display->display_options['relationships']['flag_content_rel_12']['id'] = 'flag_content_rel_12';
  $handler->display->display_options['relationships']['flag_content_rel_12']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_12']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_12']['label'] = 'Beauty Queen Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_12']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_12']['flag'] = 'beauty_queen_badge';
  /* Relationship: Flags: rare_beauty_badge */
  $handler->display->display_options['relationships']['flag_content_rel_13']['id'] = 'flag_content_rel_13';
  $handler->display->display_options['relationships']['flag_content_rel_13']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_13']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_13']['label'] = 'Rare Beauty Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_13']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_13']['flag'] = 'rare_beauty_badge';
  /* Relationship: Flags: new_dimension_badge */
  $handler->display->display_options['relationships']['flag_content_rel_14']['id'] = 'flag_content_rel_14';
  $handler->display->display_options['relationships']['flag_content_rel_14']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_14']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_14']['label'] = 'New Dimension Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_14']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_14']['flag'] = 'new_dimension_badge';
  /* Relationship: Flags: sleeping_beauty_badge */
  $handler->display->display_options['relationships']['flag_content_rel_15']['id'] = 'flag_content_rel_15';
  $handler->display->display_options['relationships']['flag_content_rel_15']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_15']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_15']['label'] = 'Sleeping Beauty Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_15']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_15']['flag'] = 'sleeping_beauty_badge';
  /* Relationship: Flags: we_heard_you_badge */
  $handler->display->display_options['relationships']['flag_content_rel_16']['id'] = 'flag_content_rel_16';
  $handler->display->display_options['relationships']['flag_content_rel_16']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_16']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_16']['label'] = 'We Heard You Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_16']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_16']['flag'] = 'we_heard_you_badge';
  /* Relationship: Flags: well_read_50_badge */
  $handler->display->display_options['relationships']['flag_content_rel_17']['id'] = 'flag_content_rel_17';
  $handler->display->display_options['relationships']['flag_content_rel_17']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_17']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_17']['label'] = 'Well Read 50 Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_17']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_17']['flag'] = 'well_read_50_badge';
  /* Relationship: Flags: well_read_25_badge */
  $handler->display->display_options['relationships']['flag_content_rel_18']['id'] = 'flag_content_rel_18';
  $handler->display->display_options['relationships']['flag_content_rel_18']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_18']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_18']['label'] = 'Well Read 25 Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_18']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_18']['flag'] = 'well_read_25_badge';
  /* Relationship: Flags: well_read_75_badge */
  $handler->display->display_options['relationships']['flag_content_rel_19']['id'] = 'flag_content_rel_19';
  $handler->display->display_options['relationships']['flag_content_rel_19']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_19']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_19']['label'] = 'Well Read 75 Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_19']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_19']['flag'] = 'well_read_75_badge';
  /* Relationship: Flags: three_minute_beauty_badge */
  $handler->display->display_options['relationships']['flag_content_rel_20']['id'] = 'flag_content_rel_20';
  $handler->display->display_options['relationships']['flag_content_rel_20']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_20']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_20']['label'] = '3 Minute Beauty Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_20']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_20']['flag'] = 'three_minute_beauty_badge';
  /* Relationship: Flags: fast_learner_badge */
  $handler->display->display_options['relationships']['flag_content_rel_21']['id'] = 'flag_content_rel_21';
  $handler->display->display_options['relationships']['flag_content_rel_21']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_21']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_21']['label'] = 'Fast Learner Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_21']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_21']['flag'] = 'fast_learner_badge';
  /* Relationship: Flags: well_read_100_badge */
  $handler->display->display_options['relationships']['flag_content_rel_22']['id'] = 'flag_content_rel_22';
  $handler->display->display_options['relationships']['flag_content_rel_22']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_22']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_22']['label'] = 'Well Read 100 Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_22']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_22']['flag'] = 'well_read_100_badge';
  /* Relationship: Flags: early_bird_badge */
  $handler->display->display_options['relationships']['flag_content_rel_23']['id'] = 'flag_content_rel_23';
  $handler->display->display_options['relationships']['flag_content_rel_23']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_23']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_23']['label'] = 'Early Bird Badge Flag';
  $handler->display->display_options['relationships']['flag_content_rel_23']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_23']['flag'] = 'early_bird_badge';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged']['id'] = 'flagged';
  $handler->display->display_options['fields']['flagged']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['flagged']['label'] = '';
  $handler->display->display_options['fields']['flagged']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged']['alter']['path'] = 'modal/nojs/flags/high_five_badge';
  $handler->display->display_options['fields']['flagged']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged']['element_wrapper_class'] = 'high-five-[flagged]';
  $handler->display->display_options['fields']['flagged']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_1']['id'] = 'flagged_1';
  $handler->display->display_options['fields']['flagged_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_1']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['flagged_1']['label'] = '';
  $handler->display->display_options['fields']['flagged_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_1']['alter']['path'] = 'modal/nojs/flags/perfect_10_badge';
  $handler->display->display_options['fields']['flagged_1']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_1']['element_wrapper_class'] = 'perfect-ten-[flagged]';
  $handler->display->display_options['fields']['flagged_1']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_1']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_1']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_1']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_2']['id'] = 'flagged_2';
  $handler->display->display_options['fields']['flagged_2']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_2']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_2']['relationship'] = 'flag_content_rel_2';
  $handler->display->display_options['fields']['flagged_2']['label'] = '';
  $handler->display->display_options['fields']['flagged_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_2']['alter']['path'] = 'modal/nojs/flags/on_your_way_badge';
  $handler->display->display_options['fields']['flagged_2']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_2']['element_wrapper_class'] = 'on-your-way-[flagged]';
  $handler->display->display_options['fields']['flagged_2']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_2']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_2']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_2']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_3']['id'] = 'flagged_3';
  $handler->display->display_options['fields']['flagged_3']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_3']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_3']['relationship'] = 'flag_content_rel_3';
  $handler->display->display_options['fields']['flagged_3']['label'] = '';
  $handler->display->display_options['fields']['flagged_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_3']['alter']['path'] = 'modal/nojs/flags/one_hundred_percent_club_badge';
  $handler->display->display_options['fields']['flagged_3']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_3']['element_wrapper_class'] = 'one-hundred-percent-club-[flagged]';
  $handler->display->display_options['fields']['flagged_3']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_3']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_3']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_3']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_4']['id'] = 'flagged_4';
  $handler->display->display_options['fields']['flagged_4']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_4']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_4']['relationship'] = 'flag_content_rel_4';
  $handler->display->display_options['fields']['flagged_4']['label'] = '';
  $handler->display->display_options['fields']['flagged_4']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_4']['alter']['path'] = 'modal/nojs/flags/service_star_badge';
  $handler->display->display_options['fields']['flagged_4']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_4']['element_wrapper_class'] = 'service-star-[flagged]';
  $handler->display->display_options['fields']['flagged_4']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_4']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_4']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_4']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_5']['id'] = 'flagged_5';
  $handler->display->display_options['fields']['flagged_5']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_5']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_5']['relationship'] = 'flag_content_rel_5';
  $handler->display->display_options['fields']['flagged_5']['label'] = '';
  $handler->display->display_options['fields']['flagged_5']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_5']['alter']['path'] = 'modal/nojs/flags/first_5_000_points_badge';
  $handler->display->display_options['fields']['flagged_5']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_5']['element_wrapper_class'] = 'first-5000-points-[flagged]';
  $handler->display->display_options['fields']['flagged_5']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_5']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_5']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_5']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_6']['id'] = 'flagged_6';
  $handler->display->display_options['fields']['flagged_6']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_6']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_6']['relationship'] = 'flag_content_rel_6';
  $handler->display->display_options['fields']['flagged_6']['label'] = '';
  $handler->display->display_options['fields']['flagged_6']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_6']['alter']['path'] = 'modal/nojs/flags/first_1_000_points_badge';
  $handler->display->display_options['fields']['flagged_6']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_6']['element_wrapper_class'] = 'first-10000-points-[flagged]';
  $handler->display->display_options['fields']['flagged_6']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_6']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_6']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_6']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_7']['id'] = 'flagged_7';
  $handler->display->display_options['fields']['flagged_7']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_7']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_7']['relationship'] = 'flag_content_rel_7';
  $handler->display->display_options['fields']['flagged_7']['label'] = '';
  $handler->display->display_options['fields']['flagged_7']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_7']['alter']['path'] = 'modal/nojs/flags/we_heart_you_badge';
  $handler->display->display_options['fields']['flagged_7']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_7']['element_wrapper_class'] = 'we-heart-you-[flagged]';
  $handler->display->display_options['fields']['flagged_7']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_7']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_7']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_7']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_8']['id'] = 'flagged_8';
  $handler->display->display_options['fields']['flagged_8']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_8']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_8']['relationship'] = 'flag_content_rel_8';
  $handler->display->display_options['fields']['flagged_8']['label'] = '';
  $handler->display->display_options['fields']['flagged_8']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_8']['alter']['path'] = 'modal/nojs/flags/product_pro_badge';
  $handler->display->display_options['fields']['flagged_8']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_8']['element_wrapper_class'] = 'product-pro-[flagged]';
  $handler->display->display_options['fields']['flagged_8']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_8']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_8']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_8']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_9']['id'] = 'flagged_9';
  $handler->display->display_options['fields']['flagged_9']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_9']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_9']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['flagged_9']['label'] = '';
  $handler->display->display_options['fields']['flagged_9']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_9']['alter']['path'] = 'modal/nojs/flags/first_10000_points_badge';
  $handler->display->display_options['fields']['flagged_9']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_9']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_9']['element_wrapper_class'] = 'high-five-[flagged]';
  $handler->display->display_options['fields']['flagged_9']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_9']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_9']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_9']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_10']['id'] = 'flagged_10';
  $handler->display->display_options['fields']['flagged_10']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_10']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_10']['relationship'] = 'flag_content_rel_10';
  $handler->display->display_options['fields']['flagged_10']['label'] = '';
  $handler->display->display_options['fields']['flagged_10']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_10']['alter']['path'] = 'modal/nojs/flags/welcome_badge';
  $handler->display->display_options['fields']['flagged_10']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_10']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_10']['element_wrapper_class'] = 'welcome-[flagged]';
  $handler->display->display_options['fields']['flagged_10']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_10']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_10']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_10']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_11']['id'] = 'flagged_11';
  $handler->display->display_options['fields']['flagged_11']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_11']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_11']['relationship'] = 'flag_content_rel_11';
  $handler->display->display_options['fields']['flagged_11']['label'] = '';
  $handler->display->display_options['fields']['flagged_11']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_11']['alter']['path'] = 'modal/nojs/flags/little_brown_bottle_badge';
  $handler->display->display_options['fields']['flagged_11']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_11']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_11']['element_wrapper_class'] = 'little-brown-bottle-[flagged]';
  $handler->display->display_options['fields']['flagged_11']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_11']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_11']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_11']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_12']['id'] = 'flagged_12';
  $handler->display->display_options['fields']['flagged_12']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_12']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_12']['relationship'] = 'flag_content_rel_12';
  $handler->display->display_options['fields']['flagged_12']['label'] = '';
  $handler->display->display_options['fields']['flagged_12']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_12']['alter']['path'] = 'modal/nojs/flags/beauty_queen_badge';
  $handler->display->display_options['fields']['flagged_12']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_12']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_12']['element_wrapper_class'] = 'beauty-queen-[flagged]';
  $handler->display->display_options['fields']['flagged_12']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_12']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_12']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_12']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_13']['id'] = 'flagged_13';
  $handler->display->display_options['fields']['flagged_13']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_13']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_13']['relationship'] = 'flag_content_rel_13';
  $handler->display->display_options['fields']['flagged_13']['label'] = '';
  $handler->display->display_options['fields']['flagged_13']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_13']['alter']['path'] = 'modal/nojs/flags/rare_beauty_badge';
  $handler->display->display_options['fields']['flagged_13']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_13']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_13']['element_wrapper_class'] = 'rare-beauty-[flagged]';
  $handler->display->display_options['fields']['flagged_13']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_13']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_13']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_13']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_14']['id'] = 'flagged_14';
  $handler->display->display_options['fields']['flagged_14']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_14']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_14']['relationship'] = 'flag_content_rel_14';
  $handler->display->display_options['fields']['flagged_14']['label'] = '';
  $handler->display->display_options['fields']['flagged_14']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_14']['alter']['path'] = 'modal/nojs/flags/new_dimension_badge';
  $handler->display->display_options['fields']['flagged_14']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_14']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_14']['element_wrapper_class'] = 'new-dimension-[flagged]';
  $handler->display->display_options['fields']['flagged_14']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_14']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_14']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_14']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_15']['id'] = 'flagged_15';
  $handler->display->display_options['fields']['flagged_15']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_15']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_15']['relationship'] = 'flag_content_rel_15';
  $handler->display->display_options['fields']['flagged_15']['label'] = '';
  $handler->display->display_options['fields']['flagged_15']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_15']['alter']['path'] = 'modal/nojs/flags/sleeping_beauty_badge';
  $handler->display->display_options['fields']['flagged_15']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_15']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_15']['element_wrapper_class'] = 'sleeping-beauty-[flagged]';
  $handler->display->display_options['fields']['flagged_15']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_15']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_15']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_15']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_16']['id'] = 'flagged_16';
  $handler->display->display_options['fields']['flagged_16']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_16']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_16']['relationship'] = 'flag_content_rel_16';
  $handler->display->display_options['fields']['flagged_16']['label'] = '';
  $handler->display->display_options['fields']['flagged_16']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_16']['alter']['path'] = 'modal/nojs/flags/we_heard_you_badge';
  $handler->display->display_options['fields']['flagged_16']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_16']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_16']['element_wrapper_class'] = 'we-heard-you-[flagged]';
  $handler->display->display_options['fields']['flagged_16']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_16']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_16']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_16']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_17']['id'] = 'flagged_17';
  $handler->display->display_options['fields']['flagged_17']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_17']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_17']['relationship'] = 'flag_content_rel_17';
  $handler->display->display_options['fields']['flagged_17']['label'] = '';
  $handler->display->display_options['fields']['flagged_17']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_17']['alter']['path'] = 'modal/nojs/flags/well_read_50_badge';
  $handler->display->display_options['fields']['flagged_17']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_17']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_17']['element_wrapper_class'] = 'well-read-50-[flagged]';
  $handler->display->display_options['fields']['flagged_17']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_17']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_17']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_17']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_18']['id'] = 'flagged_18';
  $handler->display->display_options['fields']['flagged_18']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_18']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_18']['relationship'] = 'flag_content_rel_18';
  $handler->display->display_options['fields']['flagged_18']['label'] = '';
  $handler->display->display_options['fields']['flagged_18']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_18']['alter']['path'] = 'modal/nojs/flags/well_read_25_badge';
  $handler->display->display_options['fields']['flagged_18']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_18']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_18']['element_wrapper_class'] = 'well-read-25-[flagged]';
  $handler->display->display_options['fields']['flagged_18']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_18']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_18']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_18']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_19']['id'] = 'flagged_19';
  $handler->display->display_options['fields']['flagged_19']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_19']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_19']['relationship'] = 'flag_content_rel_19';
  $handler->display->display_options['fields']['flagged_19']['label'] = '';
  $handler->display->display_options['fields']['flagged_19']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_19']['alter']['path'] = 'modal/nojs/flags/well_read_75_badge';
  $handler->display->display_options['fields']['flagged_19']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_19']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_19']['element_wrapper_class'] = 'well-read-75-[flagged]';
  $handler->display->display_options['fields']['flagged_19']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_19']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_19']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_19']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_20']['id'] = 'flagged_20';
  $handler->display->display_options['fields']['flagged_20']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_20']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_20']['relationship'] = 'flag_content_rel_20';
  $handler->display->display_options['fields']['flagged_20']['label'] = '';
  $handler->display->display_options['fields']['flagged_20']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_20']['alter']['path'] = 'modal/nojs/flags/three_minute_beauty_badge';
  $handler->display->display_options['fields']['flagged_20']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_20']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_20']['element_wrapper_class'] = 'three-minute-beauty-[flagged]';
  $handler->display->display_options['fields']['flagged_20']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_20']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_20']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_20']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_21']['id'] = 'flagged_21';
  $handler->display->display_options['fields']['flagged_21']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_21']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_21']['relationship'] = 'flag_content_rel_21';
  $handler->display->display_options['fields']['flagged_21']['label'] = '';
  $handler->display->display_options['fields']['flagged_21']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_21']['alter']['path'] = 'modal/nojs/flags/fast_learner_badge';
  $handler->display->display_options['fields']['flagged_21']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_21']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_21']['element_wrapper_class'] = 'fast-learner-[flagged]';
  $handler->display->display_options['fields']['flagged_21']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_21']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_21']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_21']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_22']['id'] = 'flagged_22';
  $handler->display->display_options['fields']['flagged_22']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_22']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_22']['relationship'] = 'flag_content_rel_22';
  $handler->display->display_options['fields']['flagged_22']['label'] = '';
  $handler->display->display_options['fields']['flagged_22']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_22']['alter']['path'] = 'modal/nojs/flags/well_read_100_badge';
  $handler->display->display_options['fields']['flagged_22']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_22']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_22']['element_wrapper_class'] = 'well-read-100-[flagged]';
  $handler->display->display_options['fields']['flagged_22']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_22']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_22']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_22']['not'] = 0;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged_23']['id'] = 'flagged_23';
  $handler->display->display_options['fields']['flagged_23']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_23']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_23']['relationship'] = 'flag_content_rel_23';
  $handler->display->display_options['fields']['flagged_23']['label'] = '';
  $handler->display->display_options['fields']['flagged_23']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['flagged_23']['alter']['path'] = 'modal/nojs/flags/early_bird_badge';
  $handler->display->display_options['fields']['flagged_23']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['flagged_23']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged_23']['element_wrapper_class'] = 'early-bird-[flagged]';
  $handler->display->display_options['fields']['flagged_23']['type'] = 'custom';
  $handler->display->display_options['fields']['flagged_23']['type_custom_true'] = 'yes';
  $handler->display->display_options['fields']['flagged_23']['type_custom_false'] = 'no';
  $handler->display->display_options['fields']['flagged_23']['not'] = 0;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Flags: Flagging ID */
  $handler->display->display_options['arguments']['flagging_id']['id'] = 'flagging_id';
  $handler->display->display_options['arguments']['flagging_id']['table'] = 'flagging';
  $handler->display->display_options['arguments']['flagging_id']['field'] = 'flagging_id';
  $handler->display->display_options['arguments']['flagging_id']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['arguments']['flagging_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['flagging_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['flagging_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['flagging_id']['summary_options']['items_per_page'] = '25';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['path'] = 'badges';

  /* Display: My Badges */
  $handler = $view->new_display('panel_pane', 'My Badges', 'my_badges');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Recent Badges */
  $handler = $view->new_display('panel_pane', 'Recent Badges', 'recent_badges');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['badges'] = array(
    t('Master'),
    t('Badges'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/badges">SEE ALL BADGES</a>'),
    t('You currently have no earned badges'),
    t('High Five Badge Flag'),
    t('Perfect 10 Badge Flag'),
    t('On Your Way Badge Flag'),
    t('100% Club Badge Flag'),
    t('Service Star Badge Flag'),
    t('First 5,000 Points Badge Flag'),
    t('First 1,000 Points Badge Flag'),
    t('We Heart You Badge Flag'),
    t('Product Pro Badge Flag'),
    t('First 10000 Points Badge Flag'),
    t('Welcome Badge Flag'),
    t('Little Brown Bottle Badge Flag'),
    t('Beauty Queen Badge Flag'),
    t('Rare Beauty Badge Flag'),
    t('New Dimension Badge Flag'),
    t('Sleeping Beauty Badge Flag'),
    t('We Heard You Badge Flag'),
    t('Well Read 50 Badge Flag'),
    t('Well Read 25 Badge Flag'),
    t('Well Read 75 Badge Flag'),
    t('3 Minute Beauty Badge Flag'),
    t('Fast Learner Badge Flag'),
    t('Well Read 100 Badge Flag'),
    t('Early Bird Badge Flag'),
    t('yes'),
    t('no'),
    t('All'),
    t('Page'),
    t('My Badges'),
    t('View panes'),
    t('Recent Badges'),
  );
  $export['badges'] = $view;

  return $export;
}
