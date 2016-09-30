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
      2 => array(),
    ),
    3 => array(
      2 => array(),
    ),
    4 => array(
      2 => array(
        13504 => '13504',
        12739 => '12739',
        12731 => '12731',
        1301 => '1301',
        1299 => '1299',
        1300 => '1300',
        250 => '250',
        252 => '252',
        579 => '579',
      ),
    ),
    9 => array(
      2 => array(
        14108 => '14108',
        10605 => '10605',
        13504 => '13504',
        12739 => '12739',
        12731 => '12731',
        1301 => '1301',
        1299 => '1299',
        1300 => '1300',
        250 => '250',
        252 => '252',
        579 => '579',
      ),
    ),
    8 => array(
      2 => array(
        14108 => '14108',
        10605 => '10605',
        13504 => '13504',
        12739 => '12739',
        12731 => '12731',
        1301 => '1301',
        1299 => '1299',
        1300 => '1300',
        250 => '250',
        252 => '252',
        579 => '579',
      ),
    ),
    5 => array(
      2 => array(
        14108 => '14108',
        10605 => '10605',
        13504 => '13504',
        12739 => '12739',
        12731 => '12731',
        1301 => '1301',
        1299 => '1299',
        1300 => '1300',
        250 => '250',
        252 => '252',
        579 => '579',
      ),
    ),
    7 => array(
      2 => array(
        14108 => '14108',
        10605 => '10605',
        13504 => '13504',
        12739 => '12739',
        12731 => '12731',
        1301 => '1301',
        1299 => '1299',
        1300 => '1300',
        250 => '250',
        252 => '252',
        579 => '579',
      ),
    ),
    6 => array(
      2 => array(
        14108 => '14108',
        10605 => '10605',
        13504 => '13504',
        12739 => '12739',
        12731 => '12731',
        1301 => '1301',
        1299 => '1299',
        1300 => '1300',
        250 => '250',
        252 => '252',
        579 => '579',
      ),
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
