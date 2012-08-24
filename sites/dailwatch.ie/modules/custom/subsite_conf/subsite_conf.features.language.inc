<?php
/**
 * @file
 * subsite_conf.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function subsite_conf_locale_default_languages() {
  $languages = array();

  // Exported language: en
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => '0',
    'enabled' => '0',
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => '0',
  );
  // Exported language: en-gb
  $languages['en-gb'] = array(
    'language' => 'en-gb',
    'name' => 'English, British',
    'native' => 'English, British',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'en-gb',
    'weight' => '0',
  );
  // Exported language: ga
  $languages['ga'] = array(
    'language' => 'ga',
    'name' => 'Irish',
    'native' => 'Gaeilge',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'ga',
    'weight' => '0',
  );
  return $languages;
}
