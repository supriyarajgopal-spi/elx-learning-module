<?php
/**
 * @file
 * elx_home_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function elx_home_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home page';
  $page->admin_description = 'Home page';
  $page->path = 'home_page';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => TRUE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__panel_context_daf28055-23ef-4b41-8b50-8f53216183c4';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Panel home page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
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
  $display->uuid = 'b6b338ee-ea19-44a9-90cd-9839e2649f0d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_page__panel_context_daf28055-23ef-4b41-8b50-8f53216183c4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fc532907-c197-45d8-abe6-94cf25d3eacf';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'homepage_spotlight';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
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
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '3600',
      'granularity' => 'none',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fc532907-c197-45d8-abe6-94cf25d3eacf';
  $display->content['new-fc532907-c197-45d8-abe6-94cf25d3eacf'] = $pane;
  $display->panels['middle'][0] = 'new-fc532907-c197-45d8-abe6-94cf25d3eacf';
  $pane = new stdClass();
  $pane->pid = 'new-342efcb1-34ea-4077-90f4-0c5a606e1e32';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'explore_learning_levels';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '4',
    'pager_id' => '0',
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
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '3600',
      'granularity' => 'none',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '342efcb1-34ea-4077-90f4-0c5a606e1e32';
  $display->content['new-342efcb1-34ea-4077-90f4-0c5a606e1e32'] = $pane;
  $display->panels['middle'][1] = 'new-342efcb1-34ea-4077-90f4-0c5a606e1e32';
  $pane = new stdClass();
  $pane->pid = 'new-c8982932-f3e4-4caf-bc2d-8f79af74201b';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'homepage_whatsnewtrending';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '4',
    'pager_id' => '0',
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
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '3600',
      'granularity' => 'none',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c8982932-f3e4-4caf-bc2d-8f79af74201b';
  $display->content['new-c8982932-f3e4-4caf-bc2d-8f79af74201b'] = $pane;
  $display->panels['middle'][2] = 'new-c8982932-f3e4-4caf-bc2d-8f79af74201b';
  $pane = new stdClass();
  $pane->pid = 'new-a5149159-58ab-4089-8e05-05b80d27f47b';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'homepage_browseproductlibrary';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '4',
    'pager_id' => '0',
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
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '3600',
      'granularity' => 'none',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a5149159-58ab-4089-8e05-05b80d27f47b';
  $display->content['new-a5149159-58ab-4089-8e05-05b80d27f47b'] = $pane;
  $display->panels['middle'][3] = 'new-a5149159-58ab-4089-8e05-05b80d27f47b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}
