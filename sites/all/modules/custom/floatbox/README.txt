
-- SUMMARY --

Floatbox allows site admin to add a text area field to a content type and enable Rich Text editor.


-- REQUIREMENTS --

* Wysiwyg API module of Drupal
* TinyMCE Rich Text Editor to be used with Wysiwyg API module.


-- INSTALLATION --

* Add module to /sites/all/modules/ and enable it from site's Modules section.

-- CONFIGURING CONTENT TYPE FOR FLOATBOX --

* By default the content type selected is Article.
* To change, please change the following line in floatbox.module FROM:

define('CONTENT_TYPE','article_node_form');
to:
define('CONTENT_TYPE','NODE_TYPE_THAT_YOU_WANT_TO_CONFIGURE_node_form');


-- VARIABLES for theme ---

* Once module is running, please make sure to add the following code in the desired tpl
such as node.tpl.php

<?php 
//Floabbox content display condition
						if(function_exist('floatbox')): // Floatbox Contents 
						floatbox($content);
						endif; 
						if(!function_exist('floatbox')):
							render($content);
						endif;?>

* NOTE: If Display Suite (ds) module is enabled then please use its custom node files to insert the code, instead of the node.tpl.php as adviced above. Following is the code you can place in /ds/layouts/ds_2col/ds-2col.tpl.php for example.

<?php 
//Floabbox content display condition
						if(function_exist('floatbox')): // Floatbox Contents 
						floatbox($right);
						endif; 
						if(!function_exist('floatbox')):
							render($right);
						endif;?> 
-- IMPORTANT --

Please make sure to clear your site Cache in case you are not able to see floatbox contents or
changes you make.