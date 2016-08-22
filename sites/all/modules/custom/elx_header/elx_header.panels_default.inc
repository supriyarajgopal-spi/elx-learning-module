<?php
/**
 * @file
 * elx_header.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function elx_header_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header_user_menu';
  $mini->category = '';
  $mini->admin_title = 'Header user menu';
  $mini->admin_description = 'Menu minipanel for user menus in the header';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = 'e867caa7-8d7d-4d17-a74f-073ece5165e1';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'header_user_menu';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-eb0d8794-1ca1-4bb0-84ff-2bed7880f9bd';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-header-user-menu-1';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'eb0d8794-1ca1-4bb0-84ff-2bed7880f9bd';
  $display->content['new-eb0d8794-1ca1-4bb0-84ff-2bed7880f9bd'] = $pane;
  $display->panels['middle'][0] = 'new-eb0d8794-1ca1-4bb0-84ff-2bed7880f9bd';
  $pane = new stdClass();
  $pane->pid = 'new-fb9af835-2618-42aa-bbcc-79374a5de9c3';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'my_progress';
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
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fb9af835-2618-42aa-bbcc-79374a5de9c3';
  $display->content['new-fb9af835-2618-42aa-bbcc-79374a5de9c3'] = $pane;
  $display->panels['middle'][1] = 'new-fb9af835-2618-42aa-bbcc-79374a5de9c3';
  $pane = new stdClass();
  $pane->pid = 'new-c0d2048e-ce6e-45d7-b559-1caf8ad3f0a2';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'elx_recent_badges-recent_badges';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'c0d2048e-ce6e-45d7-b559-1caf8ad3f0a2';
  $display->content['new-c0d2048e-ce6e-45d7-b559-1caf8ad3f0a2'] = $pane;
  $display->panels['middle'][2] = 'new-c0d2048e-ce6e-45d7-b559-1caf8ad3f0a2';
  $pane = new stdClass();
  $pane->pid = 'new-1c929848-8651-48f3-9522-70f6d86fa31b';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-header-user-menu-2';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1c929848-8651-48f3-9522-70f6d86fa31b';
  $display->content['new-1c929848-8651-48f3-9522-70f6d86fa31b'] = $pane;
  $display->panels['middle'][3] = 'new-1c929848-8651-48f3-9522-70f6d86fa31b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['header_user_menu'] = $mini;

  return $export;
}
