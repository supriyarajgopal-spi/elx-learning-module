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
    'name' => 'Holiday Beauty Advisor',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0b514722-fd49-40cb-a5f3-05d40c036d12',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'learning_category',
  );
  $terms[] = array(
    'name' => 'Holiday 2016 - Counter Manager',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1d9bb770-145a-458d-8bf3-d889b80590fe',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'learning_category',
  );
  $terms[] = array(
    'name' => 'Beautiful Start',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'bb78eea6-7a77-46f2-b5c6-be7ceea6ac47',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'learning_category',
  );
  return $terms;
}