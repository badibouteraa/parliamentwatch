<?php
/**
 * @file
 * pw_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_views_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'user_constituency';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_user_constituen';
  $view->human_name = 'User Constituency';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Constituency';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed User: User ID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'search_api_index_user_constituen';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: Constituency: Zipcodes (indexed) */
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['id'] = 'field_user_constituency_field_voc_constituency_zip';
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['table'] = 'search_api_index_user_constituen';
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['field'] = 'field_user_constituency_field_voc_constituency_zip';
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_user_constituency_field_voc_constituency_zip']['view_mode'] = 'full';
  /* Field: Indexed User: Constituency */
  $handler->display->display_options['fields']['field_user_constituency']['id'] = 'field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['table'] = 'search_api_index_user_constituen';
  $handler->display->display_options['fields']['field_user_constituency']['field'] = 'field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_constituency']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_constituency']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_constituency']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_constituency']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_user_constituency']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_user_constituency']['view_mode'] = 'full';
  /* Field: Indexed User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'search_api_index_user_constituen';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
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
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_fname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_fname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_fname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_user_fname']['field_api_classes'] = 0;
  /* Field: Indexed User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'search_api_index_user_constituen';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
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
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_lname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_lname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_lname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_user_lname']['field_api_classes'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['user_constituency'] = array(
    t('Master'),
    t('User Constituency'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('User ID'),
    t('.'),
    t(','),
    t('Zipcodes (indexed)'),
    t('Constituency'),
    t('First Name'),
    t('Last name'),
    t('Block'),
  );
  $export['user_constituency'] = $view;

  return $export;
}
