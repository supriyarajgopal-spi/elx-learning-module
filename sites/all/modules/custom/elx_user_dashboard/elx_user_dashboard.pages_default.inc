<?php
/**
 * @file
 * elx_user_dashboard.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function elx_user_dashboard_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_4e3f1360-5f3c-4627-adf0-9cf8d7487da0';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Dashboard',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '64.98661623044957',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'right',
        'width' => '35.01338376955042',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ae06fb31-2d1e-489a-a65d-19f85b9d81f6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'user_view__panel_context_4e3f1360-5f3c-4627-adf0-9cf8d7487da0';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-791e2f21-0879-49b2-89b3-687b7e2c8d0b';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_user';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '791e2f21-0879-49b2-89b3-687b7e2c8d0b';
  $display->content['new-791e2f21-0879-49b2-89b3-687b7e2c8d0b'] = $pane;
  $display->panels['center'][0] = 'new-791e2f21-0879-49b2-89b3-687b7e2c8d0b';
  $pane = new stdClass();
  $pane->pid = 'new-00d33d2b-4f74-4e49-9eb4-e3ba6ab35065';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_points-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => 'user-points',
    'override_title' => 1,
    'override_title_text' => 'My Leaderboard',
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
  $pane->uuid = '00d33d2b-4f74-4e49-9eb4-e3ba6ab35065';
  $display->content['new-00d33d2b-4f74-4e49-9eb4-e3ba6ab35065'] = $pane;
  $display->panels['center'][1] = 'new-00d33d2b-4f74-4e49-9eb4-e3ba6ab35065';
  $pane = new stdClass();
  $pane->pid = 'new-05c81ec8-70fa-4777-b7cf-c0357848175b';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_points-dashboard_user_points';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '05c81ec8-70fa-4777-b7cf-c0357848175b';
  $display->content['new-05c81ec8-70fa-4777-b7cf-c0357848175b'] = $pane;
  $display->panels['center'][2] = 'new-05c81ec8-70fa-4777-b7cf-c0357848175b';
  $pane = new stdClass();
  $pane->pid = 'new-2318a6b4-20d4-4d2f-a596-5ed2f9788166';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_tools';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '8',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 1,
    'override_title_text' => 'My Tools',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2318a6b4-20d4-4d2f-a596-5ed2f9788166';
  $display->content['new-2318a6b4-20d4-4d2f-a596-5ed2f9788166'] = $pane;
  $display->panels['center'][3] = 'new-2318a6b4-20d4-4d2f-a596-5ed2f9788166';
  $pane = new stdClass();
  $pane->pid = 'new-ed748793-fe4c-445f-b0c2-a266bdcfe04d';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_favorites';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 1,
    'override_title_text' => 'My Favorites',
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
  $pane->uuid = 'ed748793-fe4c-445f-b0c2-a266bdcfe04d';
  $display->content['new-ed748793-fe4c-445f-b0c2-a266bdcfe04d'] = $pane;
  $display->panels['right'][0] = 'new-ed748793-fe4c-445f-b0c2-a266bdcfe04d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_4e3f1360-5f3c-4627-adf0-9cf8d7487da0'] = $handler;

  return $export;
}
