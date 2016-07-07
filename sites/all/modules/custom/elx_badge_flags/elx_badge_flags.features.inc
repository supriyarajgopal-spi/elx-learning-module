<?php
/**
 * @file
 * elx_badge_flags.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function elx_badge_flags_flag_default_flags() {
  $flags = array();
  // Exported flag: "Beauty Queen Badge".
  $flags['beauty_queen_badge'] = array(
    'entity_type' => 'user',
    'title' => 'Beauty Queen Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -19,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Early Bird Badge".
  $flags['early_bird_badge'] = array(
    'entity_type' => 'user',
    'title' => 'Early Bird Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -8,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Fast Learner Badge".
  $flags['fast_learner_badge'] = array(
    'entity_type' => 'user',
    'title' => 'Fast Learner Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -10,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "First 10000 Points Badge".
  $flags['first_10000_points_badge'] = array(
    'entity_type' => 'user',
    'title' => 'First 10000 Points Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -22,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "First 1,000 Points Badge".
  $flags['first_1_000_points_badge'] = array(
    'entity_type' => 'user',
    'title' => 'First 1,000 Points Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -25,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "First 5,000 Points Badge".
  $flags['first_5_000_points_badge'] = array(
    'entity_type' => 'user',
    'title' => 'First 5,000 Points Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -26,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "High Five Badge".
  $flags['high_five_badge'] = array(
    'entity_type' => 'user',
    'title' => 'High Five Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -31,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Little Brown Bottle Badge".
  $flags['little_brown_bottle_badge'] = array(
    'entity_type' => 'user',
    'title' => 'Little Brown Bottle Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -20,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "New Dimension Badge".
  $flags['new_dimension_badge'] = array(
    'entity_type' => 'user',
    'title' => 'New Dimension Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -17,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "On Your Way Badge".
  $flags['on_your_way_badge'] = array(
    'entity_type' => 'user',
    'title' => 'On Your Way Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -29,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "100% Club Badge".
  $flags['one_hundred_percent_club_badge'] = array(
    'entity_type' => 'user',
    'title' => '100% Club Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -28,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Perfect 10 Badge".
  $flags['perfect_10_badge'] = array(
    'entity_type' => 'user',
    'title' => 'Perfect 10 Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -30,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Product Pro Badge".
  $flags['product_pro_badge'] = array(
    'entity_type' => 'user',
    'title' => 'Product Pro Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -23,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Rare Beauty Badge".
  $flags['rare_beauty_badge'] = array(
    'entity_type' => 'user',
    'title' => 'Rare Beauty Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -18,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Service Star Badge".
  $flags['service_star_badge'] = array(
    'entity_type' => 'user',
    'title' => 'Service Star Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -27,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Sleeping Beauty Badge".
  $flags['sleeping_beauty_badge'] = array(
    'entity_type' => 'user',
    'title' => 'Sleeping Beauty Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -16,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "3 Minute Beauty Badge".
  $flags['three_minute_beauty_badge'] = array(
    'entity_type' => 'user',
    'title' => '3 Minute Beauty Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -11,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "We Heard You Badge".
  $flags['we_heard_you_badge'] = array(
    'entity_type' => 'user',
    'title' => 'We Heard You Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -15,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "We Heart You Badge".
  $flags['we_heart_you_badge'] = array(
    'entity_type' => 'user',
    'title' => 'We Heart You Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -24,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Welcome Badge".
  $flags['welcome_badge'] = array(
    'entity_type' => 'user',
    'title' => 'Welcome Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -21,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Well Read 100 Badge".
  $flags['well_read_100_badge'] = array(
    'entity_type' => 'user',
    'title' => 'Well Read 100 Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -9,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Well Read 25 Badge".
  $flags['well_read_25_badge'] = array(
    'entity_type' => 'user',
    'title' => 'Well Read 25 Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -13,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Well Read 50 Badge".
  $flags['well_read_50_badge'] = array(
    'entity_type' => 'user',
    'title' => 'Well Read 50 Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -14,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Well Read 75 Badge".
  $flags['well_read_75_badge'] = array(
    'entity_type' => 'user',
    'title' => 'Well Read 75 Badge',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Give this Badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -12,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'elx_badge_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}