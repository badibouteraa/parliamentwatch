<?php
/**
 * @file
 * blogpost_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function blogpost_type_taxonomy_default_vocabularies() {
  return array(
    'blogtags' => array(
      'name' => 'Blogtags',
      'machine_name' => 'blogtags',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '0',
    ),
  );
}
