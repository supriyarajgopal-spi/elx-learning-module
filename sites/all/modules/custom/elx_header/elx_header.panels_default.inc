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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1fda9ae5-7dfb-4419-923f-42d8afeafa90';
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
    $pane->uuid = '1fda9ae5-7dfb-4419-923f-42d8afeafa90';
    $display->content['new-1fda9ae5-7dfb-4419-923f-42d8afeafa90'] = $pane;
    $display->panels['middle'][0] = 'new-1fda9ae5-7dfb-4419-923f-42d8afeafa90';
    $pane = new stdClass();
    $pane->pid = 'new-413f453f-1994-434e-b0d5-d765b6cb2b63';
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
    $pane->uuid = '413f453f-1994-434e-b0d5-d765b6cb2b63';
    $display->content['new-413f453f-1994-434e-b0d5-d765b6cb2b63'] = $pane;
    $display->panels['middle'][1] = 'new-413f453f-1994-434e-b0d5-d765b6cb2b63';
    $pane = new stdClass();
    $pane->pid = 'new-6c153463-753c-4465-9dd4-eaf9aa0948a0';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'recent_badges';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6c153463-753c-4465-9dd4-eaf9aa0948a0';
    $display->content['new-6c153463-753c-4465-9dd4-eaf9aa0948a0'] = $pane;
    $display->panels['middle'][2] = 'new-6c153463-753c-4465-9dd4-eaf9aa0948a0';
    $pane = new stdClass();
    $pane->pid = 'new-844e9c4c-1373-4d5d-933a-24930f2a02fb';
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
    $pane->uuid = '844e9c4c-1373-4d5d-933a-24930f2a02fb';
    $display->content['new-844e9c4c-1373-4d5d-933a-24930f2a02fb'] = $pane;
    $display->panels['middle'][3] = 'new-844e9c4c-1373-4d5d-933a-24930f2a02fb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1fda9ae5-7dfb-4419-923f-42d8afeafa90';
  $mini->display = $display;
  $export['header_user_menu'] = $mini;

  return $export;
}
