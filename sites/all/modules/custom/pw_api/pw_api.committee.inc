<?php

/**
 * @file
 * Provides the committee resource.
 */

/**
 * Retrieves a committee.
 *
 * @param $id
 *   The node ID of the committee to fetch.
 *
 * @return
 *   A key value array with information about the parliament.
 */
function pw_api_committee_retrieve($id) {
  $node = node_load($id);
  if ($node && $node->type == 'committee') {
    return _pw_api_committee_flatten($node);
  }
  else {
    return services_error('Committee not found.', 404);
  }
}

/**
 * Retrieves a list of committees.
 *
 * @return
 *   An associative array keyed with IDs, where the values are arrays as
 *   returned by pw_api_committee_retrieve().
 */
function pw_api_committee_index() {
  $nids = db_select('node', 'n')
    ->fields('n', array('nid'))
    ->condition('type', 'committee')
    ->condition('status', 1)
    ->execute()
    ->fetchCol();

  return array_map('_pw_api_committee_flatten', node_load_multiple($nids));
}

/**
 * Helper function: Builds an array from a committee node.
 *
 * @param $node
 *   A committee node.
 *
 * @return
 *   An associative array that represents the committee.
 */
function _pw_api_committee_flatten($node) {
  return array(
    'id' => $node->nid,
    'name' => $node->title,
  );
}
