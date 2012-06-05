#!/bin/sh

if [ ! -n "$1" ]
	then
		echo "PLEASE ENTER DATABASE NAME:"
		read DB_NAME
else
	DB_NAME=`echo $1 | sed 's/\./_/g'`
fi

if [ ! -n "$2" ]
	then
		echo "PLEASE ENTER DATABASE PASSWORD:"
		read DB_PASS

		echo "PLEASE ENTER YOUR WEBSITE ACCOUNT PASSWORD:"
		read SITE_PASS
else
	DB_PASS=$2
	SITE_PASS=$2
fi

# avoid overwriting of custom modules/themes
mv sites custom

echo "RUNNING DRUSH MAKE FILE"
drush make --yes --working-copy parliamentwatch.make

echo "INSTALLING SITE"
drush site-install standard --yes --locale=de --account-name=root --account-pass=$SITE_PASS --account-mail=dummy@parliamentwatch.org --site-name=parliamentwatch.org --db-url=mysql://root:$DB_PASS@localhost/$DB_NAME

# bring back custom modules/themes
cp -r custom/* sites
rm -r custom

echo "DISABLING USELESS MODULES"
drush dis --yes overlay toolbar

echo "ENABLING CONTRIBUTED MODULES"
drush en --yes addressfield admin_devel admin_menu admin_menu_toolbar ctools page_manager views_content context context_layouts context_ui custom_search custom_search_blocks date date_all_day date_api devel ds ds_extras ds_search features addthis addthis_displays field_group link file_entity media mediafield i18n i18n_string i18n_variable og backup_migrate better_formats custom_breadcrumbs entity entity_token favicon feedback_simple forward inline_messages libraries masquerade menu_position module_filter nice_menus pathauto read_more subform text_resize token token_filter panels print rules rules_scheduler rules_admin secureshare secureshare_fields de_stemmer stemmer_api tagadelic delta delta_blocks delta_ui omega_tools token_insert_wysiwyg token_insert compact_forms wysiwyg variable variable_realm variable_store views views_slideshow views_slideshow_cycle views_ui webform webform_rules

echo "ENABLING CUSTOM MODULES"
drush en --yes constituency committee_type blogpost_type migrate_constituency migrate_committee migrate_party migrate_user user_profile

echo "ENABLING THEMES"
drush en --yes omega abgeordnetenwatch

echo "DEFAULT SETTINGS"
drush vset --yes date_default_timezone "Europe/Berlin"
drush vset --yes date_first_day 1
drush vset --yes site_default_country "DE"
drush vset --yes theme_default abgeordnetenwatch

# set access rights
# echo "SETTING FILE SYSTEM PERMISSIONS TO root:www-data"
# chown -R root:www-data *

echo "CLEARING CACHE"
drush cc all 
