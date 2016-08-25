<?php
/**
 * @file
 * elx_footer.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function elx_footer_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'page_bottom';
  $mini->category = '';
  $mini->admin_title = 'Page bottom';
  $mini->admin_description = 'Used in page bottom block, so the copyright notice block can be exported with a feature, as part of this minipanel';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '53c32551-0204-4bf5-b6fc-242b4234621c';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'page_bottom';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dc34eed6-66aa-4b43-b644-84afcb83766f';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-3';
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
  $pane->uuid = 'dc34eed6-66aa-4b43-b644-84afcb83766f';
  $display->content['new-dc34eed6-66aa-4b43-b644-84afcb83766f'] = $pane;
  $display->panels['left'][0] = 'new-dc34eed6-66aa-4b43-b644-84afcb83766f';
  $pane = new stdClass();
  $pane->pid = 'new-15c12673-4fda-447c-8aa9-8493d1ea351a';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-page-bottom-privacy';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '15c12673-4fda-447c-8aa9-8493d1ea351a';
  $display->content['new-15c12673-4fda-447c-8aa9-8493d1ea351a'] = $pane;
  $display->panels['right'][0] = 'new-15c12673-4fda-447c-8aa9-8493d1ea351a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['page_bottom'] = $mini;

  return $export;
}
