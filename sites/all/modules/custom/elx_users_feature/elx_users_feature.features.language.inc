<?php
/**
 * @file
 * elx_users_feature.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function elx_users_feature_locale_default_languages() {
  $languages = array();

  // Exported language: enau.
  $languages['enau'] = array(
    'language' => 'enau',
    'name' => 'English AU',
    'native' => 'English AU',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en-au',
    'weight' => -8,
  );
  // Exported language: ennz.
  $languages['ennz'] = array(
    'language' => 'ennz',
    'name' => 'English NZ',
    'native' => 'English NZ',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en-nz',
    'weight' => -7,
  );
  // Exported language: enuk.
  $languages['enuk'] = array(
    'language' => 'enuk',
    'name' => 'English UK',
    'native' => 'English UK',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en-uk',
    'weight' => -9,
  );
  // Exported language: enus.
  $languages['enus'] = array(
    'language' => 'enus',
    'name' => 'English US',
    'native' => 'English US',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en-us',
    'weight' => -10,
  );
  // Exported language: enza.
  $languages['enza'] = array(
    'language' => 'enza',
    'name' => 'English ZA',
    'native' => 'English ZA',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en-za',
    'weight' => -6,
  );
  return $languages;
}
