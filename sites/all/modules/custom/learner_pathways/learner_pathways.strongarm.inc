<?php
/**
 * @file
 * learner_pathways.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function learner_pathways_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tac_lite_categories';
  $strongarm->value = array(
    2 => '2',
  );
  $export['tac_lite_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tac_lite_config_scheme_1';
  $strongarm->value = array(
    'name' => 'Learning Levels',
    'perms' => array(
      'grant_view' => 'grant_view',
    ),
    'unpublished' => 0,
    'term_visibility' => 0,
  );
  $export['tac_lite_config_scheme_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tac_lite_grants_scheme_1';
  $strongarm->value = array(
    1 => array(
      2 => array(
        0 => '0',
      ),
    ),
    2 => array(
      2 => array(
        14093 => '14093',
      ),
    ),
    3 => array(
      2 => array(),
    ),
    4 => array(
      2 => array(
        252 => '252',
        1299 => '1299',
        1300 => '1300',
        13504 => '13504',
        579 => '579',
        10605 => '10605',
        1301 => '1301',
        12731 => '12731',
        250 => '250',
        12739 => '12739',
      ),
    ),
    9 => array(
      2 => array(),
    ),
    8 => array(
      2 => array(),
    ),
    5 => array(
      2 => array(),
    ),
    7 => array(
      2 => array(),
    ),
    6 => array(
      2 => array(),
    ),
  );
  $export['tac_lite_grants_scheme_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tac_lite_schemes';
  $strongarm->value = '1';
  $export['tac_lite_schemes'] = $strongarm;

  return $export;
}
