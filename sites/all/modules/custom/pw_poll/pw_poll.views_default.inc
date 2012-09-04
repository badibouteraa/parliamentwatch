<?php
/**
 * @file
 * pw_poll.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_poll_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'user_constituency';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Constituency';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Constituency';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = FALSE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php 
if($view->exposed_data[\'field_voc_constituency_zip_tid\']){
$term = taxonomy_term_load($view->result[0]-> _field_data[\'uid\'][\'entity\']->field_user_constituency[\'und\'][0][\'tid\'],1);
echo "Abstimmungsverhalten im Wahlkreis ". $term->name ."</br>";
}
?>
<?php echo "(".$view->total_rows.")";?>
';
  /* Relationship: User: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Relationship: User: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['required'] = 1;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  /* Field: User: Party */
  $handler->display->display_options['fields']['field_user_party']['id'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['table'] = 'field_data_field_user_party';
  $handler->display->display_options['fields']['field_user_party']['field'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['delta_offset'] = '0';
  /* Field: User: Profile picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'field_data_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_user_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_s',
  );
  $handler->display->display_options['fields']['field_user_picture']['field_api_classes'] = 0;
  /* Field: User: Commitee */
  $handler->display->display_options['fields']['field_user_commitee']['id'] = 'field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['table'] = 'field_data_field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['field'] = 'field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Voted';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$sql = "SELECT value FROM {votingapi_vote} WHERE entity_id=:nid AND uid=:uid";
$result  = db_query($sql,array(\':nid\'=>1,\':uid\'=>$row->field_user_fname));
$record = $result->fetchObject();
if($record->value == 1){
 return t(\'yes\');
}else{
 return t(\'no\');
}
';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Zipcodes (field_voc_constituency_zip) */
  $handler->display->display_options['filters']['field_voc_constituency_zip_tid']['id'] = 'field_voc_constituency_zip_tid';
  $handler->display->display_options['filters']['field_voc_constituency_zip_tid']['table'] = 'field_data_field_voc_constituency_zip';
  $handler->display->display_options['filters']['field_voc_constituency_zip_tid']['field'] = 'field_voc_constituency_zip_tid';
  $handler->display->display_options['filters']['field_voc_constituency_zip_tid']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['filters']['field_voc_constituency_zip_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_voc_constituency_zip_tid']['expose']['operator_id'] = 'field_voc_constituency_zip_tid_op';
  $handler->display->display_options['filters']['field_voc_constituency_zip_tid']['expose']['label'] = 'Zipcodes (field_voc_constituency_zip)';
  $handler->display->display_options['filters']['field_voc_constituency_zip_tid']['expose']['operator'] = 'field_voc_constituency_zip_tid_op';
  $handler->display->display_options['filters']['field_voc_constituency_zip_tid']['expose']['identifier'] = 'field_voc_constituency_zip_tid';
  $handler->display->display_options['filters']['field_voc_constituency_zip_tid']['vocabulary'] = 'zipcodes';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user-constituency';
  $translatables['user_constituency'] = array(
    t('Master'),
    t('User Constituency'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('term from field_user_constituency'),
    t('term from field_user_parliament'),
    t('First Name'),
    t('Last name'),
    t('Party'),
    t('Profile picture'),
    t('Commitee'),
    t('Voted'),
    t('Zipcodes (field_voc_constituency_zip)'),
    t('Page'),
  );
  $export['user_constituency'] = $view;

  return $export;
}
