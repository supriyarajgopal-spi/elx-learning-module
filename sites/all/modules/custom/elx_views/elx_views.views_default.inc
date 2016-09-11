<?php
/**
 * @file
 * elx_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function elx_views_views_default_views() {
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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['path'] = 'badges';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['badges'] = array(
    t('Master'),
    t('Badges'),
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
    t('Block'),
  );
  $export['badges'] = $view;

  $view = new view();
  $view->name = 'product_library';
  $view->description = 'View of Estee Lauder products';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product Library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product Library';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Refine Search';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'secondary_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'bef_links',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_product_categories_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All Categories',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'View';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 20, 50';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  /* Field: Content: Product image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_product_image']['alter']['path'] = 'modal/nojs/[nid]';
  $handler->display->display_options['fields']['field_product_image']['alter']['link_class'] = 'use-ajax ctools-use-modal ctools-modal-product-library';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'product_detail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_product_image']['group_column'] = 'entity_id';
  /* Field: Content: Display title */
  $handler->display->display_options['fields']['field_display_title']['id'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['table'] = 'field_data_field_display_title';
  $handler->display->display_options['fields']['field_display_title']['field'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['label'] = '';
  $handler->display->display_options['fields']['field_display_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_display_title']['alter']['path'] = 'modal/nojs/[nid]';
  $handler->display->display_options['fields']['field_display_title']['alter']['link_class'] = 'use-ajax ctools-use-modal ctools-modal-product-library';
  $handler->display->display_options['fields']['field_display_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_display_title']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Content: Why there's only 1 */
  $handler->display->display_options['fields']['field_why_there_s_only_one']['id'] = 'field_why_there_s_only_one';
  $handler->display->display_options['fields']['field_why_there_s_only_one']['table'] = 'field_data_field_why_there_s_only_one';
  $handler->display->display_options['fields']['field_why_there_s_only_one']['field'] = 'field_why_there_s_only_one';
  $handler->display->display_options['fields']['field_why_there_s_only_one']['label'] = '';
  $handler->display->display_options['fields']['field_why_there_s_only_one']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Most Popular';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title A-Z';
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
    'product_detail' => 'product_detail',
  );
  /* Filter criterion: Content: Product categories (field_product_categories) */
  $handler->display->display_options['filters']['field_product_categories_tid']['id'] = 'field_product_categories_tid';
  $handler->display->display_options['filters']['field_product_categories_tid']['table'] = 'field_data_field_product_categories';
  $handler->display->display_options['filters']['field_product_categories_tid']['field'] = 'field_product_categories_tid';
  $handler->display->display_options['filters']['field_product_categories_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_categories_tid']['expose']['operator_id'] = 'field_product_categories_tid_op';
  $handler->display->display_options['filters']['field_product_categories_tid']['expose']['label'] = 'Filter By';
  $handler->display->display_options['filters']['field_product_categories_tid']['expose']['operator'] = 'field_product_categories_tid_op';
  $handler->display->display_options['filters']['field_product_categories_tid']['expose']['identifier'] = 'field_product_categories_tid';
  $handler->display->display_options['filters']['field_product_categories_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_product_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_categories_tid']['vocabulary'] = 'product_category';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'product-library';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['product_library'] = array(
    t('Master'),
    t('Product Library'),
    t('more'),
    t('Refine Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Sort options'),
    t('All Categories'),
    t('Select any filter and click on Apply to see results'),
    t('View'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Displaying @start - @end of @total'),
    t('Most Popular'),
    t('Title A-Z'),
    t('Filter By'),
    t('Page'),
    t('Block'),
  );
  $export['product_library'] = $view;

  $view = new view();
  $view->name = 'search_product_library';
  $view->description = 'View of Estee Lauder products';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Search Product Library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Refine Search';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'secondary_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'bef_links',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_product_categories_tid' => array(
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
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'View';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 20, 50';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
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
  $handler->display->display_options['fields']['field_display_title']['alter']['link_class'] = 'use-ajax ctools-use-modal ctools-modal-search-product-library';
  $handler->display->display_options['fields']['field_display_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_title']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Content: Product image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_product_image']['alter']['path'] = 'modal/nojs/[nid]';
  $handler->display->display_options['fields']['field_product_image']['alter']['link_class'] = 'use-ajax ctools-use-modal ctools-modal-search-product-library';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'product_detail',
    'image_link' => '',
  );
  /* Field: Content: Why there's only 1 */
  $handler->display->display_options['fields']['field_why_there_s_only_one']['id'] = 'field_why_there_s_only_one';
  $handler->display->display_options['fields']['field_why_there_s_only_one']['table'] = 'field_data_field_why_there_s_only_one';
  $handler->display->display_options['fields']['field_why_there_s_only_one']['field'] = 'field_why_there_s_only_one';
  $handler->display->display_options['fields']['field_why_there_s_only_one']['label'] = '';
  $handler->display->display_options['fields']['field_why_there_s_only_one']['element_label_colon'] = FALSE;
  /* Field: Content: Tags/keywords */
  $handler->display->display_options['fields']['field_tags_keywords']['id'] = 'field_tags_keywords';
  $handler->display->display_options['fields']['field_tags_keywords']['table'] = 'field_data_field_tags_keywords';
  $handler->display->display_options['fields']['field_tags_keywords']['field'] = 'field_tags_keywords';
  $handler->display->display_options['fields']['field_tags_keywords']['label'] = '';
  $handler->display->display_options['fields']['field_tags_keywords']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tags_keywords']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags_keywords']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title A-Z';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Most Relevent';
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
    'product_detail' => 'product_detail',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'node';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language_1']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_why_there_s_only_one' => 'field_why_there_s_only_one',
    'field_tags_keywords' => 'field_tags_keywords',
  );
  /* Filter criterion: Content: Product categories (field_product_categories) */
  $handler->display->display_options['filters']['field_product_categories_tid']['id'] = 'field_product_categories_tid';
  $handler->display->display_options['filters']['field_product_categories_tid']['table'] = 'field_data_field_product_categories';
  $handler->display->display_options['filters']['field_product_categories_tid']['field'] = 'field_product_categories_tid';
  $handler->display->display_options['filters']['field_product_categories_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_product_categories_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_categories_tid']['expose']['operator_id'] = 'field_product_categories_tid_op';
  $handler->display->display_options['filters']['field_product_categories_tid']['expose']['label'] = 'Filter By Category';
  $handler->display->display_options['filters']['field_product_categories_tid']['expose']['operator'] = 'field_product_categories_tid_op';
  $handler->display->display_options['filters']['field_product_categories_tid']['expose']['identifier'] = 'field_product_categories_tid';
  $handler->display->display_options['filters']['field_product_categories_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_product_categories_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_product_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_categories_tid']['vocabulary'] = 'product_category';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search-product-library';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['search_product_library'] = array(
    t('Master'),
    t('Search'),
    t('more'),
    t('Refine Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Sort options'),
    t('Select any filter and click on Apply to see results'),
    t('View'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Displaying @start - @end of @total'),
    t('Title A-Z'),
    t('Most Relevent'),
    t('Filter By Category'),
    t('Page'),
    t('Block'),
  );
  $export['search_product_library'] = $view;

  $view = new view();
  $view->name = 'tools';
  $view->description = 'View of Estee Lauder tools';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tools';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tools';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $translatables['tools'] = array(
    t('Master'),
    t('Tools'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Block'),
  );
  $export['tools'] = $view;

  return $export;
}
