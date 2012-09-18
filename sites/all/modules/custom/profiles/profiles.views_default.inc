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

  $view = new view();
  $view->name = 'profile_list_rev';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'user_revision';
  $view->human_name = 'Profile List Rev';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '21';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'zurück';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'profiles-list-compact';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['required'] = TRUE;
  /* Relationship: User revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: | start compact */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = '| start compact';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="profiles-list-compact-wrapper">';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Field: User (historical data): Profile picture */
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['id'] = 'field_user_picture-revision_id_1';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['field'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['alter']['text'] = '[field_user_picture-revision_id_1]';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_m',
  );
  /* Field: User (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['id'] = 'field_user_fname-revision_id_1';
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['alter']['text'] = '<strong>[field_user_fname-revision_id_1]';
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['empty'] = '<strong>[field_user_fname]';
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['hide_alter_empty'] = FALSE;
  /* Field: User (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['id'] = 'field_user_lname-revision_id_1';
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['alter']['text'] = '[field_user_lname-revision_id_1], ';
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['empty'] = '[field_user_lname], ';
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['hide_alter_empty'] = FALSE;
  /* Field: User (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['text'] = '[field_user_party-revision_id]</strong>';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Field: | more info start */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '| more info start';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="element-hidden profile-list-compact-info">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Profile picture */
  $handler->display->display_options['fields']['field_user_picture-revision_id']['id'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['field'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_wrapper_class'] = 'profile-image';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_l',
  );
  /* Field: User (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['alter']['text'] = '<h3>[field_user_fname-revision_id]';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['empty'] = '<h3>[field_user_fname]';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['hide_alter_empty'] = FALSE;
  /* Field: User (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['alter']['text'] = '[field_user_lname-revision_id]</h3>';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['empty'] = '[field_user_lname]</h3>';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['hide_alter_empty'] = FALSE;
  /* Field: User (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['id'] = 'field_user_party-revision_id_1';
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['element_wrapper_class'] = 'row party';
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['delta_offset'] = '0';
  /* Field: User (historical data): Constituency */
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['id'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['field'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_wrapper_class'] = 'row constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['delta_offset'] = '0';
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
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: | compact end */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = '| compact end';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Sort criterion: Taxonomy term: Term ID */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  $handler->display->display_options['sorts']['tid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['sorts']['tid']['order'] = 'DESC';
  /* Sort criterion: User (historical data): Last name (field_user_lname) */
  $handler->display->display_options['sorts']['field_user_lname_value']['id'] = 'field_user_lname_value';
  $handler->display->display_options['sorts']['field_user_lname_value']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['sorts']['field_user_lname_value']['field'] = 'field_user_lname_value';
  /* Contextual filter: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['arguments']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_argument_options']['argument'] = 'bundestag';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate_options']['vocabularies'] = array(
    'parliaments' => 'parliaments',
  );
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate_options']['type'] = 'convert';
  /* Filter criterion: User (historical data): Last name (field_user_lname) */
  $handler->display->display_options['filters']['field_user_lname_value']['id'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['filters']['field_user_lname_value']['field'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['operator_id'] = 'field_user_lname_value_op';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['label'] = 'Last name (field_user_lname)';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['operator'] = 'field_user_lname_value_op';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['identifier'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_user_lname_value']['group_info']['label'] = 'Last name (field_user_lname)';
  $handler->display->display_options['filters']['field_user_lname_value']['group_info']['identifier'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'R',
      'operator' => 'starts',
      'value' => 'S',
    ),
    2 => array(
      'title' => 'T',
      'operator' => 'starts',
      'value' => 'T',
    ),
    3 => array(
      'title' => 'Q',
      'operator' => 'starts',
      'value' => 'Q',
    ),
    4 => array(
      'title' => 'P',
      'operator' => 'starts',
      'value' => 'P',
    ),
    5 => array(
      'title' => 'O',
      'operator' => 'starts',
      'value' => 'O',
    ),
    6 => array(
      'title' => 'U',
      'operator' => 'starts',
      'value' => 'U',
    ),
    7 => array(
      'title' => 'V',
      'operator' => 'starts',
      'value' => 'V',
    ),
    8 => array(
      'title' => 'Z',
      'operator' => 'starts',
      'value' => 'Z',
    ),
    9 => array(
      'title' => 'Y',
      'operator' => 'starts',
      'value' => 'Y',
    ),
    10 => array(
      'title' => 'X',
      'operator' => 'starts',
      'value' => 'X',
    ),
    11 => array(
      'title' => 'W',
      'operator' => 'starts',
      'value' => 'W',
    ),
    12 => array(
      'title' => 'N',
      'operator' => 'starts',
      'value' => 'N',
    ),
    13 => array(
      'title' => 'M',
      'operator' => 'starts',
      'value' => 'M',
    ),
    14 => array(
      'title' => 'L',
      'operator' => 'starts',
      'value' => 'L',
    ),
    15 => array(
      'title' => 'A',
      'operator' => 'starts',
      'value' => 'A',
    ),
    16 => array(
      'title' => 'B',
      'operator' => 'starts',
      'value' => 'B',
    ),
    17 => array(
      'title' => 'C',
      'operator' => 'starts',
      'value' => 'C',
    ),
    18 => array(
      'title' => 'D',
      'operator' => 'starts',
      'value' => 'D',
    ),
    19 => array(
      'title' => 'E',
      'operator' => 'starts',
      'value' => 'E',
    ),
    20 => array(
      'title' => 'F',
      'operator' => 'starts',
      'value' => 'F',
    ),
    21 => array(
      'title' => 'G',
      'operator' => 'starts',
      'value' => 'G',
    ),
    22 => array(
      'title' => 'H',
      'operator' => 'starts',
      'value' => 'H',
    ),
    23 => array(
      'title' => 'I',
      'operator' => 'starts',
      'value' => 'I',
    ),
    24 => array(
      'title' => 'J',
      'operator' => 'starts',
      'value' => 'J',
    ),
    25 => array(
      'title' => 'K',
      'operator' => 'starts',
      'value' => 'K',
    ),
  );
  /* Filter criterion: User (historical data): Gender (field_user_gender) */
  $handler->display->display_options['filters']['field_user_gender_value']['id'] = 'field_user_gender_value';
  $handler->display->display_options['filters']['field_user_gender_value']['table'] = 'field_revision_field_user_gender';
  $handler->display->display_options['filters']['field_user_gender_value']['field'] = 'field_user_gender_value';
  $handler->display->display_options['filters']['field_user_gender_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['operator_id'] = 'field_user_gender_value_op';
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['label'] = 'Gender (field_user_gender)';
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['operator'] = 'field_user_gender_value_op';
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['identifier'] = 'field_user_gender_value';
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    181527986 => 0,
    51622513 => 0,
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  /* Filter criterion: User (historical data): Committee (field_user_commitee) */
  $handler->display->display_options['filters']['field_user_commitee_tid']['id'] = 'field_user_commitee_tid';
  $handler->display->display_options['filters']['field_user_commitee_tid']['table'] = 'field_revision_field_user_commitee';
  $handler->display->display_options['filters']['field_user_commitee_tid']['field'] = 'field_user_commitee_tid';
  $handler->display->display_options['filters']['field_user_commitee_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_commitee_tid']['expose']['operator_id'] = 'field_user_commitee_tid_op';
  $handler->display->display_options['filters']['field_user_commitee_tid']['expose']['label'] = 'Commitee (field_user_commitee)';
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
  /* Filter criterion: User (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['filters']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['filters']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['filters']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['filters']['field_user_constituency_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['operator_id'] = 'field_user_constituency_tid_op';
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['label'] = 'Constituency (field_user_constituency)';
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
  /* Filter criterion: User (historical data): Party (field_user_party) */
  $handler->display->display_options['filters']['field_user_party_tid']['id'] = 'field_user_party_tid';
  $handler->display->display_options['filters']['field_user_party_tid']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['filters']['field_user_party_tid']['field'] = 'field_user_party_tid';
  $handler->display->display_options['filters']['field_user_party_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_party_tid']['expose']['operator_id'] = 'field_user_party_tid_op';
  $handler->display->display_options['filters']['field_user_party_tid']['expose']['label'] = 'Party (field_user_party)';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'politicians/%';
  $translatables['profile_list_rev'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
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
    t('Get all revisions from an user.'),
    t('<div class="profiles-list-compact-wrapper">'),
    t('[field_user_picture-revision_id_1]'),
    t('<strong>[field_user_fname-revision_id_1]'),
    t('<strong>[field_user_fname]'),
    t('[field_user_lname-revision_id_1], '),
    t('[field_user_lname], '),
    t('[field_user_party-revision_id]</strong>'),
    t('<div class="element-hidden profile-list-compact-info">'),
    t('<h3>[field_user_fname-revision_id]'),
    t('<h3>[field_user_fname]'),
    t('[field_user_lname-revision_id]</h3>'),
    t('[field_user_lname]</h3>'),
    t('Profil ansehen'),
    t('</div>'),
    t('All'),
    t('Last name (field_user_lname)'),
    t('Gender (field_user_gender)'),
    t('Active'),
    t('Commitee (field_user_commitee)'),
    t('Constituency (field_user_constituency)'),
    t('Party (field_user_party)'),
    t('Page'),
  );
  $export['profile_list_rev'] = $view;

  $view = new view();
  $view->name = 'profile_questions_answers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profile Questions & Answers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Questions & Answers';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'zurück';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'content author';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Field: | question start */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '| question start';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="question">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Field: Topic */
  $handler->display->display_options['fields']['field_dialogue_topic']['id'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['table'] = 'field_data_field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['field'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_wrapper_class'] = 'topic float-right';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_topic']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Comment: Sender fullname */
  $handler->display->display_options['fields']['field_dialogue_sender_fullname']['id'] = 'field_dialogue_sender_fullname';
  $handler->display->display_options['fields']['field_dialogue_sender_fullname']['table'] = 'field_data_field_dialogue_sender_fullname';
  $handler->display->display_options['fields']['field_dialogue_sender_fullname']['field'] = 'field_dialogue_sender_fullname';
  $handler->display->display_options['fields']['field_dialogue_sender_fullname']['relationship'] = 'cid';
  $handler->display->display_options['fields']['field_dialogue_sender_fullname']['label'] = 'Question from';
  $handler->display->display_options['fields']['field_dialogue_sender_fullname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_sender_fullname']['alter']['text'] = '[field_dialogue_sender_fullname]<br/><span class="subline">[created]</span>
';
  $handler->display->display_options['fields']['field_dialogue_sender_fullname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_sender_fullname']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_dialogue_sender_fullname']['element_wrapper_class'] = 'bubble';
  $handler->display->display_options['fields']['field_dialogue_sender_fullname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_sender_fullname']['empty'] = 'anonymous<br/><span class="subline">[created]</span>';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_class'] = 'content';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_dialogue_tags']['id'] = 'field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['table'] = 'field_data_field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['field'] = 'field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['label'] = '';
  $handler->display->display_options['fields']['field_dialogue_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_tags']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_tags']['element_wrapper_class'] = 'icon-taxonomy';
  $handler->display->display_options['fields']['field_dialogue_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_tags']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_dialogue_tags']['delta_offset'] = '0';
  /* Field: | question end */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '| question end';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: | answer start */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = '| answer start';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="comment answer clearfix">';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: User: Profile picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'field_data_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_class'] = 'float-left file-image';
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_s',
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'comment';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['relationship'] = 'cid';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created_1']['element_wrapper_class'] = 'date';
  $handler->display->display_options['fields']['created_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'short';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['text'] = '<div class="file-image float-left">[field_user_picture]</div>
<h3>Antwort von [field_user_fname] [field_user_lname]</h3>
<p class="date">[created_1]</p>
<div class="content clear-both">[comment_body]</div>';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['empty'] = '<div class="file-image float-left">[field_user_picture]</div>
<strong>No answer yet</strong>';
  $handler->display->display_options['fields']['comment_body']['hide_alter_empty'] = FALSE;
  /* Field: | answer end */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = '| answer end';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '<div class="anchor-to-top clearfix"><a href="#page">to the top</a></div>';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Recipient (field_dialogue_recipient) */
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dialogue' => 'dialogue',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['profile_questions_answers'] = array(
    t('Master'),
    t('Questions & Answers'),
    t('more'),
    t('Apply'),
    t('Reset'),
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
    t('Comments'),
    t('content author'),
    t('User entity referenced from field_dialogue_recipient'),
    t('<div class="question">'),
    t('Topic'),
    t('Question from'),
    t('[field_dialogue_sender_fullname]<br/><span class="subline">[created]</span>
'),
    t('anonymous<br/><span class="subline">[created]</span>'),
    t('</div>'),
    t('<div class="comment answer clearfix">'),
    t('<div class="file-image float-left">[field_user_picture]</div>
<h3>Antwort von [field_user_fname] [field_user_lname]</h3>
<p class="date">[created_1]</p>
<div class="content clear-both">[comment_body]</div>'),
    t('<div class="file-image float-left">[field_user_picture]</div>
<strong>No answer yet</strong>'),
    t('<div class="anchor-to-top clearfix"><a href="#page">to the top</a></div>'),
    t('All'),
    t('Block'),
  );
  $export['profile_questions_answers'] = $view;

  return $export;
}
