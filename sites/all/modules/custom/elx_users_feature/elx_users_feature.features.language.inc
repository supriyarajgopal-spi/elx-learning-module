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

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 0,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => -8,
  );
  // Exported language: en-UK.
  $languages['en-UK'] = array(
    'language' => 'en-UK',
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
  // Exported language: en-US.
  $languages['en-US'] = array(
    'language' => 'en-US',
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
  return $languages;
}
