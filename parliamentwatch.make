; make file for parliamentwatch
core = 7.x
api = 2

projects[] = drupal

; Contrib Modules
projects[entity][subdir] = "contrib"
projects[features][subdir] = "contrib"
projects[date][subdir] = "contrib"
projects[admin_menu][subdir] = "contrib"
projects[masquerade][subdir] = "contrib"
projects[taxonomy_manager][subdir] = "contrib"
projects[migrate][subdir] = "contrib"
projects[migrate_extras][subdir] = "contrib"
projects[wordpress_migrate][subdir] = "contrib"
projects[views][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[pathauto][subdir] = "contrib"
projects[og][subdir] = "contrib"
projects[module_filter][subdir] = "contrib"
projects[relation][subdir] = "contrib"
projects[ctools][subdir] = "contrib"

; CiviCRM
libraries[civicrm][directory_name] = "civicrm"
libraries[civicrm][download][type] = "get"
libraries[civicrm][download][url] = "http://sourceforge.net/projects/civicrm/files/latest/download"

; Themes
; projects[] = omega
; projects[theme_abgeordnetenwatch][type] = "theme"; 
; projects[theme_abgeordnetenwatch][download][type] = "git"
; projects[theme_abgeordnetenwatch][download][url] = "git@github.com:parliamentwatch/theme-abgeordnetenwatch.git"
