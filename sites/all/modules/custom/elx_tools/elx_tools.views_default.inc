<?php
/**
 * @file
 * elx_tools.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function elx_tools_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tools';
  $view->description = 'View of Estee Lauder tools';
  $view->tag = 'ELX';
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
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Tool Media (field_tool_pdf:fid) */
  $handler->display->display_options['relationships']['field_tool_pdf_fid']['id'] = 'field_tool_pdf_fid';
  $handler->display->display_options['relationships']['field_tool_pdf_fid']['table'] = 'field_data_field_tool_pdf';
  $handler->display->display_options['relationships']['field_tool_pdf_fid']['field'] = 'field_tool_pdf_fid';
  $handler->display->display_options['relationships']['field_tool_pdf_fid']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: File: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'file_managed';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_tool_pdf_fid';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Content: Display title */
  $handler->display->display_options['fields']['field_display_title']['id'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['table'] = 'field_data_field_display_title';
  $handler->display->display_options['fields']['field_display_title']['field'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['label'] = '';
  $handler->display->display_options['fields']['field_display_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_display_title']['alter']['path'] = 'modal/nojs/[nid]';
  $handler->display->display_options['fields']['field_display_title']['alter']['link_class'] = 'use-ajax ctools-use-modal ctools-modal-elx-tools ctools-modal-elx-tools-[type]';
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
  $handler->display->display_options['fields']['field_tool_thumbnail']['alter']['link_class'] = 'use-ajax ctools-use-modal ctools-modal-elx-tools ctools-modal-elx-tools-[type]';
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
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
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
    'tools' => 'tools',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Tools */
  $handler = $view->new_display('panel_pane', 'Tools', 'tools');

  /* Display: Tools Admin */
  $handler = $view->new_display('panel_pane', 'Tools Admin', 'tools_admin');
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
    'tools' => 'tools',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['tools'] = array(
    t('Master'),
    t('Tools'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('file from field_tool_pdf'),
    t('View panes'),
    t('Tools Admin'),
  );
  $export['tools'] = $view;

  return $export;
}
