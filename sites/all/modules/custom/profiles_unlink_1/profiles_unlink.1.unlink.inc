<?php

/**
 * Unlink profiles_unlink_1_views_view().
 */
function profiles_unlink_1_views_view() {
$view = new view();
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
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['cache']['type'] = 'time';
$handler->display->display_options['cache']['results_lifespan'] = '-1';
$handler->display->display_options['cache']['results_lifespan_custom'] = '0';
$handler->display->display_options['cache']['output_lifespan'] = '-1';
$handler->display->display_options['cache']['output_lifespan_custom'] = '0';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser les filtres';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '21';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['tags']['previous'] = 'zurück';
$handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['style_options']['row_class'] = 'profiles-list-compact';
$handler->display->display_options['style_options']['columns'] = '3';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Relationship: User: Parliament (field_user_parliament) */
$handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
$handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
$handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
/* Relationship: Taxonomy term: User using Party */
$handler->display->display_options['relationships']['reverse_field_user_party_user']['id'] = 'reverse_field_user_party_user';
$handler->display->display_options['relationships']['reverse_field_user_party_user']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_user_party_user']['field'] = 'reverse_field_user_party_user';
$handler->display->display_options['relationships']['reverse_field_user_party_user']['relationship'] = 'field_user_parliament_tid';
/* Relationship: Taxonomy term: User using Constituency */
$handler->display->display_options['relationships']['reverse_field_user_constituency_user']['id'] = 'reverse_field_user_constituency_user';
$handler->display->display_options['relationships']['reverse_field_user_constituency_user']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_user_constituency_user']['field'] = 'reverse_field_user_constituency_user';
$handler->display->display_options['relationships']['reverse_field_user_constituency_user']['relationship'] = 'field_user_parliament_tid';
/* Relationship: User: Constituency (field_user_constituency) */
$handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
$handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
$handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
$handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'reverse_field_user_constituency_user';
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: User: Profile picture */
$handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
$handler->display->display_options['fields']['field_user_picture']['table'] = 'field_data_field_user_picture';
$handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
$handler->display->display_options['fields']['field_user_picture']['label'] = '';
$handler->display->display_options['fields']['field_user_picture']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_user_picture']['alter']['text'] = '<div class="profiles-list-compact-wrapper">[field_user_picture]';
$handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
$handler->display->display_options['fields']['field_user_picture']['settings'] = array(
  'file_view_mode' => 'pw_file_portrait_m',
);
/* Field: User: First Name */
$handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
$handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
$handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
$handler->display->display_options['fields']['field_user_fname']['label'] = '';
$handler->display->display_options['fields']['field_user_fname']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_user_fname']['alter']['text'] = '<strong>[field_user_fname]';
$handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_user_fname']['type'] = 'text_plain';
$handler->display->display_options['fields']['field_user_fname']['settings'] = array(
  'trim_length' => '600',
);
/* Field: User: Last name */
$handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
$handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
$handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
$handler->display->display_options['fields']['field_user_lname']['label'] = '';
$handler->display->display_options['fields']['field_user_lname']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_user_lname']['alter']['text'] = '[field_user_lname],';
$handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_user_lname']['type'] = 'text_plain';
/* Field: User: Party */
$handler->display->display_options['fields']['field_user_party']['id'] = 'field_user_party';
$handler->display->display_options['fields']['field_user_party']['table'] = 'field_data_field_user_party';
$handler->display->display_options['fields']['field_user_party']['field'] = 'field_user_party';
$handler->display->display_options['fields']['field_user_party']['label'] = '';
$handler->display->display_options['fields']['field_user_party']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_user_party']['alter']['text'] = '[field_user_party]</strong>';
$handler->display->display_options['fields']['field_user_party']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_user_party']['type'] = 'i18n_taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_user_party']['delta_offset'] = '0';
/* Field: | more info start */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = '| more info start';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="element-hidden profile-list-compact-info">';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: User: Profile picture */
$handler->display->display_options['fields']['field_user_picture_1']['id'] = 'field_user_picture_1';
$handler->display->display_options['fields']['field_user_picture_1']['table'] = 'field_data_field_user_picture';
$handler->display->display_options['fields']['field_user_picture_1']['field'] = 'field_user_picture';
$handler->display->display_options['fields']['field_user_picture_1']['label'] = '';
$handler->display->display_options['fields']['field_user_picture_1']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_user_picture_1']['alter']['path'] = 'user/[uid]';
$handler->display->display_options['fields']['field_user_picture_1']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['field_user_picture_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_user_picture_1']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_user_picture_1']['element_wrapper_class'] = 'profile-image';
$handler->display->display_options['fields']['field_user_picture_1']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_user_picture_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_user_picture_1']['type'] = 'file_rendered';
$handler->display->display_options['fields']['field_user_picture_1']['settings'] = array(
  'file_view_mode' => 'pw_file_portrait_l',
);
/* Field: User: First Name */
$handler->display->display_options['fields']['field_user_fname_1']['id'] = 'field_user_fname_1';
$handler->display->display_options['fields']['field_user_fname_1']['table'] = 'field_data_field_user_fname';
$handler->display->display_options['fields']['field_user_fname_1']['field'] = 'field_user_fname';
$handler->display->display_options['fields']['field_user_fname_1']['label'] = '';
$handler->display->display_options['fields']['field_user_fname_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_user_fname_1']['alter']['text'] = '<h3>[field_user_fname_1]';
$handler->display->display_options['fields']['field_user_fname_1']['element_label_colon'] = FALSE;
/* Field: User: Last name */
$handler->display->display_options['fields']['field_user_lname_1']['id'] = 'field_user_lname_1';
$handler->display->display_options['fields']['field_user_lname_1']['table'] = 'field_data_field_user_lname';
$handler->display->display_options['fields']['field_user_lname_1']['field'] = 'field_user_lname';
$handler->display->display_options['fields']['field_user_lname_1']['label'] = '';
$handler->display->display_options['fields']['field_user_lname_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_user_lname_1']['alter']['text'] = '[field_user_lname_1]</h3>';
$handler->display->display_options['fields']['field_user_lname_1']['element_label_colon'] = FALSE;
/* Field: User: Party */
$handler->display->display_options['fields']['field_user_party_1']['id'] = 'field_user_party_1';
$handler->display->display_options['fields']['field_user_party_1']['table'] = 'field_data_field_user_party';
$handler->display->display_options['fields']['field_user_party_1']['field'] = 'field_user_party';
$handler->display->display_options['fields']['field_user_party_1']['label'] = '';
$handler->display->display_options['fields']['field_user_party_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_user_party_1']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_user_party_1']['element_wrapper_class'] = 'row party';
$handler->display->display_options['fields']['field_user_party_1']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_user_party_1']['type'] = 'i18n_taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_user_party_1']['delta_offset'] = '0';
/* Field: User: Constituency */
$handler->display->display_options['fields']['field_user_constituency']['id'] = 'field_user_constituency';
$handler->display->display_options['fields']['field_user_constituency']['table'] = 'field_data_field_user_constituency';
$handler->display->display_options['fields']['field_user_constituency']['field'] = 'field_user_constituency';
$handler->display->display_options['fields']['field_user_constituency']['label'] = '';
$handler->display->display_options['fields']['field_user_constituency']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_user_constituency']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_user_constituency']['element_wrapper_class'] = 'row constituency';
$handler->display->display_options['fields']['field_user_constituency']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_user_constituency']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_user_constituency']['type'] = 'i18n_taxonomy_term_reference_plain';
/* Field: User: Link */
$handler->display->display_options['fields']['view_user']['id'] = 'view_user';
$handler->display->display_options['fields']['view_user']['table'] = 'users';
$handler->display->display_options['fields']['view_user']['field'] = 'view_user';
$handler->display->display_options['fields']['view_user']['label'] = '';
$handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_user']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['view_user']['element_wrapper_class'] = 'row link-profile';
$handler->display->display_options['fields']['view_user']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['view_user']['text'] = 'Profil ansehen';
/* Field: | more info end */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['ui_name'] = '| more info end';
$handler->display->display_options['fields']['nothing_1']['label'] = '';
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
$handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
/* Field: | compact end */
$handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
$handler->display->display_options['fields']['nothing_3']['table'] = 'views';
$handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_3']['ui_name'] = '| compact end';
$handler->display->display_options['fields']['nothing_3']['label'] = '';
$handler->display->display_options['fields']['nothing_3']['alter']['text'] = '</div>';
$handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
/* Field: User: Parliament */
$handler->display->display_options['fields']['field_user_parliament']['id'] = 'field_user_parliament';
$handler->display->display_options['fields']['field_user_parliament']['table'] = 'field_data_field_user_parliament';
$handler->display->display_options['fields']['field_user_parliament']['field'] = 'field_user_parliament';
/* Sort criterion: User: Last name (field_user_lname) */
$handler->display->display_options['sorts']['field_user_lname_value']['id'] = 'field_user_lname_value';
$handler->display->display_options['sorts']['field_user_lname_value']['table'] = 'field_data_field_user_lname';
$handler->display->display_options['sorts']['field_user_lname_value']['field'] = 'field_user_lname_value';
$handler->display->display_options['sorts']['field_user_lname_value']['expose']['label'] = 'Name';
/* Contextual filter: Taxonomy term: Name */
$handler->display->display_options['arguments']['name']['id'] = 'name';
$handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['name']['field'] = 'name';
$handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
$handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
  'parliaments' => 'parliaments',
);
$handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
$handler->display->display_options['arguments']['name']['validate_options']['transform'] = TRUE;
$handler->display->display_options['arguments']['name']['limit'] = '0';
$handler->display->display_options['arguments']['name']['path_case'] = 'lower';
$handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
/* Filter criterion: User: Last name (field_user_lname) */
$handler->display->display_options['filters']['field_user_lname_value']['id'] = 'field_user_lname_value';
$handler->display->display_options['filters']['field_user_lname_value']['table'] = 'field_data_field_user_lname';
$handler->display->display_options['filters']['field_user_lname_value']['field'] = 'field_user_lname_value';
$handler->display->display_options['filters']['field_user_lname_value']['operator'] = 'starts';
$handler->display->display_options['filters']['field_user_lname_value']['group'] = 1;
$handler->display->display_options['filters']['field_user_lname_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_user_lname_value']['expose']['operator_id'] = 'field_user_lname_value_op';
$handler->display->display_options['filters']['field_user_lname_value']['expose']['label'] = 'Last name (field_user_lname)';
$handler->display->display_options['filters']['field_user_lname_value']['expose']['operator'] = 'field_user_lname_value_op';
$handler->display->display_options['filters']['field_user_lname_value']['expose']['identifier'] = 'field_user_lname_value';
$handler->display->display_options['filters']['field_user_lname_value']['is_grouped'] = TRUE;
$handler->display->display_options['filters']['field_user_lname_value']['group_info']['label'] = 'Filtrer par nom';
$handler->display->display_options['filters']['field_user_lname_value']['group_info']['identifier'] = 'field_user_lname_value';
$handler->display->display_options['filters']['field_user_lname_value']['group_info']['widget'] = 'radios';
$handler->display->display_options['filters']['field_user_lname_value']['group_info']['group_items'] = array(
  1 => array(
    'title' => 'A',
    'operator' => 'starts',
    'value' => 'A',
  ),
  2 => array(
    'title' => 'B',
    'operator' => 'starts',
    'value' => 'B',
  ),
  3 => array(
    'title' => 'C',
    'operator' => 'starts',
    'value' => 'C',
  ),
  4 => array(
    'title' => 'D',
    'operator' => 'starts',
    'value' => 'D',
  ),
  5 => array(
    'title' => 'E',
    'operator' => 'starts',
    'value' => 'E',
  ),
  6 => array(
    'title' => 'F',
    'operator' => 'starts',
    'value' => 'F',
  ),
  7 => array(
    'title' => 'G',
    'operator' => 'starts',
    'value' => 'G',
  ),
  8 => array(
    'title' => 'H',
    'operator' => 'starts',
    'value' => 'H',
  ),
  9 => array(
    'title' => 'I',
    'operator' => 'starts',
    'value' => 'I',
  ),
  10 => array(
    'title' => 'J',
    'operator' => 'starts',
    'value' => 'J',
  ),
  11 => array(
    'title' => 'K',
    'operator' => 'starts',
    'value' => 'K',
  ),
  12 => array(
    'title' => 'L',
    'operator' => 'starts',
    'value' => 'L',
  ),
  13 => array(
    'title' => 'M',
    'operator' => 'starts',
    'value' => 'M',
  ),
  14 => array(
    'title' => 'N',
    'operator' => 'starts',
    'value' => 'N',
  ),
  15 => array(
    'title' => 'O',
    'operator' => 'starts',
    'value' => 'O',
  ),
  16 => array(
    'title' => 'P',
    'operator' => 'starts',
    'value' => 'P',
  ),
  17 => array(
    'title' => 'Q',
    'operator' => 'starts',
    'value' => 'Q',
  ),
  18 => array(
    'title' => 'R',
    'operator' => 'starts',
    'value' => 'R',
  ),
  19 => array(
    'title' => 'S',
    'operator' => 'starts',
    'value' => 'S',
  ),
  20 => array(
    'title' => 'T',
    'operator' => 'starts',
    'value' => 'T',
  ),
  21 => array(
    'title' => 'U',
    'operator' => 'starts',
    'value' => 'U',
  ),
  22 => array(
    'title' => 'W',
    'operator' => 'starts',
    'value' => 'W',
  ),
  23 => array(
    'title' => 'V',
    'operator' => 'starts',
    'value' => 'V',
  ),
  24 => array(
    'title' => 'X',
    'operator' => 'starts',
    'value' => 'X',
  ),
  25 => array(
    'title' => 'Y',
    'operator' => 'starts',
    'value' => 'Y',
  ),
  26 => array(
    'title' => 'Z',
    'operator' => 'starts',
    'value' => 'Z',
  ),
);
/* Filter criterion: User: Gender (field_user_gender) */
$handler->display->display_options['filters']['field_user_gender_value']['id'] = 'field_user_gender_value';
$handler->display->display_options['filters']['field_user_gender_value']['table'] = 'field_data_field_user_gender';
$handler->display->display_options['filters']['field_user_gender_value']['field'] = 'field_user_gender_value';
$handler->display->display_options['filters']['field_user_gender_value']['value'] = array(
  'all' => 'all',
  'm' => 'm',
  'f' => 'f',
);
$handler->display->display_options['filters']['field_user_gender_value']['group'] = 1;
$handler->display->display_options['filters']['field_user_gender_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_user_gender_value']['expose']['operator_id'] = 'field_user_gender_value_op';
$handler->display->display_options['filters']['field_user_gender_value']['expose']['label'] = 'Filtrer par sexe';
$handler->display->display_options['filters']['field_user_gender_value']['expose']['operator'] = 'field_user_gender_value_op';
$handler->display->display_options['filters']['field_user_gender_value']['expose']['identifier'] = 'field_user_gender_value';
$handler->display->display_options['filters']['field_user_gender_value']['expose']['remember_roles'] = array(
  2 => 0,
  1 => 0,
  3 => 0,
  181527986 => 0,
  51622513 => 0,
);
$handler->display->display_options['filters']['field_user_gender_value']['expose']['reduce'] = TRUE;
$handler->display->display_options['filters']['field_user_gender_value']['group_info']['label'] = 'Filtrer par sexe';
$handler->display->display_options['filters']['field_user_gender_value']['group_info']['identifier'] = 'field_user_gender_value';
$handler->display->display_options['filters']['field_user_gender_value']['group_info']['widget'] = 'radios';
$handler->display->display_options['filters']['field_user_gender_value']['group_info']['group_items'] = array(
  1 => array(
    'title' => 'Male',
    'operator' => 'or',
    'value' => array(
      'all' => 'all',
      'm' => 'm',
      'f' => 'f',
    ),
  ),
  2 => array(
    'title' => 'Female',
    'operator' => 'or',
    'value' => array(
      'all' => 'all',
      'm' => 'm',
      'f' => 'f',
    ),
  ),
);
$handler->display->display_options['filters']['field_user_gender_value']['reduce_duplicates'] = TRUE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['value'] = array(
  181527986 => '181527986',
);
$handler->display->display_options['filters']['rid']['group'] = 1;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: User: Party (field_user_party) */
$handler->display->display_options['filters']['field_user_party_tid']['id'] = 'field_user_party_tid';
$handler->display->display_options['filters']['field_user_party_tid']['table'] = 'field_data_field_user_party';
$handler->display->display_options['filters']['field_user_party_tid']['field'] = 'field_user_party_tid';
$handler->display->display_options['filters']['field_user_party_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_user_party_tid']['expose']['operator_id'] = 'field_user_party_tid_op';
$handler->display->display_options['filters']['field_user_party_tid']['expose']['label'] = 'Filtrer par parti';
$handler->display->display_options['filters']['field_user_party_tid']['expose']['operator'] = 'field_user_party_tid_op';
$handler->display->display_options['filters']['field_user_party_tid']['expose']['identifier'] = 'field_user_party_tid';
$handler->display->display_options['filters']['field_user_party_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  181527986 => 0,
  51622513 => 0,
);
$handler->display->display_options['filters']['field_user_party_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_user_party_tid']['vocabulary'] = 'party';
/* Filter criterion: User: Commitee (field_user_commitee) */
$handler->display->display_options['filters']['field_user_commitee_tid']['id'] = 'field_user_commitee_tid';
$handler->display->display_options['filters']['field_user_commitee_tid']['table'] = 'field_data_field_user_commitee';
$handler->display->display_options['filters']['field_user_commitee_tid']['field'] = 'field_user_commitee_tid';
$handler->display->display_options['filters']['field_user_commitee_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_user_commitee_tid']['expose']['operator_id'] = 'field_user_commitee_tid_op';
$handler->display->display_options['filters']['field_user_commitee_tid']['expose']['label'] = 'Filter by membership in committees';
$handler->display->display_options['filters']['field_user_commitee_tid']['expose']['operator'] = 'field_user_commitee_tid_op';
$handler->display->display_options['filters']['field_user_commitee_tid']['expose']['identifier'] = 'field_user_commitee_tid';
$handler->display->display_options['filters']['field_user_commitee_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  181527986 => 0,
  51622513 => 0,
);
$handler->display->display_options['filters']['field_user_commitee_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_user_commitee_tid']['vocabulary'] = 'committee';
/* Filter criterion: User: Constituency (field_user_constituency) */
$handler->display->display_options['filters']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
$handler->display->display_options['filters']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
$handler->display->display_options['filters']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
$handler->display->display_options['filters']['field_user_constituency_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_user_constituency_tid']['expose']['operator_id'] = 'field_user_constituency_tid_op';
$handler->display->display_options['filters']['field_user_constituency_tid']['expose']['label'] = 'Filtrer par circonscription';
$handler->display->display_options['filters']['field_user_constituency_tid']['expose']['operator'] = 'field_user_constituency_tid_op';
$handler->display->display_options['filters']['field_user_constituency_tid']['expose']['identifier'] = 'field_user_constituency_tid';
$handler->display->display_options['filters']['field_user_constituency_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  181527986 => 0,
  51622513 => 0,
);
$handler->display->display_options['filters']['field_user_constituency_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_user_constituency_tid']['vocabulary'] = 'constituency';

