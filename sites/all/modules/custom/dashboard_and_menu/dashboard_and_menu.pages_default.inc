<?php
/**
 * @file
 * dashboard_and_menu.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dashboard_and_menu_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'group_administrative_dashboard';
  $page->task = 'page';
  $page->admin_title = 'Group administrative dashboard';
  $page->admin_description = '';
  $page->path = 'node/%node/dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 7,
            2 => 6,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'market' => 'market',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Dashboard',
    'name' => 'management',
    'weight' => '10',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Dashboard',
      'name' => 'management',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_group_administrative_dashboard__panel_context_90f281c4-b743-446c-b0bb-b5a93bff6c74';
  $handler->task = 'page';
  $handler->subtask = 'group_administrative_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Admin Dashboard',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'market' => 'market',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
        'hide_empty' => 1,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 1,
        ),
        'parent' => 'canvas',
        'class' => '',
        'hide_empty' => 1,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_left',
          1 => 'center_middle',
          2 => 'center_right',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_left',
          1 => 'top_right',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'top_left' => array(
        'type' => 'region',
        'title' => 'Top left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 1,
      ),
      'top_right' => array(
        'type' => 'region',
        'title' => 'Top right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 1,
      ),
      'center_left' => array(
        'type' => 'region',
        'title' => 'Center left',
        'width' => '33.27430145611964',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 1,
      ),
      'center_middle' => array(
        'type' => 'region',
        'title' => 'Center middle',
        'width' => '33.42729196688003',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 1,
      ),
      'center_right' => array(
        'type' => 'region',
        'title' => 'Center right',
        'width' => '33.298406577000335',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'center' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'center_left' => NULL,
      'center_middle' => NULL,
      'center_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title Dashboard';
  $display->uuid = 'ac64acd4-bc8c-40e9-a937-9997a71246c5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fd2036aa-2ffc-4f8f-8b67-a327b49703d4';
  $pane->panel = 'center_left';
  $pane->type = 'views_panes';
  $pane->subtype = 'elx_untranslated_content-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '10',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fd2036aa-2ffc-4f8f-8b67-a327b49703d4';
  $display->content['new-fd2036aa-2ffc-4f8f-8b67-a327b49703d4'] = $pane;
  $display->panels['center_left'][0] = 'new-fd2036aa-2ffc-4f8f-8b67-a327b49703d4';
  $pane = new stdClass();
  $pane->pid = 'new-cd01ca18-0716-4286-b54d-e8a0001428ef';
  $pane->panel = 'center_middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'elx_unpublished_content-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '10',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cd01ca18-0716-4286-b54d-e8a0001428ef';
  $display->content['new-cd01ca18-0716-4286-b54d-e8a0001428ef'] = $pane;
  $display->panels['center_middle'][0] = 'new-cd01ca18-0716-4286-b54d-e8a0001428ef';
  $pane = new stdClass();
  $pane->pid = 'new-0256e0b6-0335-4e95-a455-da6a38a70088';
  $pane->panel = 'center_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'elx_published_content-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '10',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0256e0b6-0335-4e95-a455-da6a38a70088';
  $display->content['new-0256e0b6-0335-4e95-a455-da6a38a70088'] = $pane;
  $display->panels['center_right'][0] = 'new-0256e0b6-0335-4e95-a455-da6a38a70088';
  $pane = new stdClass();
  $pane->pid = 'new-e7bdc132-93da-41c6-8e66-27da957a6073';
  $pane->panel = 'top_left';
  $pane->type = 'block';
  $pane->subtype = 'og_extras-node_links';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Add Group Content',
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
  $pane->uuid = 'e7bdc132-93da-41c6-8e66-27da957a6073';
  $display->content['new-e7bdc132-93da-41c6-8e66-27da957a6073'] = $pane;
  $display->panels['top_left'][0] = 'new-e7bdc132-93da-41c6-8e66-27da957a6073';
  $pane = new stdClass();
  $pane->pid = 'new-4822b56e-c93d-4617-85be-eb18731d9614';
  $pane->panel = 'top_right';
  $pane->type = 'block';
  $pane->subtype = 'og_extras-group_info';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Group Details Pane',
    'override_title_heading' => 'h1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4822b56e-c93d-4617-85be-eb18731d9614';
  $display->content['new-4822b56e-c93d-4617-85be-eb18731d9614'] = $pane;
  $display->panels['top_right'][0] = 'new-4822b56e-c93d-4617-85be-eb18731d9614';
  $pane = new stdClass();
  $pane->pid = 'new-d2d670c5-9755-4e2b-90af-dde8ff73bf59';
  $pane->panel = 'top_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'og_members-panel_pane_1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
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
  $pane->uuid = 'd2d670c5-9755-4e2b-90af-dde8ff73bf59';
  $display->content['new-d2d670c5-9755-4e2b-90af-dde8ff73bf59'] = $pane;
  $display->panels['top_right'][1] = 'new-d2d670c5-9755-4e2b-90af-dde8ff73bf59';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['group_administrative_dashboard'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'leaderboard';
  $page->task = 'page';
  $page->admin_title = 'Leaderboard';
  $page->admin_description = '';
  $page->path = 'leaderboard';
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
  $handler->name = 'page_leaderboard__panel';
  $handler->task = 'page';
  $handler->subtask = 'leaderboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Leader Board Panel',
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
  $display->title = 'Leaderboard';
  $display->uuid = 'e67a4f9a-5851-42ee-81e6-2dc12ad5efee';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_leaderboard__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1971aa3a-6220-4044-97c2-c208343fa222';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_points-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'path' => 'user-points',
    'override_title' => 1,
    'override_title_text' => '<none>',
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
  $pane->uuid = '1971aa3a-6220-4044-97c2-c208343fa222';
  $display->content['new-1971aa3a-6220-4044-97c2-c208343fa222'] = $pane;
  $display->panels['middle'][0] = 'new-1971aa3a-6220-4044-97c2-c208343fa222';
  $pane = new stdClass();
  $pane->pid = 'new-faeed201-74f8-4818-95a6-ae700b428320';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_points-panel_pane_4';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'leaderboard/market/*',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'path' => '',
    'override_title' => 1,
    'override_title_text' => '<none>',
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
  $pane->uuid = 'faeed201-74f8-4818-95a6-ae700b428320';
  $display->content['new-faeed201-74f8-4818-95a6-ae700b428320'] = $pane;
  $display->panels['middle'][1] = 'new-faeed201-74f8-4818-95a6-ae700b428320';
  $pane = new stdClass();
  $pane->pid = 'new-6a3bb64c-0515-4446-9902-1bb826860c34';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'dashboard_and_menu-leaderboard_filter';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
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
  $pane->uuid = '6a3bb64c-0515-4446-9902-1bb826860c34';
  $display->content['new-6a3bb64c-0515-4446-9902-1bb826860c34'] = $pane;
  $display->panels['middle'][2] = 'new-6a3bb64c-0515-4446-9902-1bb826860c34';
  $pane = new stdClass();
  $pane->pid = 'new-3d26e91c-7ec8-48fa-808b-139ff604d4bd';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_points-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => 'leaderboard',
    'exposed' => array(
      'field_country_value' => 'All',
      'field_region_list_value' => 'All',
    ),
    'override_title' => 1,
    'override_title_text' => '<none>',
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
  $pane->uuid = '3d26e91c-7ec8-48fa-808b-139ff604d4bd';
  $display->content['new-3d26e91c-7ec8-48fa-808b-139ff604d4bd'] = $pane;
  $display->panels['middle'][3] = 'new-3d26e91c-7ec8-48fa-808b-139ff604d4bd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['leaderboard'] = $page;

  return $pages;

}
