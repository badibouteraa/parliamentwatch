<?php
/**
 * @file
 * slider_item.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function slider_item_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slider';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Vorgabe',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slider_url' => 0,
    'field_slider_teaserbody' => 0,
    'title' => 0,
    'body' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slider_url' => 'field_slider_url',
    'field_slider_teaserbody' => 'field_slider_teaserbody',
    'title' => 0,
    'body' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['sync'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause_when_hidden'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<?php
drupal_add_css(path_to_theme() . \'/css/slider.css\', array(\'group\' => CSS_DEFAULT, \'every_page\' => TRUE));
?>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: Beschreibung mit LInk */
  $handler->display->display_options['fields']['field_slider_url']['id'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['table'] = 'field_data_field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['field'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['label'] = '';
  $handler->display->display_options['fields']['field_slider_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slider_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slider_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slider_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slider_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slider_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slider_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slider_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slider_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slider_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slider_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slider_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slider_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slider_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slider_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slider_url']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slider_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slider_url']['group_column'] = 'url';
  $handler->display->display_options['fields']['field_slider_url']['field_api_classes'] = 0;
  /* Field: Content: Teaser Body */
  $handler->display->display_options['fields']['field_slider_teaserbody']['id'] = 'field_slider_teaserbody';
  $handler->display->display_options['fields']['field_slider_teaserbody']['table'] = 'field_data_field_slider_teaserbody';
  $handler->display->display_options['fields']['field_slider_teaserbody']['field'] = 'field_slider_teaserbody';
  $handler->display->display_options['fields']['field_slider_teaserbody']['label'] = '';
  $handler->display->display_options['fields']['field_slider_teaserbody']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_teaserbody']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_slider_teaserbody']['alter']['text'] = '[field_slider_teaserbody]<div class="item"></div>';
  $handler->display->display_options['fields']['field_slider_teaserbody']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slider_teaserbody']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slider_teaserbody']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slider_teaserbody']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slider_teaserbody']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slider_teaserbody']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slider_teaserbody']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slider_teaserbody']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slider_teaserbody']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slider_teaserbody']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slider_teaserbody']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slider_teaserbody']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_teaserbody']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slider_teaserbody']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slider_teaserbody']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slider_teaserbody']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slider_teaserbody']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'clearfix';
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Webform form body */
  $handler->display->display_options['fields']['webform_form_body']['id'] = 'webform_form_body';
  $handler->display->display_options['fields']['webform_form_body']['table'] = 'node';
  $handler->display->display_options['fields']['webform_form_body']['field'] = 'webform_form_body';
  $handler->display->display_options['fields']['webform_form_body']['label'] = '';
  $handler->display->display_options['fields']['webform_form_body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['webform_form_body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['webform_form_body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['webform_form_body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['webform_form_body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['webform_form_body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['webform_form_body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['webform_form_body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['webform_form_body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['webform_form_body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['webform_form_body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['webform_form_body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['webform_form_body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['webform_form_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['webform_form_body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['webform_form_body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['webform_form_body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['webform_form_body']['hide_alter_empty'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="close">close</span>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slider_item' => 'slider_item',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['slider'] = array(
    t('Master'),
    t('Slider'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<?php
drupal_add_css(path_to_theme() . \'/css/slider.css\', array(\'group\' => CSS_DEFAULT, \'every_page\' => TRUE));
?>'),
    t('[field_slider_teaserbody]<div class="item"></div>'),
    t('<span class="close">close</span>'),
    t('Block'),
  );
  $export['slider'] = $view;

  return $export;
}
