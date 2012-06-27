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

# applying patches
find . -name "*.patch" -printf "%f:%h\n" | while IFS=":" read FILE PATH
do
	echo "APPLYING PATCH $PATH/$FILE" # TODO: git path
 	/usr/bin/git apply -v --directory=$PATH $PATH/$FILE
done


echo "ENABLING MODULES"
drush en --yes admin_devel admin_menu admin_menu_toolbar ctools page_manager views_content context context_layouts context_ui custom_search custom_search_blocks date date_all_day date_api date_migrate date_popup date_tools devel features migrate migrate_committee migrate_constituency migrate_extras migrate_memberships migrate_party migrate_politician migrate_ui user_revision migrate_user_revisions ds ds_extras ds_search blogpost_type committee_type type_party constituency slider_item user_profile_fields custom_roles addressfield addthis addthis_displays field_group link file_entity media mediafield i18n_field i18n i18n_string i18n_variable og og_access og_context og_field_access og_migrate og_ui backup_migrate better_formats custom_breadcrumbs entity entity_token favicon feedback_simple forward inline_messages libraries masquerade menu_position module_filter nice_menus pathauto read_more subform text_resize token user_revision panels print rules rules_scheduler rules_admin secureshare secureshare_fields de_stemmer stemmer_api tagadelic delta delta_blocks delta_ui omega_tools php compact_forms wysiwyg variable variable_realm variable_store views views_slideshow views_slideshow_cycle views_ui webform webform_rules  

echo "DISABLING MODULES"
drush dis --yes toolbar migrate_extras_profile2 print_pdf

echo "ENABLING THEME"
drush en -y omega abgeordnetenwatch
drush vset -y theme_default abgeordnetenwatch

echo "SETTING DATE/COUNTRY"
drush vset --yes date_first_day 1
drush vset --yes site_default_country "DE"

echo "SETTING WRITE PERMISSIONS TO FILES FOLDER"
chmod -R 0775 sites/default/files

echo "CLEARING CACHE"
drush cc all 
