<?php
/**
 * @file
 * rule_newsletter_subscription.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rule_newsletter_subscription_default_rules_configuration() {
  $items = array();
  $items['rules_newsletter_subscription'] = entity_import('rules_config', '{ "rules_newsletter_subscription" : {
      "LABEL" : "Newsletter subscription",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "php", "comment" ],
      "ON" : [ "comment_insert" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "comment" ], "field" : "field_newsletter_subscribe" } },
        { "AND" : [] },
        { "php_eval" : { "code" : "return [comment:field_newsletter_subscribe] == 1;" } }
      ],
      "DO" : [
        { "drupal_message" : {
            "message" : "newsletter bestellt [comment:field_newsletter_subscribe]",
            "type" : "warning"
          }
        },
        { "php_eval" : { "code" : "echo [comment:mail];" } }
      ]
    }
  }');
  return $items;
}
