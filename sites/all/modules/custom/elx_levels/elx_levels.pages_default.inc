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
    'title' => 'Landing page',
    'no_blocks' => FALSE,
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
  $pane->pid = 'new-fbb1f099-8167-45fc-bb79-37aabc89dcd0';
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
  $pane->uuid = 'fbb1f099-8167-45fc-bb79-37aabc89dcd0';
  $display->content['new-fbb1f099-8167-45fc-bb79-37aabc89dcd0'] = $pane;
  $display->panels['middle'][0] = 'new-fbb1f099-8167-45fc-bb79-37aabc89dcd0';
  $pane = new stdClass();
  $pane->pid = 'new-4a9aad9c-8e49-46da-a767-3632e7c7a686';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-levels-overviews-user';
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
  $pane->uuid = '4a9aad9c-8e49-46da-a767-3632e7c7a686';
  $display->content['new-4a9aad9c-8e49-46da-a767-3632e7c7a686'] = $pane;
  $display->panels['middle'][1] = 'new-4a9aad9c-8e49-46da-a767-3632e7c7a686';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-fbb1f099-8167-45fc-bb79-37aabc89dcd0';
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
    'title' => 'Landing page',
    'no_blocks' => FALSE,
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
  $pane->pid = 'new-fbb1f099-8167-45fc-bb79-37aabc89dcd0';
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
  $pane->uuid = 'fbb1f099-8167-45fc-bb79-37aabc89dcd0';
  $display->content['new-fbb1f099-8167-45fc-bb79-37aabc89dcd0'] = $pane;
  $display->panels['middle'][0] = 'new-fbb1f099-8167-45fc-bb79-37aabc89dcd0';
  $pane = new stdClass();
  $pane->pid = 'new-4a9aad9c-8e49-46da-a767-3632e7c7a686';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-levels-overviews-user';
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
  $pane->uuid = '4a9aad9c-8e49-46da-a767-3632e7c7a686';
  $display->content['new-4a9aad9c-8e49-46da-a767-3632e7c7a686'] = $pane;
  $display->panels['middle'][1] = 'new-4a9aad9c-8e49-46da-a767-3632e7c7a686';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-fbb1f099-8167-45fc-bb79-37aabc89dcd0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['levels_completed'] = $page;

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
    'title' => 'Landing page',
    'no_blocks' => FALSE,
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
  $pane->pid = 'new-fbb1f099-8167-45fc-bb79-37aabc89dcd0';
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
  $pane->uuid = 'fbb1f099-8167-45fc-bb79-37aabc89dcd0';
  $display->content['new-fbb1f099-8167-45fc-bb79-37aabc89dcd0'] = $pane;
  $display->panels['middle'][0] = 'new-fbb1f099-8167-45fc-bb79-37aabc89dcd0';
  $pane = new stdClass();
  $pane->pid = 'new-4a9aad9c-8e49-46da-a767-3632e7c7a686';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-levels-overviews-user';
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
  $pane->uuid = '4a9aad9c-8e49-46da-a767-3632e7c7a686';
  $display->content['new-4a9aad9c-8e49-46da-a767-3632e7c7a686'] = $pane;
  $display->panels['middle'][1] = 'new-4a9aad9c-8e49-46da-a767-3632e7c7a686';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-fbb1f099-8167-45fc-bb79-37aabc89dcd0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['levels_in_progress'] = $page;

  return $pages;

}
