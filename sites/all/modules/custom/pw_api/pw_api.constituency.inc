<?php

/**
 * @file
 * Provides the constituency resource.
 */

/**
 * Retrieves a constituency.
 *
 * @param $id
 *   The constituency node ID.
 *
 * @return
 *   A key value array with information about the constituency.
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
 * Retrieves a list of constituencies.
 *
 * @return
 *   An associative array keyed with IDs, where the values are arrays as
 *   returned by pw_api_constituency_retrieve().
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
 *
 * @return
 *   An associative array that represents the constituency.
 */
function _pw_api_constituency_flatten($node) {
  return array(
    'id' => $node->nid,
    'name' => $node->title,
  );
}
