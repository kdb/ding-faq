<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ding_faq_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ding_faq_node_info() {
  $items = array(
    'faq_question' => array(
      'name' => t('FAQ question'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'has_body' => '1',
      'body_label' => t('Brødtekst'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_nodequeue_export_features_default_settings().
 */
function ding_faq_nodequeue_export_features_default_settings() {
 $nodequeue_export = array();

 $nodequeue_export['ding_faq_promoted'] = array(
   'name' => 'ding_faq_promoted',
   'title' => 'Promoted FAQ questions',
   'subqueue_title' => 'Promoted FAQ questions',
   'size' => '10',
   'reverse' => '0',
   'link' => 'Promote to front page',
   'link_remove' => 'Remove to front page',
   'owner' => 'nodequeue',
   'roles' => array(),
   'types' => array(
     '0' => 'faq_question',
   ),
   'reference' => '0',
   'i18n' => '0',
   'show_in_links' => '1',
   'show_in_tab' => '1',
   'show_in_ui' => '1',
   'new' => TRUE,
 );
 return $nodequeue_export;
}

/**
 * Implementation of hook_rules_defaults().
 */
function ding_faq_rules_defaults() {
  return array(
    'rules' => array(
      'rules_ding_faq_promoted_nodequeue_updated' => array(
        '#type' => 'rule',
        '#set' => 'event_nodequeue_saved',
        '#label' => 'Ding! FAQ promoted nodequeue updated',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'ding_faq',
          '1' => 'FAQ',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'queues' => array(
                '6' => '6',
              ),
              '#argument map' => array(
                'nodequeue' => 'nodequeue',
              ),
            ),
            '#name' => 'nodequeue_rules_condition_belongs_to_nodequeue',
            '#info' => array(
              'label' => 'Queue is “Promoted FAQ questions”',
              'label callback' => FALSE,
              'module' => 'Nodequeue',
              'arguments' => array(
                'nodequeue' => array(
                  'type' => 'nodequeue',
                  'label' => 'Nodekø',
                ),
              ),
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '1' => array(
            '#info' => array(
              'label' => 'Clear the cache of the FAQ question list view.',
              'label callback' => FALSE,
              'arguments' => array(
                'view' => array(
                  'type' => 'string',
                  'label' => 'Vis',
                  'description' => 'Specify the view you want to clear.',
                ),
              ),
              'module' => 'Cache Actions',
            ),
            '#name' => 'cache_actions_action_clear_views_cache',
            '#settings' => array(
              'view' => 'faq_question_list',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'view' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'rules_faq_question_deleted' => array(
        '#type' => 'rule',
        '#set' => 'event_node_delete',
        '#label' => 'faq_question_deleted',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'FAQ',
          '1' => 'ding_faq',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'faq_question' => 'faq_question',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Deleted content is FAQ question',
              'label callback' => FALSE,
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Clear the cache of a faq_question_list view.',
              'label callback' => FALSE,
              'arguments' => array(
                'view' => array(
                  'type' => 'string',
                  'label' => 'View',
                  'description' => 'Specify the view you want to clear.',
                ),
              ),
              'module' => 'Cache Actions',
            ),
            '#name' => 'cache_actions_action_clear_views_cache',
            '#settings' => array(
              'view' => 'faq_question_list',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'view' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'rules_faq_question_saved' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'faq_question_saved',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'FAQ',
          '1' => 'ding_faq',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#info' => array(
              'label' => 'Created content is FAQ question',
              'label callback' => FALSE,
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_type',
            '#settings' => array(
              'type' => array(
                'faq_question' => 'faq_question',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'view' => 'faq_question_list',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'view' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#name' => 'cache_actions_action_clear_views_cache',
            '#info' => array(
              'label' => 'Clear the cache of a faq_question_list view.',
              'label callback' => FALSE,
              'arguments' => array(
                'view' => array(
                  'type' => 'string',
                  'label' => 'View',
                  'description' => 'Specify the view you want to clear.',
                ),
              ),
              'module' => 'Cache Actions',
            ),
          ),
        ),
        '#version' => 6003,
      ),
      'rules_faq_question_updated' => array(
        '#type' => 'rule',
        '#set' => 'event_node_update',
        '#label' => 'faq_question_updated',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'FAQ',
          '1' => 'ding_faq',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'faq_question' => 'faq_question',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Updated content is FAQ question',
              'label callback' => FALSE,
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Clear the cache of a eresource_list view.',
              'label callback' => FALSE,
              'arguments' => array(
                'view' => array(
                  'type' => 'string',
                  'label' => 'View',
                  'description' => 'Specify the view you want to clear.',
                ),
              ),
              'module' => 'Cache Actions',
            ),
            '#name' => 'cache_actions_action_clear_views_cache',
            '#settings' => array(
              'view' => 'faq_question_list',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'view' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}

/**
 * Implementation of hook_views_api().
 */
function ding_faq_views_api() {
  return array(
    'api' => '2',
  );
}
