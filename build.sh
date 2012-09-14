#!/bin/sh

# setting DB_NAME (as prefix)
if [ ! -n "$1" ]
	then
		echo "PLEASE ENTER DATABASE NAME:"
		read DB_NAME_PREFIX
	else
		DB_NAME_PREFIX=`echo $1 | sed 's/[\.-]/_/g'`
fi

# setting DB_USER
if [ ! -n "$2" ]
	then
		echo "PLEASE ENTER DATABASE USER:"
		read DB_USER
	else
		DB_USER=$2
fi

# setting DB_PASS
if [ ! -n "$3" ]
	then
		echo "PLEASE ENTER DATABASE PASSWORD:"
		read DB_PASS
	else
		DB_PASS=$3
fi

# setting SITE_PASS
if [ ! -n "$4" ]
	then
		echo "PLEASE ENTER YOUR WEBSITE ACCOUNT PASSWORD:"
		read SITE_PASS
	else
		SITE_PASS=$4
fi

echo "INSTALL AS MULTISITE OR TYPE IN THE NAME OF THE SUBSITE THAT SHOULD BE INSTALLED (Y/N/subsite):"
read MULTISITE

if [ $MULTISITE != "Y" -a $MULTISITE != "N" ]
	then
		SITE_INSTALL=$MULTISITE
	else
		SITE_INSTALL=abgeordnetenwatch.de
fi

# avoid overwriting of custom modules/themes
mv sites custom

echo "RUNNING DRUSH MAKE FILE"
drush make --yes --working-copy parliamentwatch.make

for SITE_PATH in `find custom -maxdepth 1 -type d -name '*.*'`
do 
	SITE=`basename $SITE_PATH`
	if [ $MULTISITE = "Y" -o $SITE = $SITE_INSTALL ]
		then
			DB_NAME_SUFFIX=`echo $SITE | sed 's/[\.-]/_/g'`
			DB_NAME=$DB_NAME_PREFIX"_"$DB_NAME_SUFFIX

			echo "INSTALLING SITE $SITE"
			drush site-install standard --yes --account-name=root --account-pass=$SITE_PASS --site-name=$SITE --site-mail=admin@$SITE --uri=$SITE --sites-subdir=$SITE --db-url=mysql://$DB_USER:$DB_PASS@localhost/$DB_NAME
	fi
done

# bring back custom modules/themes
cp -r custom/* sites
rm -r custom

# applying patches
find . -name "*.patch" -printf "%f:%h\n" | while IFS=":" read FILE PATH
do
	echo "APPLYING PATCH $PATH/$FILE" # TODO: git path
 	/usr/bin/git apply -v --directory=$PATH $PATH/$FILE
done

# enabling modules, themes, etc.
for SITE_PATH in `find sites -maxdepth 1 -type d -name '*.*'`
do
	SITE=`basename $SITE_PATH`
	if [ $MULTISITE = "Y" -o $SITE = $SITE_INSTALL ]
		then
			echo "ENABLING CONTRIB MODULES FOR $SITE"
			drush en --yes --uri=$SITE admin_devel admin_menu admin_menu_toolbar block_class ctools viewfield views_php page_manager views_content content_menu context context_layouts context_ui custom_search custom_search_blocks date date_all_day date_api date_migrate date_popup date_tools delete_all diff entityreference features_tools feeds feeds_ui feeds_comment_processor feeds_xpathparser devel entity_translation filefield_sources migrate migrate_extras migrate_ui rate votingapi ds ds_extras ds_search features fe_block uuid node_export node_export_features uuid_services uuid_features addressfield addthis addthis_displays field_group link simplehtmldom file_entity translation media i18n_field i18n i18n_string i18n_taxonomy i18n_translation i18n_menu i18n_block i18n_variable backup_migrate better_formats chart entity entity_token feedback_simple forward inline_messages job_scheduler libraries linkit masquerade menu_position module_filter nice_menus menu_import pathauto path_breadcrumbs path_breadcrumbs_ui read_more strongarm subform text_resize token user_revision users_export panels php print role_export rules rules_scheduler rules_admin search_api search_api_solr search404 facetapi secureshare secureshare_fields taxonomy_csv de_stemmer stemmer_api tagadelic delta delta_blocks delta_ui omega_tools compact_forms wysiwyg variable variable_realm variable_store views views_data_export views_php views_slideshow views_slideshow_cycle views_ui webform webform_rules

			echo "ENABLING CUSTOM MODULES FOR $SITE"
			drush en --yes --uri=$SITE all_strong_arms dialogues floatbox migrate_committee migrate_constituency migrate_memberships migrate_politician migrate_user_revisions roles slider_item profiles pw_breadcrumb pw_blocks pw_committees pw_content_authoring_layout pw_permissions pw_poll rate_voteas subsite_* trustees

			echo "DISABLING MODULES FOR $SITE"
			drush dis --yes --uri=$SITE toolbar

			echo "ENABLING THEME FOR $SITE"
			if [ $SITE = "piratenpartei-bayern.de" ]
				then
					drush en --yes --uri=$SITE piratenpartei
				else
					THEME=`echo $SITE | sed 's/\..*$//g'`
					drush en --yes --uri=$SITE $THEME				
			fi

			echo "IMPORTING MENUS"
			find sites/$SITE -maxdepth 1 -type f -name '*.menu' -printf "%f:%h\n" | while IFS=":" read FILE PATH
			do
				MENUNAME=${FILE%.*}
				echo $PATH/$FILE
				echo $MENUNAME
				drush menu-import $PATH/$FILE $MENUNAME --clean-import --create-content --link-content --uri=$SITE
			done

 			# add legacy DB parlamentwatch
			echo "
			\$databases['parlamentwatch']['default'] = array(
			  'driver' => 'mysql',
			  'database' => 'parlamentwatch',
			  'username' => '$DB_USER',
			  'password' => '"$DB_PASS"',
			  'host' => 'localhost',
			);" >> sites/$SITE/settings.php

			echo "SETTING WRITE PERMISSIONS TO FILES FOLDER FOR $SITE"
			chmod -R 0775 sites/$SITE/files

			echo "CLEARING CACHE ON $SITE"
			drush cc --uri=$SITE all

			echo "REVERTING ALL FEATURES ON $SITE"
			drush fr-all --force --yes --uri=$SITE
	fi
done

