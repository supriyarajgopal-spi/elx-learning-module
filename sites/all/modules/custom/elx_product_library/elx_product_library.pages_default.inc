<?php
/**
 * @file
 * elx_product_library.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function elx_product_library_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'product_library';
  $page->task = 'page';
  $page->admin_title = 'Product Library';
  $page->admin_description = '';
  $page->path = 'product-library';
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
  $handler->name = 'page_product_library__product-library-admin';
  $handler->task = 'page';
  $handler->subtask = 'product_library';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Product Library Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'product-library-admin',
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Product Library';
  $display->uuid = 'd5c37dea-4fc7-4831-b26c-29b3b0a2100d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_product_library__product-library-admin';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f7578abe-0485-4356-b4c5-d381e6b4f297';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'product_library-product_library_admin';
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
  $pane->uuid = 'f7578abe-0485-4356-b4c5-d381e6b4f297';
  $display->content['new-f7578abe-0485-4356-b4c5-d381e6b4f297'] = $pane;
  $display->panels['center'][0] = 'new-f7578abe-0485-4356-b4c5-d381e6b4f297';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_product_library__panel';
  $handler->task = 'page';
  $handler->subtask = 'product_library';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Product Library',
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Product Library';
  $display->uuid = 'd5c37dea-4fc7-4831-b26c-29b3b0a2100d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_product_library__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-16ac355d-eb7d-4597-84a0-5fa651fab047';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'product_library-product_library';
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
  $pane->uuid = '16ac355d-eb7d-4597-84a0-5fa651fab047';
  $display->content['new-16ac355d-eb7d-4597-84a0-5fa651fab047'] = $pane;
  $display->panels['center'][0] = 'new-16ac355d-eb7d-4597-84a0-5fa651fab047';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['product_library'] = $page;

  return $pages;

}
