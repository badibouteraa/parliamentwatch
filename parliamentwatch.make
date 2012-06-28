; make file for parliamentwatch
core = 7.x
api = 2

projects[drupal][version] = "7.12"

; Modules
projects[addressfield][version] = "1.0-beta3"
projects[addressfield][subdir] = "contrib" 
projects[addthis][version] = "4.0-alpha1"
projects[addthis][subdir] = "contrib"
projects[admin_language][version] = "1.x-dev"
projects[admin_language][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc2"
projects[admin_menu][subdir] = "contrib" 
projects[backup_migrate][version] = "2.2"
projects[backup_migrate][subdir] = "contrib"  
projects[better_formats][version] = "1.x-dev"
projects[better_formats][subdir] = "contrib"
projects[chart][version] = "1.1"
projects[chart][subdir] = "contrib"
projects[ctools][version] = "1.0"
projects[ctools][subdir] = "contrib" 
projects[compact_forms][version] = "1.0"
projects[compact_forms][subdir] = "contrib" 
projects[context][version] = "3.0-beta2"
projects[context][subdir] = "contrib" 
projects[custom_breadcrumbs][version] = "1.0-alpha1"
projects[custom_breadcrumbs][subdir] = "contrib" 
projects[custom_search][version] = "1.9"
projects[custom_search][subdir] = "contrib" 
projects[date][version] = "2.5"
projects[date][subdir] = "contrib" 
projects[de_stemmer][version] = "1.0-rc1"
projects[de_stemmer][subdir] = "contrib" 
projects[delta][version] = "3.0-beta9"
projects[delta][subdir] = "contrib" 
projects[devel][version] = "1.2"
projects[devel][subdir] = "contrib" 
projects[ds][version] = "1.5"
projects[ds][subdir] = "contrib" 
projects[entity][version] = "1.0-rc2"
projects[entity][subdir] = "contrib" 
projects[features][version] = "1.0-rc2"
projects[features][subdir] = "contrib" 
projects[feedback_simple][version] = "1.3"
projects[feedback_simple][subdir] = "contrib" 
projects[feeds][version] = "2.0-alpha4"
projects[feeds][subdir] = "contrib" 
projects[field_group][version] = "1.1"
projects[field_group][subdir] = "contrib" 
projects[file_entity][version] = "2.0-unstable5"
projects[file_entity][subdir] = "contrib" 
projects[forward][version] = "1.3"
projects[forward][subdir] = "contrib" 
projects[i18n][version] = "1.5"
projects[i18n][subdir] = "contrib" 
projects[inline_messages][version] = "1.0"
projects[inline_messages][subdir] = "contrib" 
projects[libraries][version] = "1.0"
projects[libraries][subdir] = "contrib" 
projects[link][version] = "1.x-dev"
projects[link][subdir] = "contrib" 
projects[masquerade][version] = "1.0-rc4"
projects[masquerade][subdir] = "contrib" 
projects[media][version] = "2.x-dev"
projects[media][subdir] = "contrib" 
projects[menu_position][version] = "1.1"
projects[menu_position][subdir] = "contrib"  
projects[migrate][version] = "2.4-rc1"
projects[migrate][subdir] = "contrib" 
projects[migrate_extras][version] = "2.4-rc1"
projects[migrate_extras][subdir] = "contrib" 
projects[module_filter][version] = "1.6"
projects[module_filter][subdir] = "contrib" 
projects[nice_menus][version] = "2.1"
projects[nice_menus][subdir] = "contrib" 
projects[og][version] = "1.3"
projects[og][subdir] = "contrib" 
projects[omega_tools][version] = "3.0-rc4"
projects[omega_tools][subdir] = "contrib"  
projects[panels][version] = "3.2"
projects[panels][subdir] = "contrib" 
projects[pathauto][version] = "1.0"
projects[pathauto][subdir] = "contrib" 
projects[print][version] = "1.0"
projects[print][subdir] = "contrib"
projects[rate][version] = "1.3"
projects[rate][subdir] = "contrib"
projects[read_more][version] = "1.x-dev"
projects[read_more][subdir] = "contrib" 
projects[rules][version] = "2.1"
projects[rules][subdir] = "contrib" 
projects[search404][version] = "1.1"
projects[search404][subdir] = "contrib" 
projects[secureshare][version] = "2.0-alpha2"
projects[secureshare][subdir] = "contrib"
projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib" 
projects[subform][version] = "1.0-alpha1"
projects[subform][subdir] = "contrib" 
projects[tagadelic][version] = "1.x-dev"
projects[tagadelic][subdir] = "contrib" 
projects[text_resize][version] = "1.7"
projects[text_resize][subdir] = "contrib" 
projects[token][version] = "1.0"
projects[token][subdir] = "contrib" 
projects[taxonomy_manager][version] = "1.0-beta2"
projects[taxonomy_manager][subdir] = "contrib" 
projects[field_validation][version] = "2.0-beta2"
projects[field_validation][subdir] = "contrib"
; projects[user_diff][version] = "1.4"
; projects[user_diff][subdir] = "contrib"
projects[user_revision][version] = "1.6"
projects[user_revision][subdir] = "contrib" 
projects[variable][version] = "1.2"
projects[variable][subdir] = "contrib" 
projects[views][version] = "3.3"
projects[views][subdir] = "contrib" 
projects[views_slideshow][version] = "3.0"
projects[views_slideshow][subdir] = "contrib"
projects[votingapi][version] = "2.6"
projects[votingapi][subdir] = "contrib"
projects[webform][version] = "3.17"
projects[webform][subdir] = "contrib" 
projects[webform_rules][version] = "1.3"
projects[webform_rules][subdir] = "contrib" 
projects[wordpress_migrate][version] = "2.0-rc2"
projects[wordpress_migrate][subdir] = "contrib" 
projects[wysiwyg][version] = "2.1"
projects[wysiwyg][subdir] = "contrib" 


; jQuery.cycle
libraries[jquery_cycle][directory_name] = "jquery.cycle"
libraries[jquery_cycle][download][type] = "git"
libraries[jquery_cycle][download][url] = "https://github.com/malsup/cycle.git"

; dompdf
; libraries[dompdf][directory_name] = "dompdf"
; libraries[dompdf][download][type] = "get"
; libraries[dompdf][download][url] = "http://dompdf.googlecode.com/files/dompdf-0.5.2.zip"

; TinyMCE
libraries[tinymce][directory_name] = "tinymce"
libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "https://github.com/tinymce/tinymce/zipball/3.5.2"

; socialshareprivacy
libraries[socialshareprivacy][directory_name] = "socialshareprivacy"
libraries[socialshareprivacy][download][type] = "get"
libraries[socialshareprivacy][download][url] = "http://www.heise.de/extras/socialshareprivacy/jquery.socialshareprivacy.zip"

; CiviCRM
; libraries[civicrm][directory_name] = "civicrm"
; libraries[civicrm][download][type] = "get"
; libraries[civicrm][download][url] = "http://sourceforge.net/projects/civicrm/files/latest/download"

; Themes
projects[omega][version] = "3.1"
projects[omega][subdir] = "contrib" 
