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
    //Floabbox content display condition
    if(function_exists('floatbox')): // Floatbox Contents 
        print floatbox($ds_content);
    endif; 
    if(!function_exists('floatbox')):
        print render($ds_content);
    endif;
?> 
</div>