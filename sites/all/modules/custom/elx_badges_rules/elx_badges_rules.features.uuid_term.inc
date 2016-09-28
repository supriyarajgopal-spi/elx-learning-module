<?php
/**
 * @file
 * elx_badges_rules.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function elx_badges_rules_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Learning Points',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ed909de6-0281-4642-bd0d-54586fd022be',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'userpoints',
  );
  return $terms;
}
