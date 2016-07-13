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
  $feeds_tamper->id = 'elx_users-account_field_executive-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Account/Field Executive';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-account_field_executive-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-account_field_executive-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Account/Field Executive';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-account_field_executive-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-account_name-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Account Name';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-account_name-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-account_name-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Account Name';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-account_name-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-city-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'City';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-city-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-city-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'City';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-city-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-counter_manager-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Counter Manager';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-counter_manager-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-counter_manager-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Counter Manager';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-counter_manager-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-country-convert_case';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Country';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '0',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Convert case';
  $export['elx_users-country-convert_case'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-country-find_replace_regex';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Country';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/^(?!(AC|AE|AF|AG|AI|AL|AM|AN|AO|AQ|AR|AS|AT|AU|AW|AX|AZ|BA|BB|BD|BE|BF|BG|BH|BI|BJ|BL|BM|BN|BO|BQ|BR|BS|BT|BV|BW|BY|BZ|CA|CC|CD|CF|CG|CH|CI|CK|CL|CM|CN|CO|CP|CR|CU|CV|CW|CX|CY|CZ|DE|DG|DJ|DK|DM|DO|DZ|EA|EC|EE|EG|EH|ER|ES|ET|FI|FJ|FK|FM|FO|FR|GA|GB|GD|GE|GF|GG|GH|GI|GL|GM|GN|GP|GQ|GR|GS|GT|GU|GW|GY|HK|HM|HN|HR|HT|HU|IC|ID|IE|IL|IM|IN|IO|IQ|IR|IS|IT|JE|JM|JO|JP|KE|KG|KH|KI|KM|KN|KP|KR|KW|KY|KZ|LA|LB|LC|LI|LK|LR|LS|LT|LU|LV|LY|MA|MC|MD|ME|MF|MG|MH|MK|ML|MM|MN|MO|MP|MQ|MR|MS|MT|MU|MV|MW|MX|MY|MZ|NA|NC|NE|NF|NG|NI|NL|NO|NP|NR|NU|NZ|OM|PA|PE|PF|PG|PH|PK|PL|PM|PN|PR|PS|PT|PW|PY|QA|QO|RE|RO|RS|RU|RW|SA|SB|SC|SD|SE|SG|SH|SI|SJ|SK|SL|SM|SN|SO|SR|SS|ST|SV|SX|SY|SZ|TA|TC|TD|TF|TG|TH|TJ|TK|TL|TM|TN|TO|TR|TT|TV|TW|TZ|UA|UG|UM|US|UY|UZ|VA|VC|VE|VG|VI|VN|VU|WF|WS|XK|YE|YT|ZA|ZM|ZW)$)/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['elx_users-country-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-country-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Country';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-country-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-country-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Country';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-country-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-door-array_filter';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Door';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Filter empty items';
  $export['elx_users-door-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-door-explode';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Door';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Explode';
  $export['elx_users-door-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-door-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Door';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-door-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-door-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Door';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-door-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-door-unique';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Door';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 9;
  $feeds_tamper->description = 'Unique';
  $export['elx_users-door-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-education_manager_executive-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Education Manager/Executive';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-education_manager_executive-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-education_manager_executive-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Education Manager/Executive';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-education_manager_executive-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-email-required';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Email';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Required field';
  $export['elx_users-email-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-email-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Email';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-email-strip_tags'] = $feeds_tamper;

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
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-email-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-employee_id-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Employee ID';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-employee_id-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-employee_id-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Employee ID';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-employee_id-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-field_sales_director_regional_education_director-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Field Sales Director/Regional Education Director';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-field_sales_director_regional_education_director-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-field_sales_director_regional_education_director-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Field Sales Director/Regional Education Director';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-field_sales_director_regional_education_director-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-first_name-required';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'First Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Required field';
  $export['elx_users-first_name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-first_name-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'First Name';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-first_name-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-first_name-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'First Name';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-first_name-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-general_manager_brand_manager-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'General Manager/Brand Manager';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-general_manager_brand_manager-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-general_manager_brand_manager-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'General Manager/Brand Manager';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-general_manager_brand_manager-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-hire_date-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Hire Date';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-hire_date-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-hire_date-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Hire Date';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-hire_date-trim'] = $feeds_tamper;

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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Czech$/ui',
  );
  $feeds_tamper->weight = 43;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Danish$/ui',
  );
  $feeds_tamper->weight = 44;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Dutch$/ui',
  );
  $feeds_tamper->weight = 45;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^English \\(Canada\\)$/ui',
  );
  $feeds_tamper->weight = 47;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^English$/ui',
  );
  $feeds_tamper->weight = 46;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Chinese \\(Simplified\\)$/ui',
  );
  $feeds_tamper->weight = 40;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Chinese \\(Traditional\\)$/ui',
  );
  $feeds_tamper->weight = 41;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Bulgarian$/ui',
  );
  $feeds_tamper->weight = 39;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Croatian$/ui',
  );
  $feeds_tamper->weight = 42;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Estonian$/ui',
  );
  $feeds_tamper->weight = 48;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Filipino$/ui',
  );
  $feeds_tamper->weight = 49;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Arabic$/ui',
  );
  $feeds_tamper->weight = 38;
  $feeds_tamper->description = 'Arabic';
  $export['elx_users-language-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-find_replace_regex';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/^(?!(ar|bg|zhhans|zhhant|hr|cs|da|nl|en|et|fil|fi|fr|frca|de|el|he|hu|is|id|it|ja|ko|lv|lt|nb|pl|pt|ro|ru|es|essp|sv|th|tr)$)/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 73;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['elx_users-language-find_replace_regex'] = $feeds_tamper;

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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Finnish$/ui',
  );
  $feeds_tamper->weight = 50;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^French \\(Canada\\)$/ui',
  );
  $feeds_tamper->weight = 52;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^French$/ui',
  );
  $feeds_tamper->weight = 51;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Greek$/ui',
  );
  $feeds_tamper->weight = 53;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Hebrew$/ui',
  );
  $feeds_tamper->weight = 54;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Hungarian$/ui',
  );
  $feeds_tamper->weight = 55;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Icelandic$/ui',
  );
  $feeds_tamper->weight = 56;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Indonesian$/ui',
  );
  $feeds_tamper->weight = 57;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Italian$/ui',
  );
  $feeds_tamper->weight = 58;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Japanese$/ui',
  );
  $feeds_tamper->weight = 59;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Korean$/ui',
  );
  $feeds_tamper->weight = 60;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Latvian$/ui',
  );
  $feeds_tamper->weight = 61;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Lithuanian$/ui',
  );
  $feeds_tamper->weight = 62;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Norwegian Bokmål$/ui',
  );
  $feeds_tamper->weight = 63;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Polish$/ui',
  );
  $feeds_tamper->weight = 64;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Portuguese$/ui',
  );
  $feeds_tamper->weight = 65;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Romanian$/ui',
  );
  $feeds_tamper->weight = 66;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Russian$/ui',
  );
  $feeds_tamper->weight = 67;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Spanish$/ui',
  );
  $feeds_tamper->weight = 68;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Spanish \\(Spain\\)$/ui',
  );
  $feeds_tamper->weight = 69;
  $feeds_tamper->description = 'Spanish (Spain)';
  $export['elx_users-language-spanish_sp'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 36;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-language-strip_tags'] = $feeds_tamper;

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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Swedish$/ui',
  );
  $feeds_tamper->weight = 70;
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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Thai$/ui',
  );
  $feeds_tamper->weight = 71;
  $feeds_tamper->description = 'Thai';
  $export['elx_users-language-thai'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-language-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 37;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-language-trim'] = $feeds_tamper;

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
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Turkish$/ui',
  );
  $feeds_tamper->weight = 72;
  $feeds_tamper->description = 'Turkish';
  $export['elx_users-language-turkish'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-last_name-required';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Last Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Required field';
  $export['elx_users-last_name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-last_name-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Last Name';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-last_name-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-last_name-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Last Name';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-last_name-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-learner_group-array_filter';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Learner Group';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Filter empty items';
  $export['elx_users-learner_group-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-learner_group-explode';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Learner Group';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Explode';
  $export['elx_users-learner_group-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-learner_group-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Learner Group';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-learner_group-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-learner_group-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Learner Group';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-learner_group-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-learner_group-unique';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Learner Group';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Unique';
  $export['elx_users-learner_group-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_administrator-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Administrator';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-market_administrator-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_administrator-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Administrator';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-market_administrator-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-array_filter';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Filter empty items';
  $export['elx_users-market_name-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-explode';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Explode';
  $export['elx_users-market_name-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-market_name-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-market_name-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-market_name-unique';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Market Name';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Unique';
  $export['elx_users-market_name-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-region_code-find_replace_regex';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Region Code';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/^(?!(APAC|NOAM|EMEA|LATAM|TRA|TRAPAC|TREMEA)$)/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['elx_users-region_code-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-region_code-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Region Code';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-region_code-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-region_code-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Region Code';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-region_code-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-regional_vice_president-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Regional Vice President';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-regional_vice_president-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-regional_vice_president-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Regional Vice President';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-regional_vice_president-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-state-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'State';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-state-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-state-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'State';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-state-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-status-cast_to_int';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Status';
  $feeds_tamper->plugin_id = 'cast_to_int';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Cast to integer';
  $export['elx_users-status-cast_to_int'] = $feeds_tamper;

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
  $feeds_tamper->weight = 4;
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
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace Active = 1';
  $export['elx_users-status-find_replace_active'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-status-find_replace_regex';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Status';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/^(?!(0|1)$)/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['elx_users-status-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-status-strip_tags';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Status';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Strip tags';
  $export['elx_users-status-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-status-trim';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Status';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['elx_users-status-trim'] = $feeds_tamper;

  return $export;
}
