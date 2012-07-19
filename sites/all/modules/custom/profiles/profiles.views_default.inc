<?php
/**
 * @file
 * profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function profiles_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'profile_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Profile list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Overview of Politicians';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_lname' => 'field_user_lname',
    'field_user_fname' => 'field_user_fname',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Change this text in the string translation section';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Relationship: User revision: User */
  $handler->display->display_options['relationships']['vid']['id'] = 'vid';
  $handler->display->display_options['relationships']['vid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['vid']['field'] = 'vid';
  $handler->display->display_options['relationships']['vid']['required'] = 1;
  /* Field: User: Profile picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'field_data_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
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
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'file_view_mode' => 'profile',
  );
  $handler->display->display_options['fields']['field_user_picture']['field_api_classes'] = 0;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_fname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_fname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_fname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_fname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_fname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_fname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_fname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_fname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_fname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_user_fname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_fname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_fname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_user_fname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_fname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_fname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_user_fname']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_user_fname']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_user_fname']['field_api_classes'] = 0;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_lname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_lname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_lname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_lname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_lname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_lname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_lname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_lname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_lname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_user_lname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_lname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_lname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_user_lname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_lname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_lname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_user_lname']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_user_lname']['field_api_classes'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['group_audience']['id'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['table'] = 'field_data_group_audience';
  $handler->display->display_options['fields']['group_audience']['field'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['label'] = '';
  $handler->display->display_options['fields']['group_audience']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['external'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['group_audience']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['group_audience']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['html'] = 0;
  $handler->display->display_options['fields']['group_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['group_audience']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['group_audience']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group_audience']['empty_zero'] = 0;
  $handler->display->display_options['fields']['group_audience']['hide_alter_empty'] = 1;
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['external'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_user']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_user']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_user']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_user']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_user']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_user']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_user']['text'] = 'Go to profile';
  /* Sort criterion: User: Last name (field_user_lname) */
  $handler->display->display_options['sorts']['field_user_lname_value']['id'] = 'field_user_lname_value';
  $handler->display->display_options['sorts']['field_user_lname_value']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['sorts']['field_user_lname_value']['field'] = 'field_user_lname_value';
  $handler->display->display_options['sorts']['field_user_lname_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_user_lname_value']['expose']['label'] = 'Name';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;
  /* Filter criterion: User: Gender (field_user_gender) */
  $handler->display->display_options['filters']['field_user_gender_value']['id'] = 'field_user_gender_value';
  $handler->display->display_options['filters']['field_user_gender_value']['table'] = 'field_data_field_user_gender';
  $handler->display->display_options['filters']['field_user_gender_value']['field'] = 'field_user_gender_value';
  $handler->display->display_options['filters']['field_user_gender_value']['value'] = array(
    'all' => 'all',
    'man' => 'man',
    'woman' => 'woman',
  );
  $handler->display->display_options['filters']['field_user_gender_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['operator_id'] = 'field_user_gender_value_op';
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['label'] = 'Choose gender';
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['operator'] = 'field_user_gender_value_op';
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['identifier'] = 'field_user_gender_value';
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['reduce'] = 1;
  /* Filter criterion: User: Last name (field_user_lname) */
  $handler->display->display_options['filters']['field_user_lname_value']['id'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['filters']['field_user_lname_value']['field'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_user_lname_value']['value'] = 'A';
  $handler->display->display_options['filters']['field_user_lname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['operator_id'] = 'field_user_lname_value_op';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['operator'] = 'field_user_lname_value_op';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['identifier'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'politicians';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Profile list';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['profile_list'] = array(
    t('Master'),
    t('Overview of Politicians'),
    t('more'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Change this text in the string translation section'),
    t('Get the actual user from a user revision.'),
    t('Go to profile'),
    t('Name'),
    t('Choose gender'),
    t('Last name'),
    t('Page'),
  );
  $export['profile_list'] = $view;

  return $export;
}
