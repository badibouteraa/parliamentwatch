<?php
/**
 * @file
 * blogpost_type.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function blogpost_type_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blogpost|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blogpost';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'anchor_to_top' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'block_newsletter_order' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'custom_comment_counter' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'comment-count',
      ),
    ),
    'comments' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '5',
      'label' => 'inline',
      'format' => 'author',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => ' von ',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => 'author',
      ),
    ),
    'post_date' => array(
      'weight' => '4',
      'label' => 'inline',
      'format' => 'ds_post_date_medium',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => 'Veröffentlicht am ',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => 'date',
      ),
    ),
    'field_blogpost_blogtags' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-type-taxonomy-term-reference clearfix clear-both',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
    'field_blogpost_teaserimage' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-name-field-blog-teaserimage',
      ),
    ),
  );
  $export['node|blogpost|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blogpost|print';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blogpost';
  $ds_fieldsetting->view_mode = 'print';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '5',
      'label' => 'inline',
      'format' => 'author',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => ' von ',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => 'author',
      ),
    ),
    'post_date' => array(
      'weight' => '4',
      'label' => 'inline',
      'format' => 'ds_post_date_medium',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => 'Veröffentlicht am ',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => 'date',
      ),
    ),
    'field_blogpost_blogtags' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-type-taxonomy-term-reference clearfix clear-both',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
  );
  $export['node|blogpost|print'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blogpost|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blogpost';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h4',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'fi' => TRUE,
        'fi-el' => 'span',
        'fi-cl' => 'read-more',
      ),
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_date_short',
    ),
    'body' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => 'light',
      ),
    ),
  );
  $export['node|blogpost|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blogpost|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blogpost';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'author' => array(
      'weight' => '12',
      'label' => 'inline',
      'format' => 'author',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => ' von ',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => 'author',
      ),
    ),
    'post_date' => array(
      'weight' => '11',
      'label' => 'inline',
      'format' => 'ds_post_date_medium',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => 'Veröffentlicht am ',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => 'date',
      ),
    ),
    'body' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_blogpost_blogtags' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-type-taxonomy-term-reference clearfix clear-both',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
    'field_blogpost_teaserimage' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-name-field-blog-teaserimage',
      ),
    ),
  );
  $export['node|blogpost|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function blogpost_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blogpost|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blogpost';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'group_blog_submitted',
        1 => 'group_blog_metainformation',
        2 => 'field_blogpost_teaserimage',
        3 => 'field_blogpost_blogtags',
        4 => 'post_date',
        5 => 'body',
        6 => 'custom_comment_counter',
        7 => 'author',
        8 => 'block_newsletter_order',
        9 => 'secureshare',
        10 => 'anchor_to_top',
        11 => 'comments',
      ),
    ),
    'fields' => array(
      'group_blog_submitted' => 'ds_content',
      'group_blog_metainformation' => 'ds_content',
      'field_blogpost_teaserimage' => 'ds_content',
      'field_blogpost_blogtags' => 'ds_content',
      'post_date' => 'ds_content',
      'body' => 'ds_content',
      'custom_comment_counter' => 'ds_content',
      'author' => 'ds_content',
      'block_newsletter_order' => 'ds_content',
      'secureshare' => 'ds_content',
      'anchor_to_top' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|blogpost|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blogpost|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blogpost';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'group_blog_submitted',
        2 => 'field_blogpost_blogtags',
        3 => 'post_date',
        4 => 'author',
        5 => 'body',
        6 => 'comments',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_blog_submitted' => 'ds_content',
      'field_blogpost_blogtags' => 'ds_content',
      'post_date' => 'ds_content',
      'author' => 'ds_content',
      'body' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|blogpost|print'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blogpost|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blogpost';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'panels-flexible:agw_date_left';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'center' => array(
        0 => 'post_date',
      ),
      'right' => array(
        0 => 'title',
        1 => 'group_search_blog_body',
        2 => 'body',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'post_date' => 'center',
      'title' => 'right',
      'group_search_blog_body' => 'right',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|blogpost|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blogpost|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blogpost';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_addthis',
        1 => 'title',
        2 => 'group_blog_submitted',
        3 => 'field_blogpost_teaserimage',
        4 => 'body',
        5 => 'field_blogpost_blogtags',
        6 => 'post_date',
        7 => 'author',
      ),
    ),
    'fields' => array(
      'field_addthis' => 'ds_content',
      'title' => 'ds_content',
      'group_blog_submitted' => 'ds_content',
      'field_blogpost_teaserimage' => 'ds_content',
      'body' => 'ds_content',
      'field_blogpost_blogtags' => 'ds_content',
      'post_date' => 'ds_content',
      'author' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|blogpost|teaser'] = $ds_layout;

  return $export;
}
