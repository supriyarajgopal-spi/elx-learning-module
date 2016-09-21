<?php
/**
 * @file
 * elx_tools.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function elx_tools_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tools';
  $page->task = 'page';
  $page->admin_title = 'Tools';
  $page->admin_description = 'List of tools';
  $page->path = 'tools';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
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
  $handler->name = 'page_tools__tools-admin';
  $handler->task = 'page';
  $handler->subtask = 'tools';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Tools Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'tools-admin',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'administer nodes',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Tools';
  $display->uuid = 'f0ea5f43-1f0e-4799-a8c7-87d0c3aee817';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_tools__tools-admin';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b96d816f-c8fa-4132-acf2-c16e62364879';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'tools-tools_admin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b96d816f-c8fa-4132-acf2-c16e62364879';
  $display->content['new-b96d816f-c8fa-4132-acf2-c16e62364879'] = $pane;
  $display->panels['center'][0] = 'new-b96d816f-c8fa-4132-acf2-c16e62364879';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tools__panel';
  $handler->task = 'page';
  $handler->subtask = 'tools';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Tools',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Tools';
  $display->uuid = 'f0ea5f43-1f0e-4799-a8c7-87d0c3aee817';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_tools__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-313abbde-3997-495a-948e-22769b78c79c';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'tools-tools';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '313abbde-3997-495a-948e-22769b78c79c';
  $display->content['new-313abbde-3997-495a-948e-22769b78c79c'] = $pane;
  $display->panels['center'][0] = 'new-313abbde-3997-495a-948e-22769b78c79c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tools'] = $page;

  return $pages;

}
