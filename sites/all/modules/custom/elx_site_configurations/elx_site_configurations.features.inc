<?php
/**
 * @file
 * elx_site_configurations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elx_site_configurations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function elx_site_configurations_image_default_styles() {
  $styles = array();

  // Exported image style: product_detail.
  $styles['product_detail'] = array(
    'name' => 'product_detail',
    'label' => 'Product detail',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'imageinfo_cache_effect_router',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'retina_images_image_resize_form',
        'summary theme' => 'retina_images_image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 290,
          'retinafy' => 0,
          '#imageinfo_cache_effect_callback' => 'retina_images_image_scale_and_crop_effect',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_detail_retina.
  $styles['product_detail_retina'] = array(
    'name' => 'product_detail_retina',
    'label' => 'Product detail (retina)',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'imageinfo_cache_effect_router',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'retina_images_image_resize_form',
        'summary theme' => 'retina_images_image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 290,
          'retinafy' => 1,
          '#imageinfo_cache_effect_callback' => 'retina_images_image_scale_and_crop_effect',
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function elx_site_configurations_node_info() {
  $items = array(
    'content_object' => array(
      'name' => t('Content Object'),
      'base' => 'node_content',
      'description' => t('Wrapper for learning objects.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'drag_match' => array(
      'name' => t('Drag Match'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'drag_priorities' => array(
      'name' => t('Drag Priorities'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'drag_select' => array(
      'name' => t('Drag Select'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'flash_cards' => array(
      'name' => t('Flash Cards'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hot_spots' => array(
      'name' => t('Hot Spots'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'list' => array(
      'name' => t('List'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Subtitle'),
      'help' => '',
    ),
    'matching_game' => array(
      'name' => t('Matching Game'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Subtitle'),
      'help' => '',
    ),
    'object_manifest' => array(
      'name' => t('Object Manifest'),
      'base' => 'node_content',
      'description' => t('These nodes hold the manifest for the NewPlayerV2'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_detail' => array(
      'name' => t('Product Detail'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'question_and_answer' => array(
      'name' => t('Question and Answer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Subtitle'),
      'help' => '',
    ),
    'reveal' => array(
      'name' => t('Reveal'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Subtitle'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function elx_site_configurations_paragraphs_info() {
  $items = array(
    'answers' => array(
      'name' => 'Answers',
      'bundle' => 'answers',
      'locked' => '1',
    ),
    'list_item' => array(
      'name' => 'List item collection',
      'bundle' => 'list_item',
      'locked' => '1',
    ),
    'match_game_collection' => array(
      'name' => 'Match game collection',
      'bundle' => 'match_game_collection',
      'locked' => '1',
    ),
    'multiple_choice_collection' => array(
      'name' => 'Multiple choice collection',
      'bundle' => 'multiple_choice_collection',
      'locked' => '1',
    ),
    'questions' => array(
      'name' => 'Questions',
      'bundle' => 'questions',
      'locked' => '1',
    ),
    'reveal_collection' => array(
      'name' => 'Reveal collection',
      'bundle' => 'reveal_collection',
      'locked' => '1',
    ),
  );
  return $items;
}
