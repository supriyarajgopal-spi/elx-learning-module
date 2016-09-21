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
          1 => 3,
          2 => 4,
          3 => 5,
          4 => 6,
          5 => 8,
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
        'title' => 'My Stuff',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
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
  $pane->pid = 'new-d033ebc3-39ee-4bb9-837b-7ccb3c8707ff';
  $pane->panel = 'my_leaderboard';
  $pane->type = 'views_panes';
  $pane->subtype = 'badges-my_badges';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '0',
    'override_title' => 1,
    'override_title_text' => 'My Badges',
    'override_title_heading' => 'h2',
    'more_link' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd033ebc3-39ee-4bb9-837b-7ccb3c8707ff';
  $display->content['new-d033ebc3-39ee-4bb9-837b-7ccb3c8707ff'] = $pane;
  $display->panels['my_leaderboard'][0] = 'new-d033ebc3-39ee-4bb9-837b-7ccb3c8707ff';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7053f751-cf5c-4053-a845-222943504d4c';
  $display->content['new-7053f751-cf5c-4053-a845-222943504d4c'] = $pane;
  $display->panels['my_leaderboard'][1] = 'new-7053f751-cf5c-4053-a845-222943504d4c';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8fb10998-a2a2-4ce3-8da6-468943816ec7';
  $display->content['new-8fb10998-a2a2-4ce3-8da6-468943816ec7'] = $pane;
  $display->panels['my_leaderboard'][2] = 'new-8fb10998-a2a2-4ce3-8da6-468943816ec7';
  $pane = new stdClass();
  $pane->pid = 'new-f7d63bbf-c88e-452f-bd04-585818556878';
  $pane->panel = 'my_leaderboard';
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
  $pane->uuid = 'f7d63bbf-c88e-452f-bd04-585818556878';
  $display->content['new-f7d63bbf-c88e-452f-bd04-585818556878'] = $pane;
  $display->panels['my_leaderboard'][3] = 'new-f7d63bbf-c88e-452f-bd04-585818556878';
  $pane = new stdClass();
  $pane->pid = 'new-8082173d-aeb5-495e-bd28-d3ba30ab3454';
  $pane->panel = 'my_leaderboard';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '8082173d-aeb5-495e-bd28-d3ba30ab3454';
  $display->content['new-8082173d-aeb5-495e-bd28-d3ba30ab3454'] = $pane;
  $display->panels['my_leaderboard'][4] = 'new-8082173d-aeb5-495e-bd28-d3ba30ab3454';
  $pane = new stdClass();
  $pane->pid = 'new-ac07613b-783b-446b-a4de-3bfffbb6aecb';
  $pane->panel = 'my_progress_last_login';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_user-last_login';
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
  $pane->uuid = 'ac07613b-783b-446b-a4de-3bfffbb6aecb';
  $display->content['new-ac07613b-783b-446b-a4de-3bfffbb6aecb'] = $pane;
  $display->panels['my_progress_last_login'][0] = 'new-ac07613b-783b-446b-a4de-3bfffbb6aecb';
  $pane = new stdClass();
  $pane->pid = 'new-dc11a641-f2cb-497c-8fb9-c461c51aa5ff';
  $pane->panel = 'my_progress_levels';
  $pane->type = 'views_panes';
  $pane->subtype = 'levels_quizz_progress-completed_count';
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
  $pane->uuid = 'dc11a641-f2cb-497c-8fb9-c461c51aa5ff';
  $display->content['new-dc11a641-f2cb-497c-8fb9-c461c51aa5ff'] = $pane;
  $display->panels['my_progress_levels'][0] = 'new-dc11a641-f2cb-497c-8fb9-c461c51aa5ff';
  $pane = new stdClass();
  $pane->pid = 'new-36c4ad4b-0419-46ee-8c0e-d3da09b7d92f';
  $pane->panel = 'my_progress_levels';
  $pane->type = 'views_panes';
  $pane->subtype = 'levels_quizz_progress-closest_completion';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '36c4ad4b-0419-46ee-8c0e-d3da09b7d92f';
  $display->content['new-36c4ad4b-0419-46ee-8c0e-d3da09b7d92f'] = $pane;
  $display->panels['my_progress_levels'][1] = 'new-36c4ad4b-0419-46ee-8c0e-d3da09b7d92f';
  $pane = new stdClass();
  $pane->pid = 'new-332d7bf1-6721-4b9d-a1af-8a0ae86b5c73';
  $pane->panel = 'my_progress_my_points';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_user-my_points';
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
  $pane->uuid = '332d7bf1-6721-4b9d-a1af-8a0ae86b5c73';
  $display->content['new-332d7bf1-6721-4b9d-a1af-8a0ae86b5c73'] = $pane;
  $display->panels['my_progress_my_points'][0] = 'new-332d7bf1-6721-4b9d-a1af-8a0ae86b5c73';
  $pane = new stdClass();
  $pane->pid = 'new-786e664b-e7d4-45fb-a887-a63b46ba0715';
  $pane->panel = 'my_progress_recently_completed_activites';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_user_activities-activities';
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
  $pane->uuid = '786e664b-e7d4-45fb-a887-a63b46ba0715';
  $display->content['new-786e664b-e7d4-45fb-a887-a63b46ba0715'] = $pane;
  $display->panels['my_progress_recently_completed_activites'][0] = 'new-786e664b-e7d4-45fb-a887-a63b46ba0715';
  $pane = new stdClass();
  $pane->pid = 'new-aff44bed-880b-4856-a7a8-46aba952b3cf';
  $pane->panel = 'my_progress_suggested_for_you';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_user_activities-suggested';
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
  $pane->uuid = 'aff44bed-880b-4856-a7a8-46aba952b3cf';
  $display->content['new-aff44bed-880b-4856-a7a8-46aba952b3cf'] = $pane;
  $display->panels['my_progress_suggested_for_you'][0] = 'new-aff44bed-880b-4856-a7a8-46aba952b3cf';
  $pane = new stdClass();
  $pane->pid = 'new-94e9be33-c3b3-4b66-a696-85b1751fd1d9';
  $pane->panel = 'user_information';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_user-user_information_name';
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
  $pane->uuid = '94e9be33-c3b3-4b66-a696-85b1751fd1d9';
  $display->content['new-94e9be33-c3b3-4b66-a696-85b1751fd1d9'] = $pane;
  $display->panels['user_information'][0] = 'new-94e9be33-c3b3-4b66-a696-85b1751fd1d9';
  $pane = new stdClass();
  $pane->pid = 'new-bb7d0694-67b3-40e2-b73a-1cbae0bd5da5';
  $pane->panel = 'user_information_left';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_user-user_information_left';
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
  $pane->uuid = 'bb7d0694-67b3-40e2-b73a-1cbae0bd5da5';
  $display->content['new-bb7d0694-67b3-40e2-b73a-1cbae0bd5da5'] = $pane;
  $display->panels['user_information_left'][0] = 'new-bb7d0694-67b3-40e2-b73a-1cbae0bd5da5';
  $pane = new stdClass();
  $pane->pid = 'new-9a81ad2b-b106-453e-a3fd-710e721fcbf7';
  $pane->panel = 'user_information_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_user-user_information_right';
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
  $pane->uuid = '9a81ad2b-b106-453e-a3fd-710e721fcbf7';
  $display->content['new-9a81ad2b-b106-453e-a3fd-710e721fcbf7'] = $pane;
  $display->panels['user_information_right'][0] = 'new-9a81ad2b-b106-453e-a3fd-710e721fcbf7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_4e3f1360-5f3c-4627-adf0-9cf8d7487da0'] = $handler;

  return $export;
}
