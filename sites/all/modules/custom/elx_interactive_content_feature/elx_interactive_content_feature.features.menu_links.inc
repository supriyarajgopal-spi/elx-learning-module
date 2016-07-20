<?php
/**
 * @file
 * elx_interactive_content_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function elx_interactive_content_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_h5p:admin/config/system/h5p
  $menu_links['management_h5p:admin/config/system/h5p'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/h5p',
    'router_path' => 'admin/config/system/h5p',
    'link_title' => 'H5P',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the location of h5p files.',
      ),
      'identifier' => 'management_h5p:admin/config/system/h5p',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('H5P');


  return $menu_links;
}