/* Display: Profiles list parliament */
$handler = $view->new_display('page', 'Profiles list parliament', 'page');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: User: Last name (field_user_lname) */
$handler->display->display_options['sorts']['field_user_lname_value']['id'] = 'field_user_lname_value';
$handler->display->display_options['sorts']['field_user_lname_value']['table'] = 'field_data_field_user_lname';
$handler->display->display_options['sorts']['field_user_lname_value']['field'] = 'field_user_lname_value';
$handler->display->display_options['sorts']['field_user_lname_value']['expose']['label'] = 'Sort by Name';
$handler->display->display_options['path'] = 'politicians/%';
$handler->display->display_options['menu']['title'] = 'Profile list';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;

/* Display: Profile list commitees */
$handler = $view->new_display('block', 'Profile list commitees', 'block_1');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: User: Commitee (field_user_commitee) */
$handler->display->display_options['arguments']['field_user_commitee_tid']['id'] = 'field_user_commitee_tid';
$handler->display->display_options['arguments']['field_user_commitee_tid']['table'] = 'field_data_field_user_commitee';
$handler->display->display_options['arguments']['field_user_commitee_tid']['field'] = 'field_user_commitee_tid';
$handler->display->display_options['arguments']['field_user_commitee_tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_user_commitee_tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['field_user_commitee_tid']['default_argument_options']['node'] = TRUE;
$handler->display->display_options['arguments']['field_user_commitee_tid']['default_argument_options']['anyall'] = '+';
$handler->display->display_options['arguments']['field_user_commitee_tid']['default_argument_options']['limit'] = TRUE;
$handler->display->display_options['arguments']['field_user_commitee_tid']['default_argument_options']['vocabularies'] = array(
  'committee' => 'committee',
);
$handler->display->display_options['arguments']['field_user_commitee_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_user_commitee_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_user_commitee_tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['block_description'] = 'Profile list commitees';
$translatables['profile_list'] = array(
  t('Master'),
  t('more'),
  t('Appliquer'),
  t('Réinitialiser les filtres'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« first'),
  t('zurück'),
  t('weiter'),
  t('last »'),
  t('term from field_user_parliament'),
  t('field_user_party'),
  t('field_user_constituency'),
  t('term from field_user_constituency'),
  t('<div class="profiles-list-compact-wrapper">[field_user_picture]'),
  t('<strong>[field_user_fname]'),
  t('[field_user_lname],'),
  t('[field_user_party]</strong>'),
  t('<div class="element-hidden profile-list-compact-info">'),
  t('<h3>[field_user_fname_1]'),
  t('[field_user_lname_1]</h3>'),
  t('Profil ansehen'),
  t('</div>'),
  t('Parliament'),
  t('Name'),
  t('All'),
  t('Last name (field_user_lname)'),
  t('Filtrer par nom'),
  t('Filtrer par sexe'),
  t('Filtrer par parti'),
  t('Filter by membership in committees'),
  t('Filtrer par circonscription'),
  t('Profiles list parliament'),
  t('Sort by Name'),
  t('Profile list commitees'),
);

$view->save();
}
