<?php
/**
 * @file
 * elx_users_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function elx_users_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_account_field_executive'
  $field_bases['field_account_field_executive'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_account_field_executive',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_account_name'
  $field_bases['field_account_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_account_name',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_city'
  $field_bases['field_city'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_city',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_counter_manager'
  $field_bases['field_counter_manager'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_counter_manager',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_country'
  $field_bases['field_country'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'AC' => 'AC',
        'AD' => 'AD',
        'AE' => 'AE',
        'AF' => 'AF',
        'AG' => 'AG',
        'AI' => 'AI',
        'AL' => 'AL',
        'AM' => 'AM',
        'AN' => 'AN',
        'AO' => 'AO',
        'AQ' => 'AQ',
        'AR' => 'AR',
        'AS' => 'AS',
        'AT' => 'AT',
        'AU' => 'AU',
        'AW' => 'AW',
        'AX' => 'AX',
        'AZ' => 'AZ',
        'BA' => 'BA',
        'BB' => 'BB',
        'BD' => 'BD',
        'BE' => 'BE',
        'BF' => 'BF',
        'BG' => 'BG',
        'BH' => 'BH',
        'BI' => 'BI',
        'BJ' => 'BJ',
        'BL' => 'BL',
        'BM' => 'BM',
        'BN' => 'BN',
        'BO' => 'BO',
        'BQ' => 'BQ',
        'BR' => 'BR',
        'BS' => 'BS',
        'BT' => 'BT',
        'BV' => 'BV',
        'BW' => 'BW',
        'BY' => 'BY',
        'BZ' => 'BZ',
        'CA' => 'CA',
        'CC' => 'CC',
        'CD' => 'CD',
        'CF' => 'CF',
        'CG' => 'CG',
        'CH' => 'CH',
        'CI' => 'CI',
        'CK' => 'CK',
        'CL' => 'CL',
        'CM' => 'CM',
        'CN' => 'CN',
        'CO' => 'CO',
        'CP' => 'CP',
        'CR' => 'CR',
        'CU' => 'CU',
        'CV' => 'CV',
        'CW' => 'CW',
        'CX' => 'CX',
        'CY' => 'CY',
        'CZ' => 'CZ',
        'DE' => 'DE',
        'DG' => 'DG',
        'DJ' => 'DJ',
        'DK' => 'DK',
        'DM' => 'DM',
        'DO' => 'DO',
        'DZ' => 'DZ',
        'EA' => 'EA',
        'EC' => 'EC',
        'EE' => 'EE',
        'EG' => 'EG',
        'EH' => 'EH',
        'ER' => 'ER',
        'ES' => 'ES',
        'ET' => 'ET',
        'FI' => 'FI',
        'FJ' => 'FJ',
        'FK' => 'FK',
        'FM' => 'FM',
        'FO' => 'FO',
        'FR' => 'FR',
        'GA' => 'GA',
        'GB' => 'GB',
        'GD' => 'GD',
        'GE' => 'GE',
        'GF' => 'GF',
        'GG' => 'GG',
        'GH' => 'GH',
        'GI' => 'GI',
        'GL' => 'GL',
        'GM' => 'GM',
        'GN' => 'GN',
        'GP' => 'GP',
        'GQ' => 'GQ',
        'GR' => 'GR',
        'GS' => 'GS',
        'GT' => 'GT',
        'GU' => 'GU',
        'GW' => 'GW',
        'GY' => 'GY',
        'HK' => 'HK',
        'HM' => 'HM',
        'HN' => 'HN',
        'HR' => 'HR',
        'HT' => 'HT',
        'HU' => 'HU',
        'IC' => 'IC',
        'ID' => 'ID',
        'IE' => 'IE',
        'IL' => 'IL',
        'IM' => 'IM',
        'IN' => 'IN',
        'IO' => 'IO',
        'IQ' => 'IQ',
        'IR' => 'IR',
        'IS' => 'IS',
        'IT' => 'IT',
        'JE' => 'JE',
        'JM' => 'JM',
        'JO' => 'JO',
        'JP' => 'JP',
        'KE' => 'KE',
        'KG' => 'KG',
        'KH' => 'KH',
        'KI' => 'KI',
        'KM' => 'KM',
        'KN' => 'KN',
        'KP' => 'KP',
        'KR' => 'KR',
        'KW' => 'KW',
        'KY' => 'KY',
        'KZ' => 'KZ',
        'LA' => 'LA',
        'LB' => 'LB',
        'LC' => 'LC',
        'LI' => 'LI',
        'LK' => 'LK',
        'LR' => 'LR',
        'LS' => 'LS',
        'LT' => 'LT',
        'LU' => 'LU',
        'LV' => 'LV',
        'LY' => 'LY',
        'MA' => 'MA',
        'MC' => 'MC',
        'MD' => 'MD',
        'ME' => 'ME',
        'MF' => 'MF',
        'MG' => 'MG',
        'MH' => 'MH',
        'MK' => 'MK',
        'ML' => 'ML',
        'MM' => 'MM',
        'MN' => 'MN',
        'MO' => 'MO',
        'MP' => 'MP',
        'MQ' => 'MQ',
        'MR' => 'MR',
        'MS' => 'MS',
        'MT' => 'MT',
        'MU' => 'MU',
        'MV' => 'MV',
        'MW' => 'MW',
        'MX' => 'MX',
        'MY' => 'MY',
        'MZ' => 'MZ',
        'NA' => 'NA',
        'NC' => 'NC',
        'NE' => 'NE',
        'NF' => 'NF',
        'NG' => 'NG',
        'NI' => 'NI',
        'NL' => 'NL',
        'NO' => 'NO',
        'NP' => 'NP',
        'NR' => 'NR',
        'NU' => 'NU',
        'NZ' => 'NZ',
        'OM' => 'OM',
        'PA' => 'PA',
        'PE' => 'PE',
        'PF' => 'PF',
        'PG' => 'PG',
        'PH' => 'PH',
        'PK' => 'PK',
        'PL' => 'PL',
        'PM' => 'PM',
        'PN' => 'PN',
        'PR' => 'PR',
        'PS' => 'PS',
        'PT' => 'PT',
        'PW' => 'PW',
        'PY' => 'PY',
        'QA' => 'QA',
        'QO' => 'QO',
        'RE' => 'RE',
        'RO' => 'RO',
        'RS' => 'RS',
        'RU' => 'RU',
        'RW' => 'RW',
        'SA' => 'SA',
        'SB' => 'SB',
        'SC' => 'SC',
        'SD' => 'SD',
        'SE' => 'SE',
        'SG' => 'SG',
        'SH' => 'SH',
        'SI' => 'SI',
        'SJ' => 'SJ',
        'SK' => 'SK',
        'SL' => 'SL',
        'SM' => 'SM',
        'SN' => 'SN',
        'SO' => 'SO',
        'SR' => 'SR',
        'SS' => 'SS',
        'ST' => 'ST',
        'SV' => 'SV',
        'SX' => 'SX',
        'SY' => 'SY',
        'SZ' => 'SZ',
        'TA' => 'TA',
        'TC' => 'TC',
        'TD' => 'TD',
        'TF' => 'TF',
        'TG' => 'TG',
        'TH' => 'TH',
        'TJ' => 'TJ',
        'TK' => 'TK',
        'TL' => 'TL',
        'TM' => 'TM',
        'TN' => 'TN',
        'TO' => 'TO',
        'TR' => 'TR',
        'TT' => 'TT',
        'TV' => 'TV',
        'TW' => 'TW',
        'TZ' => 'TZ',
        'UA' => 'UA',
        'UG' => 'UG',
        'UM' => 'UM',
        'US' => 'US',
        'UY' => 'UY',
        'UZ' => 'UZ',
        'VA' => 'VA',
        'VC' => 'VC',
        'VE' => 'VE',
        'VG' => 'VG',
        'VI' => 'VI',
        'VN' => 'VN',
        'VU' => 'VU',
        'WF' => 'WF',
        'WS' => 'WS',
        'XK' => 'XK',
        'YE' => 'YE',
        'YT' => 'YT',
        'ZA' => 'ZA',
        'ZM' => 'ZM',
        'ZW' => 'ZW',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_door'
  $field_bases['field_door'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_door',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_education_manager_executiv'
  $field_bases['field_education_manager_executiv'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_education_manager_executiv',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_employer_number'
  $field_bases['field_employer_number'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_employer_number',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_field_sales_director_regio'
  $field_bases['field_field_sales_director_regio'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_field_sales_director_regio',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_first_name'
  $field_bases['field_first_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_first_name',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_general_manager_brand_mana'
  $field_bases['field_general_manager_brand_mana'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_general_manager_brand_mana',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_hire_date'
  $field_bases['field_hire_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hire_date',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_last_access_date'
  $field_bases['field_last_access_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_last_access_date',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_last_name'
  $field_bases['field_last_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_last_name',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_level'
  $field_bases['field_level'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_level',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_market_administrator'
  $field_bases['field_market_administrator'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_market_administrator',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_modified_date'
  $field_bases['field_modified_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_modified_date',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_rank'
  $field_bases['field_rank'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_rank',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_region_list'
  $field_bases['field_region_list'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_region_list',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'APAC' => 'APAC',
        'NOAM' => 'NOAM',
        'EMEA' => 'EMEA',
        'LATAM' => 'LATAM',
        'TRA' => 'TRA',
        'TRAPAC' => 'TRAPAC',
        'TREMEA' => 'TREMEA',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_regional_vice_president'
  $field_bases['field_regional_vice_president'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_regional_vice_president',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_state'
  $field_bases['field_state'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_state',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
