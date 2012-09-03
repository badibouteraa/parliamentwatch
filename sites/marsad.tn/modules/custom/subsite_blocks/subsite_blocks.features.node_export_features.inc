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
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'Newsletter subscription\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1981f291-a63a-b104-8dc6-b7166cdc3ac9\',
      \'ds_switch\' => \'\',
      \'nid\' => \'7\',
      \'type\' => \'webform\',
      \'language\' => \'de\',
      \'created\' => \'1346688699\',
      \'changed\' => \'1346688986\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'06cba1c7-3cc7-75d4-6de3-1ff89e1ceae1\',
      \'revision_timestamp\' => \'1346688986\',
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
              \'entity_id\' => \'7\',
              \'language\' => \'de\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1346688699\',
              \'changed\' => \'1346688699\',
            ),
          ),
        ),
      \'webform\' => array(
        \'nid\' => \'7\',
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
            \'nid\' => 7,
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
            \'nid\' => 7,
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
      \'last_comment_timestamp\' => \'1346688699\',
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
        \'pid\' => \'736\',
        \'source\' => \'node/7\',
        \'alias\' => \'content/newsletter-subscription\',
        \'language\' => \'de\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'1\',
      \'title\' => \'حول المرصد\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9c5b3d75-5ab5-4b14-b967-03c105cdba68\',
      \'ds_switch\' => \'\',
      \'nid\' => \'3\',
      \'type\' => \'page\',
      \'language\' => \'ar\',
      \'created\' => \'1346676997\',
      \'changed\' => \'1346677495\',
      \'tnid\' => \'5366\',
      \'translate\' => \'0\',
      \'uuid\' => \'19190522-fd2e-6994-a51b-7cdbf9e176a4\',
      \'revision_timestamp\' => \'1346677495\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'ar\' => array(
          array(
            \'value\' => "<h2><span>المشروع</span></h2>\\r\\n<p>المشروع هو \\"مرصد\\" للمجلس التأسيسي بتونس. هدفه تتبع سير صياغة الدستور و تيسير الإطلاع عليه و جعله في المتناول.</p>\\r\\n<p>أهداف هذا المشروع هي التمكين من الحصول على المعلومة، الدعوة إلى ترسيخ ديمقراطية إشراكية وإرساء نظام الشفافية.</p>\\r\\n<p>\\"المرصد\\" سوف يعمل على التعريف بأعضاء المجلس التأسيسي للعموم من خلال نشر سيرهم الذاتية و من خلال لقاءت خاصة. \\"المرصد\\" سوف يتتبع اقتراحاتهم و مدى الإنضباط والجدية في عملهم .</p>\\r\\n<p>و \\"المرصد\\" سيحاول الخروج بالمجلس التأسيسي من دوائر النقاش المغلقة لفتحها للمواطنين وتمكينهم من الحصول على ملكية دستورهم.</p>\\r\\n<p>\\"المرصد\\" هو أول مشروع لمنظمة \\"<a href=\\"http://www.albawsala.com/\\">آلبوصلة</a>\\"، منظمة مستقلة وغير حزبية.</p>\\r\\n<p>نتقدم بالشكر لأعضاء المجلس اللذين ساعدوا على جعل هذا المشروع ممكناً و كل عضو ساهم بالإستجابة لطلباتنا إو اسئلتنا.</p>\\r\\n<p>كل المعلومات الرسمية مأخوذة من الموقع الرسمي للمجلس الوطني التأسيسي&nbsp;<a href=\\"http://www.anc.tn/\\">www.anc.tn</a></p>\\r\\n<ul>\\r\\n<li>من نحن</li>\\r\\n<li><a href=\\"http://tn.parliamentwatch.org/ar/node/5379\\" target=\\"_self\\">قواعد السلوك</a></li>\\r\\n<li><a href=\\"http://tn.parliamentwatch.org/ar/node/5381\\" target=\\"_self\\">أسئلة و أجوبة</a></li>\\r\\n</ul>",
            \'summary\' => \'\',
            \'format\' => \'managed_content\',
            \'safe_value\' => "<h2><span>المشروع</span></h2>\\n<p>المشروع هو \\"مرصد\\" للمجلس التأسيسي بتونس. هدفه تتبع سير صياغة الدستور و تيسير الإطلاع عليه و جعله في المتناول.</p>\\n<p>أهداف هذا المشروع هي التمكين من الحصول على المعلومة، الدعوة إلى ترسيخ ديمقراطية إشراكية وإرساء نظام الشفافية.</p>\\n<p>\\"المرصد\\" سوف يعمل على التعريف بأعضاء المجلس التأسيسي للعموم من خلال نشر سيرهم الذاتية و من خلال لقاءت خاصة. \\"المرصد\\" سوف يتتبع اقتراحاتهم و مدى الإنضباط والجدية في عملهم .</p>\\n<p>و \\"المرصد\\" سيحاول الخروج بالمجلس التأسيسي من دوائر النقاش المغلقة لفتحها للمواطنين وتمكينهم من الحصول على ملكية دستورهم.</p>\\n<p>\\"المرصد\\" هو أول مشروع لمنظمة \\"<a href=\\"http://www.albawsala.com/\\">آلبوصلة</a>\\"، منظمة مستقلة وغير حزبية.</p>\\n<p>نتقدم بالشكر لأعضاء المجلس اللذين ساعدوا على جعل هذا المشروع ممكناً و كل عضو ساهم بالإستجابة لطلباتنا إو اسئلتنا.</p>\\n<p>كل المعلومات الرسمية مأخوذة من الموقع الرسمي للمجلس الوطني التأسيسي <a href=\\"http://www.anc.tn/\\">www.anc.tn</a></p>\\n<ul>\\n<li>من نحن</li>\\n<li><a href=\\"http://tn.parliamentwatch.org/ar/node/5379\\" target=\\"_self\\">قواعد السلوك</a></li>\\n<li><a href=\\"http://tn.parliamentwatch.org/ar/node/5381\\" target=\\"_self\\">أسئلة و أجوبة</a></li>\\n</ul>\\n",
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
          \'original\' => \'ar\',
          \'data\' => array(
            \'ar\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'3\',
              \'language\' => \'ar\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1346676997\',
              \'changed\' => \'1346676997\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1346676997\',
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
        \'pid\' => \'732\',
        \'source\' => \'node/3\',
        \'alias\' => \'about\',
        \'language\' => \'ar\',
      ),
      \'menu\' => array(
        \'link_title\' => \'المرصد\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'8\',
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
      \'uid\' => \'1\',
      \'title\' => \'Boris Hekele\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'df1fa387-213d-0e54-4929-7f3750dd12eb\',
      \'ds_switch\' => \'\',
      \'nid\' => \'4\',
      \'type\' => \'trustee\',
      \'language\' => \'fr\',
      \'created\' => \'1346682248\',
      \'changed\' => \'1346682248\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5b1fe91b-296d-1774-c925-a8e28dc9b819\',
      \'revision_timestamp\' => \'1346682248\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'fr\' => array(
          array(
            \'value\' => "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.   \\r\\n\\r\\nDuis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat.   \\r\\n\\r\\nUt wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi.   \\r\\n\\r\\nNam liber tempor cum soluta nobis eleifend option congue nihil imperdiet doming id quod mazim placerat facer",
            \'summary\' => \'\',
            \'format\' => \'managed_content\',
            \'safe_value\' => "<p> Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.   </p>\\n<p>Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat.   </p>\\n<p>Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi.   </p>\\n<p>Nam liber tempor cum soluta nobis eleifend option congue nihil imperdiet doming id quod mazim placerat facer </p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_trustee_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'230\',
            \'alt\' => NULL,
            \'title\' => NULL,
            \'width\' => \'800\',
            \'height\' => \'1200\',
            \'uid\' => \'1\',
            \'filename\' => \'team_hekele.jpg\',
            \'uri\' => \'public://trustees/team_hekele.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'283126\',
            \'status\' => \'1\',
            \'timestamp\' => \'1346682206\',
            \'type\' => \'image\',
            \'uuid\' => \'6b9a0475-48c7-2564-45ee-357082cf5909\',
            \'field_image_copyright\' => array(),
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'800\',
              \'height\' => \'1200\',
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
              \'created\' => \'1346682248\',
              \'changed\' => \'1346682248\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1346682248\',
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
        \'pid\' => \'733\',
        \'source\' => \'node/4\',
        \'alias\' => \'content/boris-hekele\',
        \'language\' => \'fr\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'1\',
      \'title\' => \'Subscribe to newsletter of marsad.tn\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'1\',
      \'vuuid\' => \'69fb6a64-7705-aa54-099b-14e178ea6826\',
      \'ds_switch\' => \'\',
      \'nid\' => \'6\',
      \'type\' => \'slider_item\',
      \'language\' => \'fr\',
      \'created\' => \'1346682754\',
      \'changed\' => \'1346690983\',
      \'tnid\' => \'5344\',
      \'translate\' => \'0\',
      \'uuid\' => \'7fdc23b1-e28b-87f4-3973-c8c9d5e9e718\',
      \'revision_timestamp\' => \'1346690983\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'fr\' => array(
          array(
            \'value\' => \'Stay informed and receive regular updates from marsad.tn\',
            \'summary\' => \'\',
            \'format\' => \'managed_content\',
            \'safe_value\' => "<p> Stay informed and receive regular updates from marsad.tn </p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
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
              \'entity_id\' => \'6\',
              \'language\' => \'fr\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1346682754\',
              \'changed\' => \'1346682754\',
            ),
          ),
        ),
      \'webform\' => array(
        \'nid\' => \'6\',
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
            \'nid\' => 6,
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
            \'nid\' => 6,
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
      \'last_comment_timestamp\' => \'1346682754\',
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
        \'pid\' => \'735\',
        \'source\' => \'node/6\',
        \'alias\' => \'content/subscribe-newsletter-marsadtn\',
        \'language\' => \'fr\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'1\',
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
      \'created\' => \'1346682738\',
      \'changed\' => \'1346683920\',
      \'tnid\' => \'5345\',
      \'translate\' => \'0\',
      \'uuid\' => \'cf61c186-6d0b-b284-1d16-0833f641f89c\',
      \'revision_timestamp\' => \'1346683920\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'fr\' => array(
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
              \'changed\' => \'1346682738\',
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
      \'last_comment_timestamp\' => \'1346682738\',
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
        \'pid\' => \'734\',
        \'source\' => \'node/5\',
        \'alias\' => \'content/recommend-marsadtn-your-social-network\',
        \'language\' => \'fr\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'A propos\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e5b1ac8a-1f98-85f4-f19a-040777976d02\',
      \'ds_switch\' => \'\',
      \'nid\' => \'2\',
      \'type\' => \'page\',
      \'language\' => \'fr\',
      \'created\' => \'1346676656\',
      \'changed\' => \'1346677192\',
      \'tnid\' => \'5366\',
      \'translate\' => \'0\',
      \'uuid\' => \'daf78845-7197-8224-b521-84dd0a3586a3\',
      \'revision_timestamp\' => \'1346677192\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'fr\' => array(
          array(
            \'value\' => "<h2><strong>Le Projet</strong></h2>\\r\\n<p>« Marsad » est l’observatoire de l’assemblée constituante tunisienne. Il a pour but d’accompagner l’écriture de la constitution en la rendant plus accessible.</p>\\r\\n<p>Les objectifs de ce projet sont de faciliter l’accès à l’information, plaider pour une démocratie participative et d’instaurer la règle de transparence.</p>\\r\\n<p>« Marsad » œuvrera pour faire connaître les députés au grand public en publiant leurs biographies ainsi que des interviews, il suivra leur rigueur de travail et leurs propositions. « Marsad » essayera de sortir les débats du cercle fermé des commissions pour les ouvrir aux citoyens et leur permettre de s’approprier leur constitution.</p>\\r\\n<p>« Marsad » est le premier projet de l’organisation «&nbsp;<a href=\\"http://www.albawsala.com/\\">Al Bawsala</a>&nbsp;» en coopération avec « <a href=\\"http://www.abgeordnetenwatch.de/\\" target=\\"_blank\\">ParliamentWatch</a>&nbsp;». « Marsad »&nbsp;est financé par&nbsp;«&nbsp;Media In Coorporation and Transition&nbsp;» (<a href=\\"http://www.mict-international.org/\\" target=\\"_blank\\">MICT</a>), organisation soutenue par le ministère allemend des affaires étrangères. Les opinions exprimés sur « Marsad »&nbsp;n\'engagent que leurs auteurs.</p>\\r\\n<p>Nous remercions les élus qui nous ont aidés à rendre ce projet possible ainsi que ceux qui ont répondu favorablement à nos questions et sollicitations.</p>\\r\\n<p>Toutes les informations officielles sont publiée par l\'ANC sur le site officiel&nbsp;<a href=\\"http://www.anc.tn/\\">www.anc.tn</a></p>\\r\\n<ul>\\r\\n<li>Qui sommes nous?</li>\\r\\n<li><a href=\\"http://tn.parliamentwatch.org/fr/node/5378\\" target=\\"_self\\">Code de conduite</a></li>\\r\\n<li><a href=\\"http://tn.parliamentwatch.org/fr/node/5380\\" target=\\"_self\\">FAQ</a></li>\\r\\n</ul>",
            \'summary\' => \'\',
            \'format\' => \'managed_content\',
            \'safe_value\' => "<h2><strong>Le Projet</strong></h2>\\n<p>« Marsad » est l’observatoire de l’assemblée constituante tunisienne. Il a pour but d’accompagner l’écriture de la constitution en la rendant plus accessible.</p>\\n<p>Les objectifs de ce projet sont de faciliter l’accès à l’information, plaider pour une démocratie participative et d’instaurer la règle de transparence.</p>\\n<p>« Marsad » œuvrera pour faire connaître les députés au grand public en publiant leurs biographies ainsi que des interviews, il suivra leur rigueur de travail et leurs propositions. « Marsad » essayera de sortir les débats du cercle fermé des commissions pour les ouvrir aux citoyens et leur permettre de s’approprier leur constitution.</p>\\n<p>« Marsad » est le premier projet de l’organisation « <a href=\\"http://www.albawsala.com/\\">Al Bawsala</a> » en coopération avec « <a href=\\"http://www.abgeordnetenwatch.de/\\" target=\\"_blank\\">ParliamentWatch</a> ». « Marsad » est financé par « Media In Coorporation and Transition » (<a href=\\"http://www.mict-international.org/\\" target=\\"_blank\\">MICT</a>), organisation soutenue par le ministère allemend des affaires étrangères. Les opinions exprimés sur « Marsad » n\'engagent que leurs auteurs.</p>\\n<p>Nous remercions les élus qui nous ont aidés à rendre ce projet possible ainsi que ceux qui ont répondu favorablement à nos questions et sollicitations.</p>\\n<p>Toutes les informations officielles sont publiée par l\'ANC sur le site officiel <a href=\\"http://www.anc.tn/\\">www.anc.tn</a></p>\\n<ul>\\n<li>Qui sommes nous?</li>\\n<li><a href=\\"http://tn.parliamentwatch.org/fr/node/5378\\" target=\\"_self\\">Code de conduite</a></li>\\n<li><a href=\\"http://tn.parliamentwatch.org/fr/node/5380\\" target=\\"_self\\">FAQ</a></li>\\n</ul>\\n",
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
          \'original\' => \'fr\',
          \'data\' => array(
            \'fr\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'2\',
              \'language\' => \'fr\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1346676656\',
              \'changed\' => \'1346676656\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1346676656\',
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
        \'pid\' => \'731\',
        \'source\' => \'node/2\',
        \'alias\' => \'about\',
        \'language\' => \'fr\',
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
)',
);
  return $node_export;
}
