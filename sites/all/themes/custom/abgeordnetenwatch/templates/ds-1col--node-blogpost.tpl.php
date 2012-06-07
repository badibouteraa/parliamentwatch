<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>
<div class="ds-1col <?php print $classes;?> clearfix <?php print $ds_content_classes;?>">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php
  	if(!function_exists('floatbox')): // If no floatbox then print normal contents
	  print $ds_content; // render normal Contents
	endif;

	if(function_exists('floatbox')):  // If floatbox then print floatbox with contents
	  print floatbox($ds_content); // render Floatbox and normal contents merged
	endif;
   ?>
</div>