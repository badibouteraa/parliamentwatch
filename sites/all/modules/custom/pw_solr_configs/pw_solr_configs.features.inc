<?php
/**
 * @file
 * pw_solr_configs.features.inc
 */

/**
 * Implements hook_views_api().
 */
function pw_solr_configs_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function pw_solr_configs_default_search_api_index() {
  $items = array();
  $items['user_constituency'] = entity_import('search_api_index', '{
    "name" : "user_constituency",
    "machine_name" : "user_constituency",
    "description" : null,
    "server" : "pw_solr",
    "item_type" : "user",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "uid" : { "type" : "integer" },
        "roles" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_user_commitee" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_user_constituency" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_user_fname" : { "type" : "text" },
        "field_user_lname" : { "type" : "text" },
        "field_user_parliament" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_user_party" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" },
        "search_api_aggregation_1" : { "type" : "integer" },
        "search_api_viewed" : { "type" : "text" },
        "field_user_constituency:field_voc_constituency_zip" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_user_commitee:parent" : "field_user_commitee:parent",
              "field_user_commitee:parents_all" : "field_user_commitee:parents_all",
              "field_user_commitee:field_parliament" : "field_user_commitee:field_parliament",
              "field_user_commitee:field_voc_constituency_zip" : "field_user_commitee:field_voc_constituency_zip",
              "field_user_constituency:parent" : "field_user_constituency:parent",
              "field_user_constituency:parents_all" : "field_user_constituency:parents_all",
              "field_user_constituency:field_parliament" : "field_user_constituency:field_parliament",
              "field_user_constituency:field_voc_constituency_zip" : "field_user_constituency:field_voc_constituency_zip",
              "field_user_parliament:parent" : "field_user_parliament:parent",
              "field_user_parliament:parents_all" : "field_user_parliament:parents_all",
              "field_user_parliament:field_parliament" : "field_user_parliament:field_parliament",
              "field_user_parliament:field_voc_constituency_zip" : "field_user_parliament:field_voc_constituency_zip",
              "field_user_party:parent" : "field_user_party:parent",
              "field_user_party:parents_all" : "field_user_party:parents_all",
              "field_user_party:field_parliament" : "field_user_party:field_parliament",
              "field_user_party:field_voc_constituency_zip" : "field_user_party:field_voc_constituency_zip"
            }
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Zip",
                "type" : "fulltext",
                "fields" : [ "field_user_constituency:field_voc_constituency_zip" ],
                "description" : "A Fulltext aggregation of the following fields: Constituency \\u00bb Zipcodes."
              }
            }
          }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "field_user_fname" : true, "field_user_lname" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "field_user_fname" : true, "field_user_lname" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "field_user_fname" : true, "field_user_lname" : true },
            "spaces" : "[^\\\\p{L}\\\\p{N}^\\u0027]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "field_user_fname" : true, "field_user_lname" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function pw_solr_configs_default_search_api_server() {
  $items = array();
  $items['pw_solr'] = entity_import('search_api_server', '{
    "name" : "pw-solr",
    "machine_name" : "pw_solr",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
