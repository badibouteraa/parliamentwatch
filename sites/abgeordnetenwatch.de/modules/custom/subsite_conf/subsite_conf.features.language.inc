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

  // Exported language: de
  $languages['de'] = array(
    'language' => 'de',
    'name' => 'German',
    'native' => 'Deutsch',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '2',
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'de',
    'weight' => '0',
  );
  return $languages;
}
