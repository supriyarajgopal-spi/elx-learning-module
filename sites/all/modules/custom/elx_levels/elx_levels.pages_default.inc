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
  $page->menu = array(
    'type' => 'normal',
    'title' => 'ALL',
    'name' => 'menu-levels-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_levels_all__levels-all-admin';
  $handler->task = 'page';
  $handler->subtask = 'levels_all';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Levels All Admin',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'levels-all-admin',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'bypass node access',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->storage_id = 'page_levels_all__levels-all-admin';
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
  $pane->pid = 'new-68bc77e5-716a-42e9-83cf-98a76b32412f';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-5';
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
  $pane->uuid = '68bc77e5-716a-42e9-83cf-98a76b32412f';
  $display->content['new-68bc77e5-716a-42e9-83cf-98a76b32412f'] = $pane;
  $display->panels['middle'][1] = 'new-68bc77e5-716a-42e9-83cf-98a76b32412f';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ec7c8518-aacc-41d1-b1fa-f2f1ea0a8ae8';
  $display->content['new-ec7c8518-aacc-41d1-b1fa-f2f1ea0a8ae8'] = $pane;
  $display->panels['middle'][2] = 'new-ec7c8518-aacc-41d1-b1fa-f2f1ea0a8ae8';
  $pane = new stdClass();
  $pane->pid = 'new-2a90ca98-9140-423e-9b87-e52f5937b32d';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'levels_quizz_progress-all_admin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2a90ca98-9140-423e-9b87-e52f5937b32d';
  $display->content['new-2a90ca98-9140-423e-9b87-e52f5937b32d'] = $pane;
  $display->panels['middle'][3] = 'new-2a90ca98-9140-423e-9b87-e52f5937b32d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_levels_all__panel_context_13ae3a16-503c-473d-9e19-b146d1f59e51';
  $handler->task = 'page';
  $handler->subtask = 'levels_all';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
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
  $pane->pid = 'new-68bc77e5-716a-42e9-83cf-98a76b32412f';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-5';
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
  $pane->uuid = '68bc77e5-716a-42e9-83cf-98a76b32412f';
  $display->content['new-68bc77e5-716a-42e9-83cf-98a76b32412f'] = $pane;
  $display->panels['middle'][1] = 'new-68bc77e5-716a-42e9-83cf-98a76b32412f';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ec7c8518-aacc-41d1-b1fa-f2f1ea0a8ae8';
  $display->content['new-ec7c8518-aacc-41d1-b1fa-f2f1ea0a8ae8'] = $pane;
  $display->panels['middle'][2] = 'new-ec7c8518-aacc-41d1-b1fa-f2f1ea0a8ae8';
  $pane = new stdClass();
  $pane->pid = 'new-12f601b9-acee-4a89-9e51-4fafa59f7c31';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'levels_quizz_progress-all';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '12f601b9-acee-4a89-9e51-4fafa59f7c31';
  $display->content['new-12f601b9-acee-4a89-9e51-4fafa59f7c31'] = $pane;
  $display->panels['middle'][3] = 'new-12f601b9-acee-4a89-9e51-4fafa59f7c31';
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
  $page->menu = array(
    'type' => 'normal',
    'title' => 'COMPLETED',
    'name' => 'menu-levels-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
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
  $handler->weight = -29;
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
  $pane->pid = 'new-0c6db9c6-0a62-4fcb-9790-c91fd92f6bc0';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-5';
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
  $pane->uuid = '0c6db9c6-0a62-4fcb-9790-c91fd92f6bc0';
  $display->content['new-0c6db9c6-0a62-4fcb-9790-c91fd92f6bc0'] = $pane;
  $display->panels['middle'][1] = 'new-0c6db9c6-0a62-4fcb-9790-c91fd92f6bc0';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '750af006-cd0d-4e29-b1da-07e2bcf68cf3';
  $display->content['new-750af006-cd0d-4e29-b1da-07e2bcf68cf3'] = $pane;
  $display->panels['middle'][2] = 'new-750af006-cd0d-4e29-b1da-07e2bcf68cf3';
  $pane = new stdClass();
  $pane->pid = 'new-cf228675-7394-419d-b9a8-e81974707dba';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'levels_quizz_progress-completed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'cf228675-7394-419d-b9a8-e81974707dba';
  $display->content['new-cf228675-7394-419d-b9a8-e81974707dba'] = $pane;
  $display->panels['middle'][3] = 'new-cf228675-7394-419d-b9a8-e81974707dba';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
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
  $page->menu = array(
    'type' => 'normal',
    'title' => 'IN PROGRESS',
    'name' => 'menu-levels-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
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
  $handler->weight = -29;
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
  $pane->pid = 'new-e0539499-3116-46ea-adc3-679b1ec122d0';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-5';
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
  $pane->uuid = 'e0539499-3116-46ea-adc3-679b1ec122d0';
  $display->content['new-e0539499-3116-46ea-adc3-679b1ec122d0'] = $pane;
  $display->panels['middle'][1] = 'new-e0539499-3116-46ea-adc3-679b1ec122d0';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'dca6ba89-6431-4b80-9436-239a877cb1ad';
  $display->content['new-dca6ba89-6431-4b80-9436-239a877cb1ad'] = $pane;
  $display->panels['middle'][2] = 'new-dca6ba89-6431-4b80-9436-239a877cb1ad';
  $pane = new stdClass();
  $pane->pid = 'new-f38f0d38-4179-4bc9-915d-cb8baf5c20dc';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'levels_quizz_progress-in_progress';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f38f0d38-4179-4bc9-915d-cb8baf5c20dc';
  $display->content['new-f38f0d38-4179-4bc9-915d-cb8baf5c20dc'] = $pane;
  $display->panels['middle'][3] = 'new-f38f0d38-4179-4bc9-915d-cb8baf5c20dc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['levels_in_progress'] = $page;

  return $pages;

}
