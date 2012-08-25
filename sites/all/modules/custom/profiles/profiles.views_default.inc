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
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alle Filter zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'sort' => array(
      'bef_format' => 'default',
      'combine' => 1,
      'reset' => 0,
      'reset_label' => '',
    ),
    'field_user_lname_value' => array(
      'more_options' => array(
        'bef_filter_description' => '',
      ),
    ),
    'field_user_gender_value' => array(
      'bef_format' => 'bef_ul',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '21';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_lname' => 'field_user_lname',
    'field_user_fname' => 'field_user_fname',
  );
  /* Relationship: User: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
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
  $handler->display->display_options['fields']['field_user_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_user_picture']['alter']['absolute'] = TRUE;
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
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['type'] = 'text_plain';
  /* Field: User: Groups audience */
  $handler->display->display_options['fields']['group_audience']['id'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['table'] = 'field_data_group_audience';
  $handler->display->display_options['fields']['group_audience']['field'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['label'] = '';
  $handler->display->display_options['fields']['group_audience']['element_label_colon'] = FALSE;
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_user']['text'] = 'Go to profile';
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
  $handler->display->display_options['filters']['field_user_lname_value']['group_info']['label'] = 'Abgeordnete nach Namen filtern';
  $handler->display->display_options['filters']['field_user_lname_value']['group_info']['identifier'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_user_lname_value']['group_info']['remember'] = 1;
  $handler->display->display_options['filters']['field_user_lname_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'B',
      'operator' => 'starts',
      'value' => 'B',
    ),
    2 => array(
      'title' => 'C',
      'operator' => 'starts',
      'value' => 'C',
    ),
    3 => array(
      'title' => 'Ä',
      'operator' => 'starts',
      'value' => 'Ä',
    ),
    4 => array(
      'title' => 'A',
      'operator' => 'starts',
      'value' => 'A',
    ),
    5 => array(
      'title' => 'L',
      'operator' => 'starts',
      'value' => 'L',
    ),
    6 => array(
      'title' => 'M',
      'operator' => 'starts',
      'value' => 'M',
    ),
    7 => array(
      'title' => 'D',
      'operator' => 'starts',
      'value' => 'D',
    ),
    8 => array(
      'title' => 'E',
      'operator' => 'starts',
      'value' => 'E',
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
      'title' => 'H',
      'operator' => 'starts',
      'value' => 'H',
    ),
    12 => array(
      'title' => 'G',
      'operator' => 'starts',
      'value' => 'G',
    ),
    13 => array(
      'title' => 'F',
      'operator' => 'starts',
      'value' => 'F',
    ),
    14 => array(
      'title' => 'K',
      'operator' => 'starts',
      'value' => 'K',
    ),
    15 => array(
      'title' => 'N',
      'operator' => 'starts',
      'value' => 'N',
    ),
    16 => array(
      'title' => 'T',
      'operator' => 'starts',
      'value' => 'T',
    ),
    17 => array(
      'title' => 'U',
      'operator' => 'starts',
      'value' => 'U',
    ),
    18 => array(
      'title' => 'O',
      'operator' => 'starts',
      'value' => 'O',
    ),
    19 => array(
      'title' => 'Y',
      'operator' => 'starts',
      'value' => 'Y',
    ),
    20 => array(
      'title' => 'W',
      'operator' => 'starts',
      'value' => 'W',
    ),
    21 => array(
      'title' => 'R',
      'operator' => 'starts',
      'value' => 'R',
    ),
    22 => array(
      'title' => 'Q',
      'operator' => 'starts',
      'value' => 'Q',
    ),
    23 => array(
      'title' => 'Ö',
      'operator' => 'starts',
      'value' => 'Ö',
    ),
    24 => array(
      'title' => 'P',
      'operator' => 'starts',
      'value' => 'P',
    ),
    25 => array(
      'title' => 'Ü',
      'operator' => 'starts',
      'value' => 'Ü',
    ),
    26 => array(
      'title' => 'S',
      'operator' => 'starts',
      'value' => 'S',
    ),
    27 => array(
      'title' => 'X',
      'operator' => 'starts',
      'value' => 'X',
    ),
    28 => array(
      'title' => 'Z',
      'operator' => 'starts',
      'value' => 'Z',
    ),
    29 => array(
      'title' => 'V',
      'operator' => 'starts',
      'value' => 'V',
    ),
  );
  /* Filter criterion: User: Gender (field_user_gender) */
  $handler->display->display_options['filters']['field_user_gender_value']['id'] = 'field_user_gender_value';
  $handler->display->display_options['filters']['field_user_gender_value']['table'] = 'field_data_field_user_gender';
  $handler->display->display_options['filters']['field_user_gender_value']['field'] = 'field_user_gender_value';
  $handler->display->display_options['filters']['field_user_gender_value']['value'] = array(
    'm' => 'm',
    'f' => 'f',
  );
  $handler->display->display_options['filters']['field_user_gender_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_gender_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['operator_id'] = 'field_user_gender_value_op';
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['label'] = 'Geschlecht auswählen';
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['operator'] = 'field_user_gender_value_op';
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['identifier'] = 'field_user_gender_value';
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['remember_roles'] = array(
    2 => 0,
    1 => 0,
    3 => 0,
    181527986 => 0,
    51622513 => 0,
  );
  $handler->display->display_options['filters']['field_user_gender_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_user_gender_value']['group_info']['label'] = 'Gender (field_user_gender)';
  $handler->display->display_options['filters']['field_user_gender_value']['group_info']['identifier'] = 'field_user_gender_value';
  $handler->display->display_options['filters']['field_user_gender_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_user_gender_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
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

  /* Display: Profiles list */
  $handler = $view->new_display('page', 'Profiles list', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Last name (field_user_lname) */
  $handler->display->display_options['sorts']['field_user_lname_value']['id'] = 'field_user_lname_value';
  $handler->display->display_options['sorts']['field_user_lname_value']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['sorts']['field_user_lname_value']['field'] = 'field_user_lname_value';
  $handler->display->display_options['sorts']['field_user_lname_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_user_lname_value']['expose']['label'] = 'Sort by Name';
  $handler->display->display_options['path'] = 'politicians/%';
  $handler->display->display_options['menu']['title'] = 'Profile list';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['profile_list'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Alle Filter zurücksetzen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('term from field_user_parliament'),
    t('Go to profile'),
    t('Name'),
    t('All'),
    t('Last name (field_user_lname)'),
    t('Abgeordnete nach Namen filtern'),
    t('Geschlecht auswählen'),
    t('Gender (field_user_gender)'),
    t('Profiles list'),
    t('Sort by Name'),
  );
  $export['profile_list'] = $view;

  return $export;
}
