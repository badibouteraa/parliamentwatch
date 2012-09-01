<?php
/**
 * @file
 * subsite_blocks.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function subsite_blocks_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'1\',
      \'uid\' => \'0\',
      \'title\' => \'Kontaktformular\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'daa1ad97-9e42-29d4-c1c4-bd6e47d42802\',
      \'ds_switch\' => \'\',
      \'nid\' => \'1\',
      \'type\' => \'webform\',
      \'language\' => \'de\',
      \'created\' => \'1346506515\',
      \'changed\' => \'1346541491\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3564daea-b75f-2434-c101-993056f4d3fd\',
      \'revision_timestamp\' => \'1346541491\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'de\',
          \'data\' => array(
            \'de\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'1\',
              \'language\' => \'de\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1346240338\',
              \'changed\' => \'1346506515\',
            ),
          ),
        ),
      \'webform\' => array(
        \'nid\' => \'1\',
        \'confirmation\' => \'Vielen Dank für Ihre Nachricht.\',
        \'confirmation_format\' => \'managed_content\',
        \'redirect_url\' => \'<none>\',
        \'status\' => \'1\',
        \'block\' => \'1\',
        \'teaser\' => \'0\',
        \'allow_draft\' => \'0\',
        \'auto_save\' => \'0\',
        \'submit_notice\' => \'0\',
        \'submit_text\' => \'Nachricht senden\',
        \'submit_limit\' => \'-1\',
        \'submit_interval\' => \'-1\',
        \'total_submit_limit\' => \'-1\',
        \'total_submit_interval\' => \'-1\',
        \'record_exists\' => TRUE,
        \'roles\' => array(
          \'1\',
          \'2\',
          \'3\',
          \'51622513\',
          \'181527986\',
        ),
        \'emails\' => array(
          1 => array(
            \'nid\' => \'1\',
            \'eid\' => \'1\',
            \'email\' => \'root@labanda.de\',
            \'subject\' => \'default\',
            \'from_name\' => \'2\',
            \'from_address\' => \'3\',
            \'template\' => \'default\',
            \'excluded_components\' => array(),
            \'html\' => \'0\',
            \'attachments\' => \'0\',
          ),
        ),
        \'components\' => array(
          1 => array(
            \'nid\' => 1,
            \'cid\' => \'1\',
            \'pid\' => \'0\',
            \'form_key\' => \'trustee_contact_firstname\',
            \'name\' => \'Vorname\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'disabled\' => 0,
              \'unique\' => 0,
              \'maxlength\' => \'255\',
              \'conditional_operator\' => \'=\',
              \'width\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'description\' => \'\',
              \'attributes\' => array(),
              \'conditional_component\' => \'\',
              \'conditional_values\' => \'\',
            ),
            \'mandatory\' => \'1\',
            \'weight\' => \'0\',
            \'page_num\' => 1,
          ),
          2 => array(
            \'nid\' => 1,
            \'cid\' => \'2\',
            \'pid\' => \'0\',
            \'form_key\' => \'trustee_contact_lastname\',
            \'name\' => \'Nachname\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'disabled\' => 0,
              \'unique\' => 0,
              \'maxlength\' => \'255\',
              \'conditional_operator\' => \'=\',
              \'width\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'description\' => \'\',
              \'attributes\' => array(),
              \'conditional_component\' => \'\',
              \'conditional_values\' => \'\',
            ),
            \'mandatory\' => \'1\',
            \'weight\' => \'1\',
            \'page_num\' => 1,
          ),
          3 => array(
            \'nid\' => 1,
            \'cid\' => \'3\',
            \'pid\' => \'0\',
            \'form_key\' => \'trustee_contact_email\',
            \'name\' => \'E-Mail-Adresse\',
            \'type\' => \'email\',
            \'value\' => \'%useremail\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'disabled\' => 0,
              \'unique\' => 0,
              \'conditional_operator\' => \'=\',
              \'width\' => \'\',
              \'description\' => \'\',
              \'attributes\' => array(),
              \'conditional_component\' => \'\',
              \'conditional_values\' => \'\',
            ),
            \'mandatory\' => \'1\',
            \'weight\' => \'2\',
            \'page_num\' => 1,
          ),
          4 => array(
            \'nid\' => 1,
            \'cid\' => \'4\',
            \'pid\' => \'0\',
            \'form_key\' => \'trustee_contact_message\',
            \'name\' => \'Ihre Nachricht (2000 Zeichen)\',
            \'type\' => \'textarea\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => 0,
              \'private\' => 0,
              \'rows\' => \'178\',
              \'resizable\' => 1,
              \'disabled\' => 0,
              \'conditional_operator\' => \'=\',
              \'cols\' => \'\',
              \'description\' => \'\',
              \'attributes\' => array(),
              \'conditional_component\' => \'\',
              \'conditional_values\' => \'\',
            ),
            \'mandatory\' => \'1\',
            \'weight\' => \'3\',
            \'page_num\' => 1,
          ),
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1346506515\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'path\' => array(
        \'pid\' => \'1\',
        \'source\' => \'node/1\',
        \'alias\' => \'content/kontaktformular\',
        \'language\' => \'de\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'Spenden sichern die Unabhängigkeit und Überparteilichkeit der Piraten\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'934dd1e6-2b3c-3c04-5d91-1a448aeef211\',
      \'ds_switch\' => \'\',
      \'nid\' => \'7\',
      \'type\' => \'slider_item\',
      \'language\' => \'und\',
      \'created\' => \'1346540342\',
      \'changed\' => \'1346540498\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'45a84dc5-066e-d694-2de6-372ef0c91995\',
      \'revision_timestamp\' => \'1346540498\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Wie Deine Spende eingesetzt wird erfährst in Du in unserem Jahresbericht.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Wie Deine Spende eingesetzt wird erfährst in Du in unserem Jahresbericht.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_slider_teaserbody\' => array(
        \'und\' => array(
          array(
            \'value\' => \'12.343 Menschen unterstützen uns\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>12.343 Menschen unterstützen uns</p>\\n",
          ),
        ),
      ),
      \'field_slider_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://www.abgeordnetenwatch.de/mit_einer_spende_unterstuetzen-452-0.html\',
            \'title\' => \'Spenden\',
            \'attributes\' => array(
              \'title\' => \'\',
            ),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'und\',
          \'data\' => array(
            \'und\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'7\',
              \'language\' => \'und\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'0\',
              \'translate\' => \'0\',
              \'created\' => \'1346540342\',
              \'changed\' => \'1346540342\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1346540342\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'root\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'937\',
        \'source\' => \'node/7\',
        \'alias\' => \'content/spenden-sichern-die-unabhängigkeit-und-überparteilichkeit-der-piraten\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'0\',
      \'title\' => \'Startseite\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'490f4828-ed24-2e64-b9eb-cedd3b0a5db9\',
      \'ds_switch\' => \'\',
      \'nid\' => \'2\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1346506515\',
      \'changed\' => \'1346541477\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4bebab4e-ced4-9b54-d1d8-e4b13e3629af\',
      \'revision_timestamp\' => \'1346541477\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'und\',
          \'data\' => array(
            \'und\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'2\',
              \'language\' => \'und\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1346245822\',
              \'changed\' => \'1346506515\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1346506515\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'path\' => array(
        \'pid\' => \'2\',
        \'source\' => \'node/2\',
        \'alias\' => \'content/startseite\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'0\',
      \'title\' => \'FAQ\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ad457b1a-eb04-ca14-dda8-cc38615f9019\',
      \'ds_switch\' => \'\',
      \'nid\' => \'3\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1346506515\',
      \'changed\' => \'1346541467\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4f504cab-a00f-6cf4-e1fd-0cae4408a5aa\',
      \'revision_timestamp\' => \'1346541467\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'und\',
          \'data\' => array(
            \'und\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'3\',
              \'language\' => \'und\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1346239563\',
              \'changed\' => \'1346506515\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1346506515\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'path\' => array(
        \'pid\' => \'3\',
        \'source\' => \'node/3\',
        \'alias\' => \'content/faq\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'FAQ\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-45\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'0\',
      \'title\' => \'Impressum\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'62eec28e-10ec-b284-f545-eec0f86288ac\',
      \'ds_switch\' => \'\',
      \'nid\' => \'4\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1346506515\',
      \'changed\' => \'1346541452\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'654f63f0-c658-0bd4-499d-347edf33faa8\',
      \'revision_timestamp\' => \'1346541452\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Hier steht das Impressum\',
            \'summary\' => \'\',
            \'format\' => \'managed_content\',
            \'safe_value\' => "<p> Hier steht das Impressum </p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'und\',
          \'data\' => array(
            \'und\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'4\',
              \'language\' => \'und\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1346239397\',
              \'changed\' => \'1346506515\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1346506515\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'path\' => array(
        \'pid\' => \'4\',
        \'source\' => \'node/4\',
        \'alias\' => \'content/impressum\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'1\',
      \'title\' => \'Empfiehl Piratenwatch in Deinem Sozialen Netzwerk\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f51bcd3e-a306-0ba4-7584-3dee0f7ce3c3\',
      \'ds_switch\' => \'\',
      \'nid\' => \'6\',
      \'type\' => \'slider_item\',
      \'language\' => \'und\',
      \'created\' => \'1346539425\',
      \'changed\' => \'1346539981\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'800f3251-13b4-ea74-4959-8c85c22966db\',
      \'revision_timestamp\' => \'1346539981\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<!-- AddThis Button BEGIN -->\\r\\n<div class=\\"addthis_toolbox addthis_default_style \\">\\r\\n<a class=\\"addthis_button_email\\"> Email</a>\\r\\n<a class=\\"addthis_button_facebook\\"> Facebook</a>\\r\\n<a class=\\"addthis_button_google_plusone\\"></a>\\r\\n<a class=\\"addthis_button_delicious\\"> Delicious</a>\\r\\n<a class=\\"addthis_button_favorites\\"> Favorit</a>\\r\\n<a class=\\"addthis_button_twitter\\"> Twitter</a>\\r\\n<a class=\\"addthis_button_stumbleupon\\"> StumbleUpon</a>\\r\\n<a class=\\"addthis_button_more\\"> weitere</a>\\r\\n</div>\\r\\n<script type=\\"text/javascript\\" src=\\"http://s7.addthis.com/js/250/addthis_widget.js#pubid=xa-4f9976e51a56ded5\\"></script>\\r\\n<!-- AddThis Button END -->\\r\\n<p class=\\"icon-share\\">Achten Sie auf dieses Icon - hier können Sie einzelne Bereiche oder eine beantwortete Frage Ihres Abgeordneten in Ihrem sozialen Netzwerk teilen!</p>",
            \'summary\' => \'\',
            \'format\' => \'managed_content\',
            \'safe_value\' => "<!-- AddThis Button BEGIN --><div class=\\"addthis_toolbox addthis_default_style \\">\\n<a class=\\"addthis_button_email\\"> Email</a><br />\\n<a class=\\"addthis_button_facebook\\"> Facebook</a><br />\\n<a class=\\"addthis_button_google_plusone\\"></a><br />\\n<a class=\\"addthis_button_delicious\\"> Delicious</a><br />\\n<a class=\\"addthis_button_favorites\\"> Favorit</a><br />\\n<a class=\\"addthis_button_twitter\\"> Twitter</a><br />\\n<a class=\\"addthis_button_stumbleupon\\"> StumbleUpon</a><br />\\n<a class=\\"addthis_button_more\\"> weitere</a>\\n</div>\\n<script type=\\"text/javascript\\" src=\\"http://s7.addthis.com/js/250/addthis_widget.js#pubid=xa-4f9976e51a56ded5\\"></script><!-- AddThis Button END --><p class=\\"icon-share\\">Achten Sie auf dieses Icon - hier können Sie einzelne Bereiche oder eine beantwortete Frage Ihres Abgeordneten in Ihrem sozialen Netzwerk teilen!</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_slider_teaserbody\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Empfiehl uns in Deinem Sozialen Netzwerk\',
            \'format\' => \'managed_content\',
            \'safe_value\' => "<p> Empfiehl uns in Deinem Sozialen Netzwerk </p>\\n",
          ),
        ),
      ),
      \'field_slider_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'node/4391\',
            \'title\' => \'Empfiehl uns\',
            \'attributes\' => array(
              \'title\' => \'\',
            ),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'und\',
          \'data\' => array(
            \'und\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'6\',
              \'language\' => \'und\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'0\',
              \'translate\' => \'0\',
              \'created\' => \'1346539425\',
              \'changed\' => \'1346539425\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1346539425\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'root\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'936\',
        \'source\' => \'node/6\',
        \'alias\' => \'content/empfiehl-piratenwatch-deinem-sozialen-netzwerk\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
