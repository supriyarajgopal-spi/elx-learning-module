<?php
/**
 * @file
 * elx_levels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function elx_levels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'levels_all';
  $page->task = 'page';
  $page->admin_title = 'Levels All';
  $page->admin_description = 'User progress for all his/her levels';
  $page->path = 'levels_all';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_levels_all__panel_context_13ae3a16-503c-473d-9e19-b146d1f59e51';
  $handler->task = 'page';
  $handler->subtask = 'levels_all';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Levels All',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd312ae66-a7e6-4c0b-8307-17c33e924876';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_levels_all__panel_context_13ae3a16-503c-473d-9e19-b146d1f59e51';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dcecd236-7735-4abe-ab79-3ed2f6bd89c8';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Levels',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dcecd236-7735-4abe-ab79-3ed2f6bd89c8';
  $display->content['new-dcecd236-7735-4abe-ab79-3ed2f6bd89c8'] = $pane;
  $display->panels['middle'][0] = 'new-dcecd236-7735-4abe-ab79-3ed2f6bd89c8';
  $pane = new stdClass();
  $pane->pid = 'new-ec7c8518-aacc-41d1-b1fa-f2f1ea0a8ae8';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-levels-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ec7c8518-aacc-41d1-b1fa-f2f1ea0a8ae8';
  $display->content['new-ec7c8518-aacc-41d1-b1fa-f2f1ea0a8ae8'] = $pane;
  $display->panels['middle'][1] = 'new-ec7c8518-aacc-41d1-b1fa-f2f1ea0a8ae8';
  $pane = new stdClass();
  $pane->pid = 'new-d56ee6ef-3b69-402d-aeaf-6413d4862d47';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'levels_quizz_progress';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '20',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'levels_outer_view',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd56ee6ef-3b69-402d-aeaf-6413d4862d47';
  $display->content['new-d56ee6ef-3b69-402d-aeaf-6413d4862d47'] = $pane;
  $display->panels['middle'][2] = 'new-d56ee6ef-3b69-402d-aeaf-6413d4862d47';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['levels_all'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'levels_completed';
  $page->task = 'page';
  $page->admin_title = 'Levels Completed';
  $page->admin_description = 'User progress for all his/her levels';
  $page->path = 'levels_completed';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_levels_completed__panel_context_48c4532b-0464-481b-ae1b-237f3c7138bd';
  $handler->task = 'page';
  $handler->subtask = 'levels_completed';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Levels Completed',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd312ae66-a7e6-4c0b-8307-17c33e924876';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_levels_completed__panel_context_48c4532b-0464-481b-ae1b-237f3c7138bd';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-689fc126-2d1a-4838-90da-f7bf87017d34';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Levels',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '689fc126-2d1a-4838-90da-f7bf87017d34';
  $display->content['new-689fc126-2d1a-4838-90da-f7bf87017d34'] = $pane;
  $display->panels['middle'][0] = 'new-689fc126-2d1a-4838-90da-f7bf87017d34';
  $pane = new stdClass();
  $pane->pid = 'new-750af006-cd0d-4e29-b1da-07e2bcf68cf3';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-levels-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '750af006-cd0d-4e29-b1da-07e2bcf68cf3';
  $display->content['new-750af006-cd0d-4e29-b1da-07e2bcf68cf3'] = $pane;
  $display->panels['middle'][1] = 'new-750af006-cd0d-4e29-b1da-07e2bcf68cf3';
  $pane = new stdClass();
  $pane->pid = 'new-f0318101-415d-4e25-b5d0-20eed420ce2e';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'levels_quizz_progress';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '20',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'levels_outer_view',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f0318101-415d-4e25-b5d0-20eed420ce2e';
  $display->content['new-f0318101-415d-4e25-b5d0-20eed420ce2e'] = $pane;
  $display->panels['middle'][2] = 'new-f0318101-415d-4e25-b5d0-20eed420ce2e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['levels_completed'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'levels_content';
  $page->task = 'page';
  $page->admin_title = 'Levels Content';
  $page->admin_description = 'Levels content only';
  $page->path = 'levels_content_only';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_levels_content__panel';
  $handler->task = 'page';
  $handler->subtask = 'levels_content';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Levels Content',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1c3dab33-fff4-4b17-bd73-12f17ebaccfa';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_levels_content__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-55ce106c-2987-4a43-8d2e-4347ff54aa90';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Levels',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '55ce106c-2987-4a43-8d2e-4347ff54aa90';
  $display->content['new-55ce106c-2987-4a43-8d2e-4347ff54aa90'] = $pane;
  $display->panels['middle'][0] = 'new-55ce106c-2987-4a43-8d2e-4347ff54aa90';
  $pane = new stdClass();
  $pane->pid = 'new-43c7cf42-70a2-4c89-b856-262b8af782ec';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-levels-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '43c7cf42-70a2-4c89-b856-262b8af782ec';
  $display->content['new-43c7cf42-70a2-4c89-b856-262b8af782ec'] = $pane;
  $display->panels['middle'][1] = 'new-43c7cf42-70a2-4c89-b856-262b8af782ec';
  $pane = new stdClass();
  $pane->pid = 'new-c38026c3-437b-4256-96ce-0144a506df6a';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'levels_outer_view_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '20',
    'pager_id' => '1',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c38026c3-437b-4256-96ce-0144a506df6a';
  $display->content['new-c38026c3-437b-4256-96ce-0144a506df6a'] = $pane;
  $display->panels['middle'][2] = 'new-c38026c3-437b-4256-96ce-0144a506df6a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['levels_content'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'levels_in_progress';
  $page->task = 'page';
  $page->admin_title = 'Levels In Progress';
  $page->admin_description = 'User progress for all his/her levels';
  $page->path = 'levels_in_progress';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_levels_in_progress__panel_context_9afbdad9-a075-4f5f-be44-e687d0632ca3';
  $handler->task = 'page';
  $handler->subtask = 'levels_in_progress';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Levels in Progress',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd312ae66-a7e6-4c0b-8307-17c33e924876';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_levels_in_progress__panel_context_9afbdad9-a075-4f5f-be44-e687d0632ca3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d3f9de0c-c95a-4f60-86d4-7e9dae0c4fbc';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Levels',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd3f9de0c-c95a-4f60-86d4-7e9dae0c4fbc';
  $display->content['new-d3f9de0c-c95a-4f60-86d4-7e9dae0c4fbc'] = $pane;
  $display->panels['middle'][0] = 'new-d3f9de0c-c95a-4f60-86d4-7e9dae0c4fbc';
  $pane = new stdClass();
  $pane->pid = 'new-dca6ba89-6431-4b80-9436-239a877cb1ad';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-levels-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dca6ba89-6431-4b80-9436-239a877cb1ad';
  $display->content['new-dca6ba89-6431-4b80-9436-239a877cb1ad'] = $pane;
  $display->panels['middle'][1] = 'new-dca6ba89-6431-4b80-9436-239a877cb1ad';
  $pane = new stdClass();
  $pane->pid = 'new-06ea8663-83a6-4232-aa74-32ea28e9b929';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'levels_quizz_progress';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '20',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'levels_outer_view',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '06ea8663-83a6-4232-aa74-32ea28e9b929';
  $display->content['new-06ea8663-83a6-4232-aa74-32ea28e9b929'] = $pane;
  $display->panels['middle'][2] = 'new-06ea8663-83a6-4232-aa74-32ea28e9b929';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['levels_in_progress'] = $page;

  return $pages;

}
