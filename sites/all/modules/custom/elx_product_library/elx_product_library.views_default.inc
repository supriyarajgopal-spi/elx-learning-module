<?php
/**
 * @file
 * elx_product_library.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function elx_product_library_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'product_library';
  $view->description = 'View of Estee Lauder products';
  $view->tag = 'ELX';
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
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_detail' => 'product_detail',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Product categories (field_product_categories) */
  $handler->display->display_options['filters']['field_product_categories_tid']['id'] = 'field_product_categories_tid';
  $handler->display->display_options['filters']['field_product_categories_tid']['table'] = 'field_data_field_product_categories';
  $handler->display->display_options['filters']['field_product_categories_tid']['field'] = 'field_product_categories_tid';
  $handler->display->display_options['filters']['field_product_categories_tid']['group'] = 1;
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

  /* Display: Product Library */
  $handler = $view->new_display('panel_pane', 'Product Library', 'product_library');

  /* Display: Product Library Admin */
  $handler = $view->new_display('panel_pane', 'Product Library Admin', 'product_library_admin');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_detail' => 'product_detail',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Product categories (field_product_categories) */
  $handler->display->display_options['filters']['field_product_categories_tid']['id'] = 'field_product_categories_tid';
  $handler->display->display_options['filters']['field_product_categories_tid']['table'] = 'field_data_field_product_categories';
  $handler->display->display_options['filters']['field_product_categories_tid']['field'] = 'field_product_categories_tid';
  $handler->display->display_options['filters']['field_product_categories_tid']['group'] = 1;
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
    t('OG membership from node'),
    t('Most Popular'),
    t('Title A-Z'),
    t('Filter By'),
    t('View panes'),
    t('Product Library Admin'),
  );
  $export['product_library'] = $view;

  $view = new view();
  $view->name = 'search_product_library';
  $view->description = 'View of Estee Lauder products';
  $view->tag = 'ELX';
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
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
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
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
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
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Most Popular';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'node';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_detail' => 'product_detail',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
    t('OG membership from node'),
    t('Title A-Z'),
    t('Most Popular'),
    t('Filter By Category'),
    t('Page'),
  );
  $export['search_product_library'] = $view;

  return $export;
}
