<?php
/**
 * @file
 * elx_users_feature.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function elx_users_feature_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-email-required';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Email';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['elx_users-email-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-email-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Email';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-email-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-czech';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Czech',
    'replace' => 'cs',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Czech';
  $export['elx_users-language-czech'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-danish';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Danish',
    'replace' => 'da',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Danish';
  $export['elx_users-language-danish'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-dutch';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Dutch',
    'replace' => 'nl',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Dutch';
  $export['elx_users-language-dutch'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-en_ca';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'English (Canada)',
    'replace' => 'enca',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 9;
  $feeds_tamper->description = 'English (Canada)';
  $export['elx_users-language-en_ca'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-english';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'English',
    'replace' => 'en',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'English';
  $export['elx_users-language-english'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-english_au';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Chinese (Simplified)',
    'replace' => 'zhhans',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Chinese (Simplified)';
  $export['elx_users-language-english_au'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-english_nz';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Chinese (Traditional)',
    'replace' => 'zhhant',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Chinese (Traditional)';
  $export['elx_users-language-english_nz'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-english_uk';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Bulgarian',
    'replace' => 'bg',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Bulgarian';
  $export['elx_users-language-english_uk'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-english_za';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Croatian',
    'replace' => 'hr',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Croatian';
  $export['elx_users-language-english_za'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-estonian';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Estonian',
    'replace' => 'et',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 10;
  $feeds_tamper->description = 'Estonian';
  $export['elx_users-language-estonian'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-filipino';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Filipino',
    'replace' => 'fil',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 11;
  $feeds_tamper->description = 'Filipino';
  $export['elx_users-language-filipino'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-find_replace';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Arabic',
    'replace' => 'ar',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Arabic';
  $export['elx_users-language-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-finnish';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Finnish',
    'replace' => 'fi',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 12;
  $feeds_tamper->description = 'Finnish';
  $export['elx_users-language-finnish'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-fr_ca';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'French (Canada)',
    'replace' => 'frca',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 14;
  $feeds_tamper->description = 'French (Canada)';
  $export['elx_users-language-fr_ca'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-french';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'French',
    'replace' => 'fr',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 13;
  $feeds_tamper->description = 'French';
  $export['elx_users-language-french'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-greek';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Greek',
    'replace' => 'el',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 15;
  $feeds_tamper->description = 'Greek';
  $export['elx_users-language-greek'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-hebrew';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Hebrew',
    'replace' => 'he',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 16;
  $feeds_tamper->description = 'Hebrew';
  $export['elx_users-language-hebrew'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-hungarian';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Hungarian',
    'replace' => 'hu',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 17;
  $feeds_tamper->description = 'Hungarian';
  $export['elx_users-language-hungarian'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-icelandic';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Icelandic',
    'replace' => 'is',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 18;
  $feeds_tamper->description = 'Icelandic';
  $export['elx_users-language-icelandic'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-indonesian';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Indonesian',
    'replace' => 'id',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 19;
  $feeds_tamper->description = 'Indonesian';
  $export['elx_users-language-indonesian'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-italian';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Italian',
    'replace' => 'it',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 20;
  $feeds_tamper->description = 'Italian';
  $export['elx_users-language-italian'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-japanese';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Japanese',
    'replace' => 'ja',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 21;
  $feeds_tamper->description = 'Japanese';
  $export['elx_users-language-japanese'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-korean';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Korean',
    'replace' => 'ko',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 22;
  $feeds_tamper->description = 'Korean';
  $export['elx_users-language-korean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-latvian';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Latvian',
    'replace' => 'lv',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 23;
  $feeds_tamper->description = 'Latvian';
  $export['elx_users-language-latvian'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-lithuanian';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Lithuanian',
    'replace' => 'lt',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 24;
  $feeds_tamper->description = 'Lithuanian';
  $export['elx_users-language-lithuanian'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-norwegian';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Norwegian Bokmål',
    'replace' => 'nb',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 25;
  $feeds_tamper->description = 'Norwegian Bokmål';
  $export['elx_users-language-norwegian'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-polish';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Polish',
    'replace' => 'pl',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 26;
  $feeds_tamper->description = 'Polish';
  $export['elx_users-language-polish'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-portuguese';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Portuguese',
    'replace' => 'pt',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 27;
  $feeds_tamper->description = 'Portuguese';
  $export['elx_users-language-portuguese'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-romanian';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Romanian',
    'replace' => 'ro',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 28;
  $feeds_tamper->description = 'Romanian';
  $export['elx_users-language-romanian'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-russian';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Russian',
    'replace' => 'ru',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 29;
  $feeds_tamper->description = 'Russian';
  $export['elx_users-language-russian'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-spanish';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Spanish',
    'replace' => 'es',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 30;
  $feeds_tamper->description = 'Spanish';
  $export['elx_users-language-spanish'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-spanish_sp';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Spanish (Spain)',
    'replace' => 'essp',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 31;
  $feeds_tamper->description = 'Spanish (Spain)';
  $export['elx_users-language-spanish_sp'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-swedish';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Swedish',
    'replace' => 'sv',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 32;
  $feeds_tamper->description = 'Swedish';
  $export['elx_users-language-swedish'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-thai';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Thai',
    'replace' => 'th',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 33;
  $feeds_tamper->description = 'Thai';
  $export['elx_users-language-thai'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-turkish';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Turkish',
    'replace' => 'tr',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 34;
  $feeds_tamper->description = 'Turkish';
  $export['elx_users-language-turkish'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-adriatic';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Adriatic',
    'replace' => 'AD',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 29;
  $feeds_tamper->description = 'AD';
  $export['elx_users-market_name-adriatic'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-australia';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Australia',
    'replace' => 'AU',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'AU';
  $export['elx_users-market_name-australia'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-austria';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Austria',
    'replace' => 'AT',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 16;
  $feeds_tamper->description = 'AT';
  $export['elx_users-market_name-austria'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-benelux';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Benelux',
    'replace' => 'BE',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 17;
  $feeds_tamper->description = 'BE';
  $export['elx_users-market_name-benelux'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-bulgaria';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Bulgaria',
    'replace' => 'BG',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 37;
  $feeds_tamper->description = 'BG';
  $export['elx_users-market_name-bulgaria'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-canada';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Canada',
    'replace' => 'CA',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'CA';
  $export['elx_users-market_name-canada'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-ceca';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Colombia - Ecuador - Central America',
    'replace' => 'CECA',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 45;
  $feeds_tamper->description = 'CECA';
  $export['elx_users-market_name-ceca'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-china';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'China',
    'replace' => 'CN',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'CN';
  $export['elx_users-market_name-china'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-cyprus';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Cyprus',
    'replace' => 'CY',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 39;
  $feeds_tamper->description = 'CY';
  $export['elx_users-market_name-cyprus'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-czech';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Czech Republic',
    'replace' => 'CS',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 19;
  $feeds_tamper->description = 'CS';
  $export['elx_users-market_name-czech'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-fashion';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Fashion Group',
    'replace' => 'FG',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 59;
  $feeds_tamper->description = 'Fashion Group';
  $export['elx_users-market_name-fashion'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-find_replace';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Malaysia',
    'replace' => 'MY',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'MY';
  $export['elx_users-market_name-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-finland';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Finland',
    'replace' => 'FI',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 28;
  $feeds_tamper->description = 'FI';
  $export['elx_users-market_name-finland'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-france';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'France',
    'replace' => 'FR',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 20;
  $feeds_tamper->description = 'FR';
  $export['elx_users-market_name-france'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-germany';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Germany',
    'replace' => 'GM',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 21;
  $feeds_tamper->description = 'GM';
  $export['elx_users-market_name-germany'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-greece';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Greece',
    'replace' => 'GR',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 22;
  $feeds_tamper->description = 'GR';
  $export['elx_users-market_name-greece'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-hongkong';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Hong Kong',
    'replace' => 'HK',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'HK';
  $export['elx_users-market_name-hongkong'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-hungary';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Hungary',
    'replace' => 'HU',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 23;
  $feeds_tamper->description = 'HU';
  $export['elx_users-market_name-hungary'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-india';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'India',
    'replace' => 'IN',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 25;
  $feeds_tamper->description = 'IN';
  $export['elx_users-market_name-india'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-indonesia';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Indonesia',
    'replace' => 'ID',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 14;
  $feeds_tamper->description = 'ID';
  $export['elx_users-market_name-indonesia'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-israel';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Israel',
    'replace' => 'IL',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 24;
  $feeds_tamper->description = 'IL';
  $export['elx_users-market_name-israel'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-italy';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Italy',
    'replace' => 'IT',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 26;
  $feeds_tamper->description = 'IT';
  $export['elx_users-market_name-italy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-japan';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Japan',
    'replace' => 'JP',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'JP';
  $export['elx_users-market_name-japan'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-korea';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Korea',
    'replace' => 'KR',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'KR';
  $export['elx_users-market_name-korea'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-mexico';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Mexico',
    'replace' => 'MX',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 43;
  $feeds_tamper->description = 'MX';
  $export['elx_users-market_name-mexico'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-middle_east';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Middle East',
    'replace' => 'AE',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 40;
  $feeds_tamper->description = 'AE';
  $export['elx_users-market_name-middle_east'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-netherlands';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Netherlands',
    'replace' => 'NL',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 18;
  $feeds_tamper->description = 'NL';
  $export['elx_users-market_name-netherlands'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-newzealand';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'New Zealand',
    'replace' => 'NZ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 9;
  $feeds_tamper->description = 'NZ';
  $export['elx_users-market_name-newzealand'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-nordic';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Nordic',
    'replace' => 'DK',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 27;
  $feeds_tamper->description = 'DK';
  $export['elx_users-market_name-nordic'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-philippines';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Philippines',
    'replace' => 'PP',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 15;
  $feeds_tamper->description = 'PP';
  $export['elx_users-market_name-philippines'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-poland';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Poland/Lituania/Estonia/Latvia',
    'replace' => 'PL',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 30;
  $feeds_tamper->description = 'PL';
  $export['elx_users-market_name-poland'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-portugal';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Portugal',
    'replace' => 'PT',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 41;
  $feeds_tamper->description = 'PT';
  $export['elx_users-market_name-portugal'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-puerto';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Puerto Rico',
    'replace' => 'PR',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'PR';
  $export['elx_users-market_name-puerto'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-romania';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Romania',
    'replace' => 'RM',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 38;
  $feeds_tamper->description = 'RM';
  $export['elx_users-market_name-romania'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-russia';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Russia',
    'replace' => 'RU',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 31;
  $feeds_tamper->description = 'RU';
  $export['elx_users-market_name-russia'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-singapore';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Singapore',
    'replace' => 'SG',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 10;
  $feeds_tamper->description = 'SG';
  $export['elx_users-market_name-singapore'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-southafrica';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'South Africa',
    'replace' => 'ZA',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 32;
  $feeds_tamper->description = 'ZA';
  $export['elx_users-market_name-southafrica'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-southern_cone';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Southern Cone - Chile - Peru - Argentina',
    'replace' => 'SC',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 42;
  $feeds_tamper->description = 'SC';
  $export['elx_users-market_name-southern_cone'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-spain';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Spain',
    'replace' => 'SP',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 33;
  $feeds_tamper->description = 'SP';
  $export['elx_users-market_name-spain'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-swtizerland';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Switzerland',
    'replace' => 'CH',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 34;
  $feeds_tamper->description = 'CH';
  $export['elx_users-market_name-swtizerland'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-taiwan';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Taiwan',
    'replace' => 'TW',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 11;
  $feeds_tamper->description = 'TW';
  $export['elx_users-market_name-taiwan'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-thailand';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Thailand',
    'replace' => 'TH',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 12;
  $feeds_tamper->description = 'TH';
  $export['elx_users-market_name-thailand'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-tramcc';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'TR Americas, Caribbean & Cancun',
    'replace' => 'TRAM-CC',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 47;
  $feeds_tamper->description = 'TRAM-CC';
  $export['elx_users-market_name-tramcc'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-tramna';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'TR Americas, North America',
    'replace' => 'TRAM-NA',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 48;
  $feeds_tamper->description = 'TRAM-NA';
  $export['elx_users-market_name-tramna'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-tramscm';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'TR Americas, South, Central America & Mexico',
    'replace' => 'TRAM-SCM',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 46;
  $feeds_tamper->description = 'TRAM-SCM';
  $export['elx_users-market_name-tramscm'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-trcn';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Travel Retail China',
    'replace' => 'TRAPAC-CN',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 50;
  $feeds_tamper->description = 'TRAPAC-CN';
  $export['elx_users-market_name-trcn'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-trema';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Travel Retail Europe - Middle East - Africa',
    'replace' => 'TREMEA',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 58;
  $feeds_tamper->description = 'TREMEA';
  $export['elx_users-market_name-trema'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-trhk';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'TR Hong Kong, Taiwan, Macau',
    'replace' => 'TRAPAC-HK',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 49;
  $feeds_tamper->description = 'TRAPAC-HK';
  $export['elx_users-market_name-trhk'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-trjp';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Travel Retail Japan',
    'replace' => 'TRAPAC-JP',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 54;
  $feeds_tamper->description = 'TRAPAC-JP';
  $export['elx_users-market_name-trjp'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-trkr';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Travel Retail Korea',
    'replace' => 'TRAPAC-KR',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 56;
  $feeds_tamper->description = 'TRAPAC-KR';
  $export['elx_users-market_name-trkr'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-trmp';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Travel Retail Middle Pacific',
    'replace' => 'TRAPAC-MP',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 55;
  $feeds_tamper->description = 'TRAPAC-MP';
  $export['elx_users-market_name-trmp'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-trmy';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'TR Malaysia',
    'replace' => 'TRAPAC-MY',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 53;
  $feeds_tamper->description = 'TRAPAC-MY';
  $export['elx_users-market_name-trmy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-trsea';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Travel Retail Oceania',
    'replace' => 'TRAPAC-SEA',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 57;
  $feeds_tamper->description = 'TRAPAC-SEA';
  $export['elx_users-market_name-trsea'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-trsg';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'TR Singapore',
    'replace' => 'TRAPAC-SG',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 51;
  $feeds_tamper->description = 'TRAPAC-SG';
  $export['elx_users-market_name-trsg'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-trth';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'TR Thailand',
    'replace' => 'TRAPAC-TH',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 52;
  $feeds_tamper->description = 'TRAPAC-TH';
  $export['elx_users-market_name-trth'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-turkey';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Turkey',
    'replace' => 'TR',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 36;
  $feeds_tamper->description = 'TR';
  $export['elx_users-market_name-turkey'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-uk';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'United Kingdom',
    'replace' => 'UK',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 35;
  $feeds_tamper->description = 'UK';
  $export['elx_users-market_name-uk'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-us';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'United States',
    'replace' => 'US',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'US';
  $export['elx_users-market_name-us'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-venezuela';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Venezuela',
    'replace' => 'VE',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 44;
  $feeds_tamper->description = 'VE';
  $export['elx_users-market_name-venezuela'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-vietnam';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Vietnam',
    'replace' => 'VN',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 13;
  $feeds_tamper->description = 'VN';
  $export['elx_users-market_name-vietnam'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-status-find_replace';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Status';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Inactive',
    'replace' => '0',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace Inactive = 0';
  $export['elx_users-status-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-status-find_replace_active';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Status';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Active',
    'replace' => '1',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace Active = 1';
  $export['elx_users-status-find_replace_active'] = $feeds_tamper;

  return $export;
}
