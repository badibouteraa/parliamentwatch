<?php

/**
 * @file
 * Provides the parliament resource.
 */

/**
 * Retrieves a parliament.
 *
 * @param $id
 *   The taxonomy term ID of the parliament to fetch.
 *
 * @return
 *   A key value array with information about the parliament.
 */
function pw_api_parliament_retrieve($id) {
  $term = taxonomy_term_load($id);
  if ($term && $term->vocabulary_machine_name == 'parliaments') {
    return _pw_api_parliament_flatten($term);
  }
  else {
    return services_error('Parliament not found.', 404);
  }
}

/**
 * Retrieves a list of parliaments.
 *
 * @return
 *   An associative array keyed with IDs, where the values are arrays as
 *   returned by pw_api_parliament_retrieve().
 */
function pw_api_parliament_index() {
  $vocabulary = taxonomy_vocabulary_machine_name_load('parliaments');
  if (!$vocabulary) {
    return services_error('Parliament vocabulary not found.');
  }

  $parliaments = db_select('taxonomy_term_data', 't')
    ->fields('t', array('tid', 'name'))
    ->condition('vid', $vocabulary->vid)
    ->execute()
    ->fetchAllAssoc('tid');

  return array_map('_pw_api_parliament_flatten', $parliaments);
}

/**
 * Helper function: Builds an array from a parliament term.
 *
 * @param $term
 *   A term from the parliaments vocabulary.
 *
 * @return
 *   An associative array that represents the parliament.
 */
function _pw_api_parliament_flatten($term) {
  return array(
    'id' => $term->tid,
    'name' => $term->name,
  );
}
