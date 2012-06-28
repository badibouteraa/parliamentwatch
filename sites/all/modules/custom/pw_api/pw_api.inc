<?php

/**
 * @file
 * Services API callbacks.
 */

/**
 * Services API callback that retrieves a parliament.
 */
function pw_api_parliament_retrieve($id) {
  $term = taxonomy_term_load($id);
  if ($term && $term->vocabulary_machine_name == 'parliaments') {
    return array(
      'id' => $term->tid,
      'name' => $term->name,
    );
  }
  else {
    return services_error('Parliament not found.', 404);
  }
}

/**
 * Services API callback that retrieves a list of all parliaments.
 */
function pw_api_parliament_index() {
  $vocabulary = taxonomy_vocabulary_machine_name_load('parliaments');
  if (!$vocabulary) {
    return services_error('Parliament vocabulary not found.');
  }

  $query = db_select('taxonomy_term_data', 't');
  $query->addField('t', 'tid', 'id');
  $query->addField('t', 'name', 'name');
  return $query
    ->condition('vid', $vocabulary->vid)
    ->execute()
    ->fetchAllAssoc('id');
}
