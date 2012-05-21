<?php
/**
 * @file
 * constituency.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function constituency_taxonomy_default_vocabularies() {
  return array(
    'parliaments' => array(
      'name' => 'Parliaments',
      'machine_name' => 'parliaments',
      'description' => '',
      'hierarchy' => '2',
      'module' => 'taxonomy',
      'weight' => '0',
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
