<?php
/**
 * @file
 * dialogue_message_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dialogue_message_type_taxonomy_default_vocabularies() {
  return array(
    'dialogue_topics' => array(
      'name' => 'Dialogue topics',
      'machine_name' => 'dialogue_topics',
      'description' => 'Dialogue messages use this free tagging vocabulary.',
      'hierarchy' => '0',
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
