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
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '71.69916804063145',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 3,
          2 => 4,
          3 => 5,
          4 => 6,
          5 => 7,
          6 => 8,
          7 => 9,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'user_information',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'column',
        'width' => '28.300831959368548',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'my_favorites',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'my_favorites' => array(
        'type' => 'region',
        'title' => 'My Favorites',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'user_information' => array(
        'type' => 'region',
        'title' => 'User Information Name',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'user_information_left',
          1 => 'user_information_right',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'user_information_left' => array(
        'type' => 'region',
        'title' => 'User Information Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'user_information_right' => array(
        'type' => 'region',
        'title' => 'User Information Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'my_progress_levels',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'my_progress_levels' => array(
        'type' => 'region',
        'title' => 'My Progress Levels',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'my_progress_last_login',
          1 => 'my_progress_my_points',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'my_progress_last_login' => array(
        'type' => 'region',
        'title' => 'My Progress Last Login',
        'width' => 50,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      'my_progress_my_points' => array(
        'type' => 'region',
        'title' => 'My Progress My Points',
        'width' => 50,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'my_progress_recently_completed_activites',
          1 => 'my_progress_suggested_for_you',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'my_progress_recently_completed_activites' => array(
        'type' => 'region',
        'title' => 'My Progress Recently Completed Activites',
        'width' => 50,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 0,
      ),
      'my_progress_suggested_for_you' => array(
        'type' => 'region',
        'title' => 'My Progress Suggested for You',
        'width' => 50,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'my_badges',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'my_badges' => array(
        'type' => 'region',
        'title' => 'My Badges',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'my_leaderboard',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'my_leaderboard' => array(
        'type' => 'region',
        'title' => 'My Leaderboard',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'my_tools',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'my_tools' => array(
        'type' => 'region',
        'title' => 'My Tools',
        'width' => 100,
        'width_type' => '%',
        'parent' => '9',
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
      'my_favorites' => NULL,
      'user_information' => NULL,
      'user_information_left' => NULL,
      'user_information_right' => NULL,
      'my_progress_levels' => NULL,
      'my_progress_last_login' => NULL,
      'my_progress_my_points' => NULL,
      'my_progress_recently_completed_activites' => NULL,
      'my_progress_suggested_for_you' => NULL,
      'my_badges' => NULL,
      'my_leaderboard' => NULL,
      'my_tools' => NULL,
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
  $pane->pid = 'new-8082173d-aeb5-495e-bd28-d3ba30ab3454';
  $pane->panel = 'my_favorites';
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
  $pane->uuid = '8082173d-aeb5-495e-bd28-d3ba30ab3454';
  $display->content['new-8082173d-aeb5-495e-bd28-d3ba30ab3454'] = $pane;
  $display->panels['my_favorites'][0] = 'new-8082173d-aeb5-495e-bd28-d3ba30ab3454';
  $pane = new stdClass();
  $pane->pid = 'new-7053f751-cf5c-4053-a845-222943504d4c';
  $pane->panel = 'my_leaderboard';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7053f751-cf5c-4053-a845-222943504d4c';
  $display->content['new-7053f751-cf5c-4053-a845-222943504d4c'] = $pane;
  $display->panels['my_leaderboard'][0] = 'new-7053f751-cf5c-4053-a845-222943504d4c';
  $pane = new stdClass();
  $pane->pid = 'new-8fb10998-a2a2-4ce3-8da6-468943816ec7';
  $pane->panel = 'my_leaderboard';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8fb10998-a2a2-4ce3-8da6-468943816ec7';
  $display->content['new-8fb10998-a2a2-4ce3-8da6-468943816ec7'] = $pane;
  $display->panels['my_leaderboard'][1] = 'new-8fb10998-a2a2-4ce3-8da6-468943816ec7';
  $pane = new stdClass();
  $pane->pid = 'new-f7d63bbf-c88e-452f-bd04-585818556878';
  $pane->panel = 'my_tools';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f7d63bbf-c88e-452f-bd04-585818556878';
  $display->content['new-f7d63bbf-c88e-452f-bd04-585818556878'] = $pane;
  $display->panels['my_tools'][0] = 'new-f7d63bbf-c88e-452f-bd04-585818556878';
  $pane = new stdClass();
  $pane->pid = 'new-5077581a-1a95-4ba1-af60-f6bb55c07f37';
  $pane->panel = 'user_information';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_user-panel_pane_1';
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
  $pane->uuid = '5077581a-1a95-4ba1-af60-f6bb55c07f37';
  $display->content['new-5077581a-1a95-4ba1-af60-f6bb55c07f37'] = $pane;
  $display->panels['user_information'][0] = 'new-5077581a-1a95-4ba1-af60-f6bb55c07f37';
  $pane = new stdClass();
  $pane->pid = 'new-b0e470d0-9b63-4995-9b22-afecc2b75efd';
  $pane->panel = 'user_information_left';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_user-panel_pane_2';
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
  $pane->uuid = 'b0e470d0-9b63-4995-9b22-afecc2b75efd';
  $display->content['new-b0e470d0-9b63-4995-9b22-afecc2b75efd'] = $pane;
  $display->panels['user_information_left'][0] = 'new-b0e470d0-9b63-4995-9b22-afecc2b75efd';
  $pane = new stdClass();
  $pane->pid = 'new-274a2c3e-309a-45f6-be60-61ec39b15993';
  $pane->panel = 'user_information_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_user-panel_pane_3';
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
  $pane->uuid = '274a2c3e-309a-45f6-be60-61ec39b15993';
  $display->content['new-274a2c3e-309a-45f6-be60-61ec39b15993'] = $pane;
  $display->panels['user_information_right'][0] = 'new-274a2c3e-309a-45f6-be60-61ec39b15993';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_4e3f1360-5f3c-4627-adf0-9cf8d7487da0'] = $handler;

  return $export;
}
