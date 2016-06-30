<?php
/**
 * @file
 * elx_content_tool.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function elx_content_tool_default_page_manager_pages_alter(&$pages) {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard';
  $page->task = 'page';
  $page->admin_title = 'Total Control administrative dashboard';
  $page->admin_description = '';
  $page->path = 'admin/dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'have total control',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Dashboard',
    'name' => 'management',
    'weight' => '-100',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Dashboard',
      'name' => 'management',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard';
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
  $display->title = 'Dashboard';
  $display->uuid = 'ac64acd4-bc8c-40e9-a937-9997a71246c5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-883c976f-5d90-4577-a09a-1d88180669ab';
  $pane->panel = 'center_left';
  $pane->type = 'views_panes';
  $pane->subtype = 'elx_untranslated_content-panel_pane_1';
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
  $pane->uuid = '883c976f-5d90-4577-a09a-1d88180669ab';
  $display->content['new-883c976f-5d90-4577-a09a-1d88180669ab'] = $pane;
  $display->panels['center_left'][0] = 'new-883c976f-5d90-4577-a09a-1d88180669ab';
  $pane = new stdClass();
  $pane->pid = 'new-f628b26d-f097-4657-b83f-4d39a68f9262';
  $pane->panel = 'center_middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'elx_unpublished_content-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '1',
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
  $pane->uuid = 'f628b26d-f097-4657-b83f-4d39a68f9262';
  $display->content['new-f628b26d-f097-4657-b83f-4d39a68f9262'] = $pane;
  $display->panels['center_middle'][0] = 'new-f628b26d-f097-4657-b83f-4d39a68f9262';
  $pane = new stdClass();
  $pane->pid = 'new-15808227-9683-4659-9303-2be16d857395';
  $pane->panel = 'center_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'elx_published_content-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '2',
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
  $pane->uuid = '15808227-9683-4659-9303-2be16d857395';
  $display->content['new-15808227-9683-4659-9303-2be16d857395'] = $pane;
  $display->panels['center_right'][0] = 'new-15808227-9683-4659-9303-2be16d857395';
  $pane = new stdClass();
  $pane->pid = 'new-ebb9918d-6bca-4ef9-b10c-db8a5c279b59';
  $pane->panel = 'top_left';
  $pane->type = 'create';
  $pane->subtype = 'create';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'article' => 'article',
      'project' => 'project',
      'page' => 0,
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = 'ebb9918d-6bca-4ef9-b10c-db8a5c279b59';
  $display->content['new-ebb9918d-6bca-4ef9-b10c-db8a5c279b59'] = $pane;
  $display->panels['top_left'][0] = 'new-ebb9918d-6bca-4ef9-b10c-db8a5c279b59';
  $pane = new stdClass();
  $pane->pid = 'new-0f71a8cd-eb8b-4b57-b378-88917f0157d6';
  $pane->panel = 'top_right';
  $pane->type = 'block';
  $pane->subtype = 'block-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'User Management',
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
  $pane->uuid = '0f71a8cd-eb8b-4b57-b378-88917f0157d6';
  $display->content['new-0f71a8cd-eb8b-4b57-b378-88917f0157d6'] = $pane;
  $display->panels['top_right'][0] = 'new-0f71a8cd-eb8b-4b57-b378-88917f0157d6';
  $pane = new stdClass();
  $pane->pid = 'new-bf37fce6-f577-4e10-8a15-481496e553bf';
  $pane->panel = 'top_right';
  $pane->type = 'block';
  $pane->subtype = 'block-2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Asset Management',
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
  $pane->uuid = 'bf37fce6-f577-4e10-8a15-481496e553bf';
  $display->content['new-bf37fce6-f577-4e10-8a15-481496e553bf'] = $pane;
  $display->panels['top_right'][1] = 'new-bf37fce6-f577-4e10-8a15-481496e553bf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard'] = $page;
}
