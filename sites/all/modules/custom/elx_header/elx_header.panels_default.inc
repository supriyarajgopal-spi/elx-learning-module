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
  $pane->pid = 'new-3bf41cf1-c754-4295-b835-03c162a89ad2';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'levels_quizz_progress-completed_count';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'My Progress',
    'override_title_heading' => 'div',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3bf41cf1-c754-4295-b835-03c162a89ad2';
  $display->content['new-3bf41cf1-c754-4295-b835-03c162a89ad2'] = $pane;
  $display->panels['middle'][1] = 'new-3bf41cf1-c754-4295-b835-03c162a89ad2';
  $pane = new stdClass();
  $pane->pid = 'new-7502f6dc-1c31-4aa9-beaf-9fc2c9b83495';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'levels_quizz_progress-closest_completion';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Closest Level to Completion:',
    'override_title_heading' => 'div',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7502f6dc-1c31-4aa9-beaf-9fc2c9b83495';
  $display->content['new-7502f6dc-1c31-4aa9-beaf-9fc2c9b83495'] = $pane;
  $display->panels['middle'][2] = 'new-7502f6dc-1c31-4aa9-beaf-9fc2c9b83495';
  $pane = new stdClass();
  $pane->pid = 'new-48f49543-463a-4f91-b4e7-d4eab2eaf7af';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_user_activities-suggested';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Suggested for me:',
    'override_title_heading' => 'div',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '48f49543-463a-4f91-b4e7-d4eab2eaf7af';
  $display->content['new-48f49543-463a-4f91-b4e7-d4eab2eaf7af'] = $pane;
  $display->panels['middle'][3] = 'new-48f49543-463a-4f91-b4e7-d4eab2eaf7af';
  $pane = new stdClass();
  $pane->pid = 'new-74b50f90-14f9-40fe-a653-0a51e8ed26a3';
  $pane->panel = 'middle';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '74b50f90-14f9-40fe-a653-0a51e8ed26a3';
  $display->content['new-74b50f90-14f9-40fe-a653-0a51e8ed26a3'] = $pane;
  $display->panels['middle'][4] = 'new-74b50f90-14f9-40fe-a653-0a51e8ed26a3';
  $pane = new stdClass();
  $pane->pid = 'new-6bd0c627-a5c3-48e7-a131-35260e1ab82a';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'badges-my_badges';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '4',
    'override_title' => 1,
    'override_title_text' => 'Recent Badges:',
    'override_title_heading' => 'h2',
    'more_link' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '6bd0c627-a5c3-48e7-a131-35260e1ab82a';
  $display->content['new-6bd0c627-a5c3-48e7-a131-35260e1ab82a'] = $pane;
  $display->panels['middle'][5] = 'new-6bd0c627-a5c3-48e7-a131-35260e1ab82a';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '1c929848-8651-48f3-9522-70f6d86fa31b';
  $display->content['new-1c929848-8651-48f3-9522-70f6d86fa31b'] = $pane;
  $display->panels['middle'][6] = 'new-1c929848-8651-48f3-9522-70f6d86fa31b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['header_user_menu'] = $mini;

  return $export;
}
