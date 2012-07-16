<?php
/**
 * @file
 * profiles.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function profiles_taxonomy_default_vocabularies() {
  return array(
    'parliaments' => array(
      'name' => 'Parliaments',
      'machine_name' => 'parliaments',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
