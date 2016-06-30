<?php
/**
 * @file
 * elx_content_tool.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function elx_content_tool_locale_default_languages() {
  $languages = array();

  // Exported language: ar.
  $languages['ar'] = array(
    'language' => 'ar',
    'name' => 'Arabic',
    'native' => 'العربية',
    'direction' => 1,
    'enabled' => 1,
    'plurals' => 6,
    'formula' => '(($n==1)?(0):(($n==0)?(1):(($n==2)?(2):(((($n%100)>=3)&&(($n%100)<=10))?(3):(((($n%100)>=11)&&(($n%100)<=99))?(4):5)))))',
    'domain' => '',
    'prefix' => 'ar',
    'weight' => 0,
  );
  // Exported language: bg.
  $languages['bg'] = array(
    'language' => 'bg',
    'name' => 'Bulgarian',
    'native' => 'Български',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'bg',
    'weight' => 0,
  );
  // Exported language: cs.
  $languages['cs'] = array(
    'language' => 'cs',
    'name' => 'Czech',
    'native' => 'Čeština',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):((((($n%10)>=2)&&(($n%10)<=4))&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => '',
    'prefix' => 'cs',
    'weight' => 0,
  );
  // Exported language: da.
  $languages['da'] = array(
    'language' => 'da',
    'name' => 'Danish',
    'native' => 'Dansk',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'da',
    'weight' => 0,
  );
  // Exported language: de.
  $languages['de'] = array(
    'language' => 'de',
    'name' => 'German',
    'native' => 'Deutsch',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'de',
    'weight' => 0,
  );
  // Exported language: el.
  $languages['el'] = array(
    'language' => 'el',
    'name' => 'Greek',
    'native' => 'Ελληνικά',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'el',
    'weight' => 0,
  );
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
    'prefix' => 'en',
    'weight' => 0,
  );
  // Exported language: es.
  $languages['es'] = array(
    'language' => 'es',
    'name' => 'Spanish',
    'native' => 'Español',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'es',
    'weight' => 0,
  );
  // Exported language: essp.
  $languages['essp'] = array(
    'language' => 'essp',
    'name' => 'Spanish (Spain)',
    'native' => 'Español (España)',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'essp',
    'weight' => 0,
  );
  // Exported language: et.
  $languages['et'] = array(
    'language' => 'et',
    'name' => 'Estonian',
    'native' => 'Eesti',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'et',
    'weight' => 0,
  );
  // Exported language: fi.
  $languages['fi'] = array(
    'language' => 'fi',
    'name' => 'Finnish',
    'native' => 'Suomi',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'fi',
    'weight' => 0,
  );
  // Exported language: fil.
  $languages['fil'] = array(
    'language' => 'fil',
    'name' => 'Filipino',
    'native' => 'Filipino',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n>1)',
    'domain' => '',
    'prefix' => 'fil',
    'weight' => 0,
  );
  // Exported language: fr.
  $languages['fr'] = array(
    'language' => 'fr',
    'name' => 'French',
    'native' => 'Français',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n>1)',
    'domain' => '',
    'prefix' => 'fr',
    'weight' => 0,
  );
  // Exported language: frca.
  $languages['frca'] = array(
    'language' => 'frca',
    'name' => 'French (Canada)',
    'native' => 'Français',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'frca',
    'weight' => 0,
  );
  // Exported language: he.
  $languages['he'] = array(
    'language' => 'he',
    'name' => 'Hebrew',
    'native' => 'עברית',
    'direction' => 1,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'he',
    'weight' => 0,
  );
  // Exported language: hr.
  $languages['hr'] = array(
    'language' => 'hr',
    'name' => 'Croatian',
    'native' => 'Hrvatski',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):((((($n%10)>=2)&&(($n%10)<=4))&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => '',
    'prefix' => 'hr',
    'weight' => 0,
  );
  // Exported language: hu.
  $languages['hu'] = array(
    'language' => 'hu',
    'name' => 'Hungarian',
    'native' => 'Magyar',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'hu',
    'weight' => 0,
  );
  // Exported language: id.
  $languages['id'] = array(
    'language' => 'id',
    'name' => 'Indonesian',
    'native' => 'Bahasa Indonesia',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'id',
    'weight' => 0,
  );
  // Exported language: is.
  $languages['is'] = array(
    'language' => 'is',
    'name' => 'Icelandic',
    'native' => 'Íslenska',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'is',
    'weight' => 0,
  );
  // Exported language: it.
  $languages['it'] = array(
    'language' => 'it',
    'name' => 'Italian',
    'native' => 'Italiano',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'it',
    'weight' => 0,
  );
  // Exported language: ja.
  $languages['ja'] = array(
    'language' => 'ja',
    'name' => 'Japanese',
    'native' => '日本語',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'ja',
    'weight' => 0,
  );
  // Exported language: ko.
  $languages['ko'] = array(
    'language' => 'ko',
    'name' => 'Korean',
    'native' => '한국어',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'ko',
    'weight' => 0,
  );
  // Exported language: lt.
  $languages['lt'] = array(
    'language' => 'lt',
    'name' => 'Lithuanian',
    'native' => 'Lietuvių',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):(((($n%10)>=2)&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => '',
    'prefix' => 'lt',
    'weight' => 0,
  );
  // Exported language: lv.
  $languages['lv'] = array(
    'language' => 'lv',
    'name' => 'Latvian',
    'native' => 'Latviešu',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):(($n!=0)?(1):2))',
    'domain' => '',
    'prefix' => 'lv',
    'weight' => 0,
  );
  // Exported language: nb.
  $languages['nb'] = array(
    'language' => 'nb',
    'name' => 'Norwegian Bokmål',
    'native' => 'Bokmål',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'nb',
    'weight' => 0,
  );
  // Exported language: nl.
  $languages['nl'] = array(
    'language' => 'nl',
    'name' => 'Dutch',
    'native' => 'Nederlands',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'nl',
    'weight' => 0,
  );
  // Exported language: pl.
  $languages['pl'] = array(
    'language' => 'pl',
    'name' => 'Polish',
    'native' => 'Polski',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(($n==1)?(0):((((($n%10)>=2)&&(($n%10)<=4))&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => '',
    'prefix' => 'pl',
    'weight' => 0,
  );
  // Exported language: pt.
  $languages['pt'] = array(
    'language' => 'pt',
    'name' => 'Portuguese',
    'native' => 'Portuguese',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'pt',
    'weight' => 0,
  );
  // Exported language: ro.
  $languages['ro'] = array(
    'language' => 'ro',
    'name' => 'Romanian',
    'native' => 'Română',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(($n==1)?(0):((($n==0)||((($n%100)>0)&&(($n%100)<20)))?(1):2))',
    'domain' => '',
    'prefix' => 'ro',
    'weight' => 0,
  );
  // Exported language: ru.
  $languages['ru'] = array(
    'language' => 'ru',
    'name' => 'Russian',
    'native' => 'Русский',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):((((($n%10)>=2)&&(($n%10)<=4))&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => '',
    'prefix' => 'ru',
    'weight' => 0,
  );
  // Exported language: sv.
  $languages['sv'] = array(
    'language' => 'sv',
    'name' => 'Swedish',
    'native' => 'Svenska',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'sv',
    'weight' => 0,
  );
  // Exported language: th.
  $languages['th'] = array(
    'language' => 'th',
    'name' => 'Thai',
    'native' => 'ภาษาไทย',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'th',
    'weight' => 0,
  );
  // Exported language: tr.
  $languages['tr'] = array(
    'language' => 'tr',
    'name' => 'Turkish',
    'native' => 'Türkçe',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 1,
    'formula' => 0,
    'domain' => '',
    'prefix' => 'tr',
    'weight' => 0,
  );
  // Exported language: zhhans.
  $languages['zhhans'] = array(
    'language' => 'zhhans',
    'name' => 'Chinese (Simplified)',
    'native' => '简体中文',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'zhhans',
    'weight' => 0,
  );
  // Exported language: zhhant.
  $languages['zhhant'] = array(
    'language' => 'zhhant',
    'name' => 'Chinese (Traditional)',
    'native' => '繁體中文',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'zhhant',
    'weight' => 0,
  );
  return $languages;
}
