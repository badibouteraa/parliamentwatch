<?php
/**
 * @file
 * trustees.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function trustees_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Trustees';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Trustees';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Board of Trustees';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Artikel sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'absteigend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'pw-list-item clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Profile image */
  $handler->display->display_options['fields']['field_trustee_image']['id'] = 'field_trustee_image';
  $handler->display->display_options['fields']['field_trustee_image']['table'] = 'field_data_field_trustee_image';
  $handler->display->display_options['fields']['field_trustee_image']['field'] = 'field_trustee_image';
  $handler->display->display_options['fields']['field_trustee_image']['label'] = '';
  $handler->display->display_options['fields']['field_trustee_image']['element_class'] = 'float-left';
  $handler->display->display_options['fields']['field_trustee_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trustee_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_trustee_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_trustee_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_trustee_image']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_l',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
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
    'trustee' => 'trustee',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'about/trustees';
  $handler->display->display_options['menu']['title'] = 'Board of Trustees';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['Trustees'] = array(
    t('Master'),
    t('Board of Trustees'),
    t('more'),
    t('Apply'),
    t('Zurücksetzen'),
    t('Artikel sortieren nach'),
    t('aufsteigend'),
    t('absteigend'),
    t('Page'),
  );
  $export['Trustees'] = $view;

  return $export;
}
