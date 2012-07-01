<?php

/**
 * @file
 * Provides the politician resource.
 */

/**
 * Retrieves a politician.
 *
 * @param $id
 *   The user ID of the politician.
 *
 * @return
 *   A key value array with information about the politician.
 */
function pw_api_politician_retrieve($id) {
  $politician_role = user_role_load_by_name('politician');
  $account = user_load($id);

  if ($account && array_key_exists($politician_role->rid, $account->roles)) {
    return _pw_api_politician_flatten($account);
  }
  else {
    return services_error('Politician not found.', 404);
  }
}

/**
 * Retrieves a list of politicians.
 *
 * @return
 *   An associative array keyed with IDs, where the values are arrays as
 *   returned by pw_api_politician_retrieve().
 */
function pw_api_politician_index() {
  $politician_role = user_role_load_by_name('politician');

  $uids = db_select('users_roles', 'r')
    ->fields('r', array('uid'))
    ->condition('rid', $politician_role->rid)
    ->execute()
    ->fetchCol();

  return array_map('_pw_api_politician_flatten', user_load_multiple($uids));
}

/**
 * Helper function: Builds an array from a politician user.
 *
 * @param $account
 *   A user with the politician role.
 *
 * @rerurn
 *   An associative array that represents the politician.
 */
function _pw_api_politician_flatten($account) {
  return array(
    'id' => $account->uid,
    'name' => $account->name,
    'childs' => $account->field_user_childs[LANGUAGE_NONE][0]['value'],
    'gender' => $account->field_user_gender[LANGUAGE_NONE][0]['value'],
    'marriage_status' => $account->field_user_marriage_status[LANGUAGE_NONE][0]['value'],
  );
}
