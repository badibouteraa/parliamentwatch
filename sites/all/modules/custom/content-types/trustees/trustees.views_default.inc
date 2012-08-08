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

  $view = new view;
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
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>The board of trustees fulfills an important function for abgeordnetenwatch.de. It ensures the adherence to the Code of Conduct concerning any requests made through the site, as well as to make possible suggestions concerning the expansion of the Code of Conduct. In addition the board fulfills the role of a general advisor to the project. The board´s members act in a non-partisan way, and should therefore not hold any significant party mandates.</p>
<p class="read-codex float-right"><a href="/about_us/code_of_conduct">read code of conduct</a></p>
';
  $handler->display->display_options['header']['area']['format'] = 'managed_content';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: Profile image */
  $handler->display->display_options['fields']['field_trustee_image']['id'] = 'field_trustee_image';
  $handler->display->display_options['fields']['field_trustee_image']['table'] = 'field_data_field_trustee_image';
  $handler->display->display_options['fields']['field_trustee_image']['field'] = 'field_trustee_image';
  $handler->display->display_options['fields']['field_trustee_image']['label'] = '';
  $handler->display->display_options['fields']['field_trustee_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_trustee_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_trustee_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_trustee_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_trustee_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_trustee_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_trustee_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_trustee_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_trustee_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_trustee_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_trustee_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_trustee_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_trustee_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_trustee_image']['element_class'] = 'float-left';
  $handler->display->display_options['fields']['field_trustee_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trustee_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_trustee_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_trustee_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_trustee_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_trustee_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_trustee_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_trustee_image']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_l',
  );
  $handler->display->display_options['fields']['field_trustee_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
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
  $handler->display->display_options['path'] = 'about_us/trustees';
  $handler->display->display_options['menu']['type'] = 'normal';
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
    t('<p>The board of trustees fulfills an important function for abgeordnetenwatch.de. It ensures the adherence to the Code of Conduct concerning any requests made through the site, as well as to make possible suggestions concerning the expansion of the Code of Conduct. In addition the board fulfills the role of a general advisor to the project. The board´s members act in a non-partisan way, and should therefore not hold any significant party mandates.</p>
<p class="read-codex float-right"><a href="/about_us/code_of_conduct">read code of conduct</a></p>
'),
    t('Page'),
  );
  $export['Trustees'] = $view;

  return $export;
}
