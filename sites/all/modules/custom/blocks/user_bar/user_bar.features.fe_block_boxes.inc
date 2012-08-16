<?php
/**
 * @file
 * user_bar.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function user_bar_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Metanavigation Addthis';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'user_bar_add_this';
  $fe_block_boxes->body = '<!-- AddThis Button BEGIN -->
<div class="addthis_toolbox addthis_default_style ">
<a class="addthis_button_email"> Email</a>
<a class="addthis_button_facebook"> Facebook</a>
<a class="addthis_button_google_plusone"></a>
<a class="addthis_button_delicious"> Delicious</a>
<a class="addthis_button_favorites"> Favorit</a>
<a class="addthis_button_twitter"> Twitter</a>
<a class="addthis_button_stumbleupon"> StumbleUpon</a>
<a class="addthis_button_more"> weitere</a>
</div>
<script type="text/javascript" src="http://s7.addthis.com/js/250/addthis_widget.js#pubid=xa-4f9976e51a56ded5"></script>
<!-- AddThis Button END -->';

  $export['user_bar_add_this'] = $fe_block_boxes;

  return $export;
}
