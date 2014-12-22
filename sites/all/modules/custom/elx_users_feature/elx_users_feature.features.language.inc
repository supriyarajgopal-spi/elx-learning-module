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
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => -10,
  );
  // Exported language: zh-hant.
  $languages['zh-hant'] = array(
    'language' => 'zh-hant',
    'name' => 'Chinese, Traditional',
    'native' => '繁體中文',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n>1)',
    'domain' => '',
    'prefix' => 'zh-hant',
    'weight' => -9,
  );
  return $languages;
}
