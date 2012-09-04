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
      \'title\' => \'Newsletter subscription\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1981f291-a63a-b104-8dc6-b7166cdc3ac9\',
      \'ds_switch\' => \'\',
      \'nid\' => \'1\',
      \'type\' => \'webform\',
      \'language\' => \'de\',
      \'created\' => \'1346752197\',
      \'changed\' => \'1346752197\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'06cba1c7-3cc7-75d4-6de3-1ff89e1ceae1\',
      \'revision_timestamp\' => \'1346752197\',
      \'revision_uid\' => \'0\',
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
              \'created\' => \'1346688699\',
              \'changed\' => \'1346752197\',
            ),
          ),
        ),
      \'webform\' => array(
        \'nid\' => \'1\',
        \'confirmation\' => \'\',
        \'confirmation_format\' => \'filtered_html\',
        \'redirect_url\' => \'%server[HTTP_ORIGIN]%post[submitted][referrer]\',
        \'status\' => \'1\',
        \'block\' => \'0\',
        \'teaser\' => \'0\',
        \'allow_draft\' => \'0\',
        \'auto_save\' => \'0\',
        \'submit_notice\' => \'0\',
        \'submit_text\' => \'\',
        \'submit_limit\' => \'-1\',
        \'submit_interval\' => \'-1\',
        \'total_submit_limit\' => \'-1\',
        \'total_submit_interval\' => \'-1\',
        \'record_exists\' => TRUE,
        \'roles\' => array(
          \'1\',
          \'2\',
          \'3\',
        ),
        \'emails\' => array(),
        \'components\' => array(
          1 => array(
            \'nid\' => 1,
            \'cid\' => \'1\',
            \'pid\' => \'0\',
            \'form_key\' => \'newsletter_order_email\',
            \'name\' => \'Your e-mail address\',
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
            \'weight\' => \'0\',
            \'page_num\' => 1,
          ),
          2 => array(
            \'nid\' => 1,
            \'cid\' => \'2\',
            \'pid\' => \'0\',
            \'form_key\' => \'referrer\',
            \'name\' => \'Referrer\',
            \'type\' => \'hidden\',
            \'value\' => \'%server[REQUEST_URI]\',
            \'extra\' => array(
              \'hidden_type\' => \'hidden\',
              \'conditional_operator\' => \'=\',
              \'private\' => 0,
              \'conditional_component\' => \'\',
              \'conditional_values\' => \'\',
            ),
            \'mandatory\' => \'0\',
            \'weight\' => \'1\',
            \'page_num\' => 1,
          ),
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1346752197\',
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
        \'alias\' => \'content/newsletter-subscription\',
        \'language\' => \'de\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'0\',
      \'title\' => \'حول المرصد\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9c5b3d75-5ab5-4b14-b967-03c105cdba68\',
      \'ds_switch\' => \'\',
      \'nid\' => \'2\',
      \'type\' => \'page\',
      \'language\' => \'ar\',
      \'created\' => \'1346752197\',
      \'changed\' => \'1346752197\',
      \'tnid\' => \'5366\',
      \'translate\' => \'0\',
      \'uuid\' => \'19190522-fd2e-6994-a51b-7cdbf9e176a4\',
      \'revision_timestamp\' => \'1346752197\',
      \'revision_uid\' => \'0\',
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
          \'original\' => \'ar\',
          \'data\' => array(
            \'ar\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'2\',
              \'language\' => \'ar\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1346676997\',
              \'changed\' => \'1346752197\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1346752197\',
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
        \'alias\' => \'content/حول-المرصد\',
        \'language\' => \'ar\',
      ),
      \'menu\' => array(
        \'link_title\' => \'À Propos\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'7\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'1\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'0\',
      \'title\' => \'Boris Hekele\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'df1fa387-213d-0e54-4929-7f3750dd12eb\',
      \'ds_switch\' => \'\',
      \'nid\' => \'3\',
      \'type\' => \'trustee\',
      \'language\' => \'fr\',
      \'created\' => \'1346752197\',
      \'changed\' => \'1346752197\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5b1fe91b-296d-1774-c925-a8e28dc9b819\',
      \'revision_timestamp\' => \'1346752197\',
      \'revision_uid\' => \'0\',
      \'body\' => array(),
      \'field_trustee_image\' => array(
        \'und\' => array(
          NULL,
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
          \'original\' => \'fr\',
          \'data\' => array(
            \'fr\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'3\',
              \'language\' => \'fr\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1346682248\',
              \'changed\' => \'1346752197\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1346752197\',
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
        \'alias\' => \'content/boris-hekele\',
        \'language\' => \'fr\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'0\',
      \'title\' => \'Subscribe to newsletter of marsad.tn\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'1\',
      \'vuuid\' => \'69fb6a64-7705-aa54-099b-14e178ea6826\',
      \'ds_switch\' => \'\',
      \'nid\' => \'4\',
      \'type\' => \'slider_item\',
      \'language\' => \'fr\',
      \'created\' => \'1346752197\',
      \'changed\' => \'1346752197\',
      \'tnid\' => \'5344\',
      \'translate\' => \'0\',
      \'uuid\' => \'7fdc23b1-e28b-87f4-3973-c8c9d5e9e718\',
      \'revision_timestamp\' => \'1346752197\',
      \'revision_uid\' => \'0\',
      \'body\' => array(),
      \'field_slider_teaserbody\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><?  \\r\\nprint variable_get(\'newsletter_abo_count\');\\r\\n?> Subscribe to our newsletter</p>",
            \'format\' => \'php_code\',
          ),
        ),
      ),
      \'field_slider_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'node/4390\',
            \'title\' => \'Subscribe to newsletter\',
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
          \'original\' => \'fr\',
          \'data\' => array(
            \'fr\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'4\',
              \'language\' => \'fr\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1346682754\',
              \'changed\' => \'1346752197\',
            ),
          ),
        ),
      \'webform\' => array(
        \'nid\' => \'4\',
        \'confirmation\' => \'\',
        \'confirmation_format\' => \'managed_content\',
        \'redirect_url\' => \'<none>\',
        \'status\' => \'1\',
        \'block\' => \'0\',
        \'teaser\' => \'0\',
        \'allow_draft\' => \'0\',
        \'auto_save\' => \'0\',
        \'submit_notice\' => \'0\',
        \'submit_text\' => \'\',
        \'submit_limit\' => \'-1\',
        \'submit_interval\' => \'-1\',
        \'total_submit_limit\' => \'-1\',
        \'total_submit_interval\' => \'-1\',
        \'record_exists\' => TRUE,
        \'roles\' => array(
          \'1\',
          \'2\',
        ),
        \'emails\' => array(),
        \'components\' => array(
          1 => array(
            \'nid\' => 4,
            \'cid\' => \'1\',
            \'pid\' => \'0\',
            \'form_key\' => \'newsletter_order_email\',
            \'name\' => \'Your e-mail-adress\',
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
            \'weight\' => \'0\',
            \'page_num\' => 1,
          ),
          2 => array(
            \'nid\' => 4,
            \'cid\' => \'2\',
            \'pid\' => \'0\',
            \'form_key\' => \'referrer\',
            \'name\' => \'referrer\',
            \'type\' => \'hidden\',
            \'value\' => \'%server[REQUEST_URI]\',
            \'extra\' => array(
              \'hidden_type\' => \'hidden\',
              \'conditional_operator\' => \'=\',
              \'private\' => 0,
              \'conditional_component\' => \'\',
              \'conditional_values\' => \'\',
            ),
            \'mandatory\' => \'0\',
            \'weight\' => \'1\',
            \'page_num\' => 1,
          ),
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1346752197\',
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
        \'alias\' => \'content/subscribe-newsletter-marsadtn\',
        \'language\' => \'fr\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'0\',
      \'title\' => \'Recommend marsad.tn with your social network\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f2bf4687-e534-3d24-f193-b1cf87cee627\',
      \'ds_switch\' => \'\',
      \'nid\' => \'5\',
      \'type\' => \'slider_item\',
      \'language\' => \'fr\',
      \'created\' => \'1346752197\',
      \'changed\' => \'1346752197\',
      \'tnid\' => \'5345\',
      \'translate\' => \'0\',
      \'uuid\' => \'cf61c186-6d0b-b284-1d16-0833f641f89c\',
      \'revision_timestamp\' => \'1346752197\',
      \'revision_uid\' => \'0\',
      \'body\' => array(),
      \'field_slider_teaserbody\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>Recommend marsad.tn with your social network</p>\',
            \'format\' => \'managed_content\',
            \'safe_value\' => "<p>Recommend marsad.tn with your social network</p>\\n",
          ),
        ),
      ),
      \'field_slider_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'node/4391\',
            \'title\' => \'Recommend marsad.tn\',
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
          \'original\' => \'fr\',
          \'data\' => array(
            \'fr\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'5\',
              \'language\' => \'fr\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1346682738\',
              \'changed\' => \'1346752197\',
            ),
          ),
        ),
      \'webform\' => array(
        \'confirmation\' => \'\',
        \'confirmation_format\' => NULL,
        \'redirect_url\' => \'<confirmation>\',
        \'teaser\' => \'0\',
        \'block\' => \'0\',
        \'allow_draft\' => \'0\',
        \'auto_save\' => \'0\',
        \'submit_notice\' => \'1\',
        \'submit_text\' => \'\',
        \'submit_limit\' => \'-1\',
        \'submit_interval\' => \'-1\',
        \'total_submit_limit\' => \'-1\',
        \'total_submit_interval\' => \'-1\',
        \'status\' => \'1\',
        \'record_exists\' => FALSE,
        \'roles\' => array(
          \'1\',
          \'2\',
        ),
        \'emails\' => array(),
        \'components\' => array(),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1346752197\',
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
        \'pid\' => \'5\',
        \'source\' => \'node/5\',
        \'alias\' => \'content/recommend-marsadtn-your-social-network\',
        \'language\' => \'fr\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'0\',
      \'title\' => \'A propos\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e5b1ac8a-1f98-85f4-f19a-040777976d02\',
      \'ds_switch\' => \'\',
      \'nid\' => \'6\',
      \'type\' => \'page\',
      \'language\' => \'fr\',
      \'created\' => \'1346752197\',
      \'changed\' => \'1346752197\',
      \'tnid\' => \'5366\',
      \'translate\' => \'0\',
      \'uuid\' => \'daf78845-7197-8224-b521-84dd0a3586a3\',
      \'revision_timestamp\' => \'1346752197\',
      \'revision_uid\' => \'0\',
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
          \'original\' => \'fr\',
          \'data\' => array(
            \'fr\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'6\',
              \'language\' => \'fr\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1346676656\',
              \'changed\' => \'1346752197\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1346752197\',
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
        \'pid\' => \'6\',
        \'source\' => \'node/6\',
        \'alias\' => \'content/propos\',
        \'language\' => \'fr\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
