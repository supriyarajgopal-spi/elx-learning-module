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
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__panel-home-page-admin';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'home page admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel-home-page-admin',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'administer nodes',
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
  $display->uuid = 'b6b338ee-ea19-44a9-90cd-9839e2649f0d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_page__panel-home-page-admin';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b0020201-52e5-46b7-adc4-649684df61bf';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_spotlight-panel_pane_admin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'homepage-spotlight',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b0020201-52e5-46b7-adc4-649684df61bf';
  $display->content['new-b0020201-52e5-46b7-adc4-649684df61bf'] = $pane;
  $display->panels['middle'][0] = 'new-b0020201-52e5-46b7-adc4-649684df61bf';
  $pane = new stdClass();
  $pane->pid = 'new-d7140404-db71-4806-85e0-e5a44e877932';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'explore_learning_levels-panel_pane_admin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'homepage-learning-levels',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd7140404-db71-4806-85e0-e5a44e877932';
  $display->content['new-d7140404-db71-4806-85e0-e5a44e877932'] = $pane;
  $display->panels['middle'][1] = 'new-d7140404-db71-4806-85e0-e5a44e877932';
  $pane = new stdClass();
  $pane->pid = 'new-9895f25c-6455-4df2-8ae5-a8be39abe172';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'explore_learning_levels-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'homepage-learning-levels-mobile',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9895f25c-6455-4df2-8ae5-a8be39abe172';
  $display->content['new-9895f25c-6455-4df2-8ae5-a8be39abe172'] = $pane;
  $display->panels['middle'][2] = 'new-9895f25c-6455-4df2-8ae5-a8be39abe172';
  $pane = new stdClass();
  $pane->pid = 'new-19304353-955f-45fb-abaa-d8a5a046436a';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_whatsnewtrending-panel_pane_admin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'homepage-news',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '19304353-955f-45fb-abaa-d8a5a046436a';
  $display->content['new-19304353-955f-45fb-abaa-d8a5a046436a'] = $pane;
  $display->panels['middle'][3] = 'new-19304353-955f-45fb-abaa-d8a5a046436a';
  $pane = new stdClass();
  $pane->pid = 'new-962ce0e9-46b3-4fec-9604-c257b2b6fd4b';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_whatsnewtrending-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'homepage-news-mobile',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '962ce0e9-46b3-4fec-9604-c257b2b6fd4b';
  $display->content['new-962ce0e9-46b3-4fec-9604-c257b2b6fd4b'] = $pane;
  $display->panels['middle'][4] = 'new-962ce0e9-46b3-4fec-9604-c257b2b6fd4b';
  $pane = new stdClass();
  $pane->pid = 'new-626c90e4-5869-4276-96c6-2e9b4642c2c3';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_browseproductlibrary-panel_pane_admin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'homepage-product-library',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '626c90e4-5869-4276-96c6-2e9b4642c2c3';
  $display->content['new-626c90e4-5869-4276-96c6-2e9b4642c2c3'] = $pane;
  $display->panels['middle'][5] = 'new-626c90e4-5869-4276-96c6-2e9b4642c2c3';
  $pane = new stdClass();
  $pane->pid = 'new-278124ee-3e41-4182-b5e1-0f3d64c7ba9d';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_browseproductlibrary-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'homepage-product-library-mobile',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '278124ee-3e41-4182-b5e1-0f3d64c7ba9d';
  $display->content['new-278124ee-3e41-4182-b5e1-0f3d64c7ba9d'] = $pane;
  $display->panels['middle'][6] = 'new-278124ee-3e41-4182-b5e1-0f3d64c7ba9d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__panel_context_daf28055-23ef-4b41-8b50-8f53216183c4';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'home page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
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
  $display->uuid = 'b6b338ee-ea19-44a9-90cd-9839e2649f0d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_page__panel_context_daf28055-23ef-4b41-8b50-8f53216183c4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-262b78fb-362b-4fcd-a73d-c72dd8cdc83a';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_spotlight-panel_pane_user';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'homepage-spotlight',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '262b78fb-362b-4fcd-a73d-c72dd8cdc83a';
  $display->content['new-262b78fb-362b-4fcd-a73d-c72dd8cdc83a'] = $pane;
  $display->panels['middle'][0] = 'new-262b78fb-362b-4fcd-a73d-c72dd8cdc83a';
  $pane = new stdClass();
  $pane->pid = 'new-0d03f7b2-7bfc-46bd-b4f8-50c2dfe4018c';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'explore_learning_levels-panel_pane_user';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'homepage-learning-levels',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0d03f7b2-7bfc-46bd-b4f8-50c2dfe4018c';
  $display->content['new-0d03f7b2-7bfc-46bd-b4f8-50c2dfe4018c'] = $pane;
  $display->panels['middle'][1] = 'new-0d03f7b2-7bfc-46bd-b4f8-50c2dfe4018c';
  $pane = new stdClass();
  $pane->pid = 'new-8e5cc8ae-07c0-4f3f-aa0b-b182209f407a';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'explore_learning_levels-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'homepage-learning-levels-mobile',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8e5cc8ae-07c0-4f3f-aa0b-b182209f407a';
  $display->content['new-8e5cc8ae-07c0-4f3f-aa0b-b182209f407a'] = $pane;
  $display->panels['middle'][2] = 'new-8e5cc8ae-07c0-4f3f-aa0b-b182209f407a';
  $pane = new stdClass();
  $pane->pid = 'new-c4b53ca2-7810-43e5-a193-5bac7da8f97b';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_whatsnewtrending-panel_pane_user';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'homepage-news',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c4b53ca2-7810-43e5-a193-5bac7da8f97b';
  $display->content['new-c4b53ca2-7810-43e5-a193-5bac7da8f97b'] = $pane;
  $display->panels['middle'][3] = 'new-c4b53ca2-7810-43e5-a193-5bac7da8f97b';
  $pane = new stdClass();
  $pane->pid = 'new-d33abd0c-85f8-40c8-9e20-74f99f626716';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_whatsnewtrending-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'homepage-news-mobile',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'd33abd0c-85f8-40c8-9e20-74f99f626716';
  $display->content['new-d33abd0c-85f8-40c8-9e20-74f99f626716'] = $pane;
  $display->panels['middle'][4] = 'new-d33abd0c-85f8-40c8-9e20-74f99f626716';
  $pane = new stdClass();
  $pane->pid = 'new-36d23b6c-a0f1-4963-9b75-ba5538e6b2cf';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_browseproductlibrary-panel_pane_user';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'homepage-product-library',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '36d23b6c-a0f1-4963-9b75-ba5538e6b2cf';
  $display->content['new-36d23b6c-a0f1-4963-9b75-ba5538e6b2cf'] = $pane;
  $display->panels['middle'][5] = 'new-36d23b6c-a0f1-4963-9b75-ba5538e6b2cf';
  $pane = new stdClass();
  $pane->pid = 'new-1e83b0d3-5675-4bfc-bde0-ac6cde243703';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_browseproductlibrary-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'homepage-product-library-mobile',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '1e83b0d3-5675-4bfc-bde0-ac6cde243703';
  $display->content['new-1e83b0d3-5675-4bfc-bde0-ac6cde243703'] = $pane;
  $display->panels['middle'][6] = 'new-1e83b0d3-5675-4bfc-bde0-ac6cde243703';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}
