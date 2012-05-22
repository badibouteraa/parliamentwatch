echo "PLEASE ENTER DATABASE NAME:"
read DB_NAME

echo "PLEASE ENTER DATABASE PASSWORD:"
read DB_PASS

echo "PLEASE ENTER YOUR WEBSITE ACCOUNT PASSWORD:"
read SITE_PASS

echo "RUNNING DRUSH MAKE FILE"
drush make --yes --working-copy parliamentwatch.make

echo "INSTALLING SITE"
drush site-install --yes standard --locale=de --account-name=root --account-pass=$SITE_PASS --account-mail=dummy@parliamentwatch.org --site-name=parliamentwatch.org --db-url=mysql://root:$DB_PASS@localhost/$DB_NAME

echo "DISABLING USELESS MODULES"
drush dis --yes overlay toolbar

echo "ENABLING CONTRIBUTED MODULES"
drush en --yes entity views views_ui admin_menu admin_menu_toolbar og og_access og_field_access og_ui og_register module_filter token pathauto migrate migrate_ui date date_api date_popup features masquerade taxonomy_manager relation* field_validation wordpress_migrate

echo "ENABLING CUSTOM MODULES"
drush en --yes constituency committee_type blogpost_type migrate_constituency migrate_committee migrate_party migrate_user

echo "ENABLING THEME"
drush en --yes omega abgeordnetenwatch

echo "DEFAULT SETTINGS"
drush vset --yes date_default_timezone "Europe/Berlin"
drush vset --yes date_first_day 1
drush vset --yes site_default_country "DE"
drush vset --yes theme_default abgeordnetenwatch

# set access rights
echo "SETTING PERMISSION TO root:www-data"
chown -R root:www-data *
