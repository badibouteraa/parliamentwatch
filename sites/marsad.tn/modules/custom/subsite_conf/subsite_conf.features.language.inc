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

  // Exported language: ar
  $languages['ar'] = array(
    'language' => 'ar',
    'name' => 'Arabic',
    'native' => 'العربية',
    'direction' => '1',
    'enabled' => '1',
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'ar',
    'weight' => '0',
  );
  // Exported language: fr
  $languages['fr'] = array(
    'language' => 'fr',
    'name' => 'French',
    'native' => 'Français',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'fr',
    'weight' => '0',
  );
  return $languages;
}
