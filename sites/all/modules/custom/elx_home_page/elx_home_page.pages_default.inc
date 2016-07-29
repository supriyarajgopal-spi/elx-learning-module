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
  $handler->name = 'page_home_page__panel_context_6ffa8485-1c00-4613-95a0-1e740b56e289';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
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
  $display->uuid = '5b8d4e07-3b30-4b54-a85a-5a4ec1539a80';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6bd1ead9-d52b-4cb4-89dd-87175f16c517';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'homepage_spotlight';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6bd1ead9-d52b-4cb4-89dd-87175f16c517';
    $display->content['new-6bd1ead9-d52b-4cb4-89dd-87175f16c517'] = $pane;
    $display->panels['middle'][0] = 'new-6bd1ead9-d52b-4cb4-89dd-87175f16c517';
    $pane = new stdClass();
    $pane->pid = 'new-635c071c-afa5-465a-b140-4df8374f034b';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'homepage_exploringlearninglevels';
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
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '635c071c-afa5-465a-b140-4df8374f034b';
    $display->content['new-635c071c-afa5-465a-b140-4df8374f034b'] = $pane;
    $display->panels['middle'][1] = 'new-635c071c-afa5-465a-b140-4df8374f034b';
    $pane = new stdClass();
    $pane->pid = 'new-2ecbe67a-93f1-4759-9313-96b292a3b480';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'homepage_whatsnewtrending';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
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
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2ecbe67a-93f1-4759-9313-96b292a3b480';
    $display->content['new-2ecbe67a-93f1-4759-9313-96b292a3b480'] = $pane;
    $display->panels['middle'][2] = 'new-2ecbe67a-93f1-4759-9313-96b292a3b480';
    $pane = new stdClass();
    $pane->pid = 'new-f91f9d89-7a33-4ac2-aab6-782367ddc36f';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'homepage_browseproductlibrary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
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
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f91f9d89-7a33-4ac2-aab6-782367ddc36f';
    $display->content['new-f91f9d89-7a33-4ac2-aab6-782367ddc36f'] = $pane;
    $display->panels['middle'][3] = 'new-f91f9d89-7a33-4ac2-aab6-782367ddc36f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}
