<?php
/**
 * @file
 * pw_content_authoring_layout.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function pw_content_authoring_layout_filter_default_formats() {
  $formats = array();

  // Exported format: Display Suite code
  $formats['ds_code'] = array(
    'format' => 'ds_code',
    'name' => 'Display Suite code',
    'cache' => '0',
    'status' => '1',
    'weight' => '-5',
    'filters' => array(
      'ds_code' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Filtered HTML
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '-9',
    'filters' => array(
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_html' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => '0',
    'status' => '1',
    'weight' => '-8',
    'filters' => array(
      'php_code' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-42',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Managed Content
  $formats['managed_content'] = array(
    'format' => 'managed_content',
    'name' => 'Managed Content',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'filter_htmlcorrector' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_floatbox' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: PHP code
  $formats['php_code'] = array(
    'format' => 'php_code',
    'name' => 'PHP code',
    'cache' => '0',
    'status' => '1',
    'weight' => '-6',
    'filters' => array(
      'php_code' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => '1',
    'status' => '1',
    'weight' => '-7',
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
