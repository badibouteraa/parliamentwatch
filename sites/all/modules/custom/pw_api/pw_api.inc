<?php

/**
 * @file
 * Services API callbacks.
 */

/**
 * Services API callback: Retrieves a parliament.
 *
 * @param $id
 *   The taxonomy term ID of the parliament to fetch.
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
 * Services API callback: Retrieves a list of all parliaments.
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
 */
function _pw_api_parliament_flatten($term) {
  return array(
    'id' => $term->tid,
    'name' => $term->name,
  );
}

/**
 * Services API callback: Retrieves a constituency.
 *
 * @param $id
 *   The constituency node ID.
 */
function pw_api_constituency_retrieve($id) {
  $node = node_load($id);
  if ($node && $node->type == 'constituency') {
    return _pw_api_constituency_flatten($node);
  }
  else {
    return services_error('Constituency not found.', 404);
  }
}

/**
 * Services API callback that retrieves a list of constituencies.
 */
function pw_api_constituency_index() {
  $nids = db_select('node', 'n')
    ->fields('n', array('nid'))
    ->condition('type', 'constituency')
    ->condition('status', 1)
    ->execute()
    ->fetchCol();

  return array_map('_pw_api_constituency_flatten', node_load_multiple($nids));
}

/**
 * Helper function: Builds an array from a constituency node.
 *
 * @param $node
 *   A constituency node.
 */
function _pw_api_constituency_flatten($node) {
  return array(
    'id' => $node->nid,
    'name' => $node->title,
  );
}
