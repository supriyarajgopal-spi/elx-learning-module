<?php

/**
 * Implements hook_views_data_alter().
 */
function views_filter_view_views_data_alter(&$data) {
  $data['views']['view']['filter'] = array(
    'title' => t('View'),
    'help' => t('Filter by another view on the site.'),
    'handler' => 'views_filter_view_handler_filter_view',
  );
}
