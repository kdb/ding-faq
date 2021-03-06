<?php

/**
 * Implementation of hook_views_default_views().
 */
function ding_faq_views_default_views() {
  $views = array();

  // Exported view: faq_question_list
  $view = new view;
  $view->name = 'faq_question_list';
  $view->description = 'List of FAQ questions';
  $view->tag = 'ding_faq';
  $view->base_table = 'node';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Tilsidesæt',
      ),
    ),
    'field_image_fid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => '120_120_linked',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_image_fid',
      'table' => 'node_data_field_image',
      'field' => 'field_image_fid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_teaser_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'plain',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_teaser_value',
      'table' => 'node_data_field_teaser',
      'field' => 'field_teaser_value',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'title' => array(
      'order' => 'ASC',
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'faq_question' => 'faq_question',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'rules',
  ));
  $handler->override_option('title', 'FAQ');
  $handler->override_option('empty', 'Ingen FAQs fundet.');
  $handler->override_option('empty_format', '1');
  $handler->override_option('use_pager', '0');
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'type' => 'ul',
  ));
  $handler = $view->new_display('panel_pane', 'FAQ question overview pane', 'panel_pane_1');
  $handler->override_option('arguments', array(
    'tid' => array(
      'default_action' => 'ignore',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'Alle',
      'title' => 'FAQ for %1',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'numeric',
      'validate_fail' => 'empty',
      'break_phrase' => 0,
      'add_table' => 0,
      'require_value' => 0,
      'reduce_duplicates' => 0,
      'set_breadcrumb' => 0,
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'campaign' => 0,
        'article' => 0,
        'feature' => 0,
        'profile' => 0,
        'event' => 0,
        'library' => 0,
        'page' => 0,
        'topic' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        6 => 0,
        4 => 0,
        5 => 0,
        7 => 0,
        8 => 0,
        1 => 0,
        2 => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
      'default_taxonomy_tid_term_page' => 0,
      'default_taxonomy_tid_node' => 0,
      'default_taxonomy_tid_limit' => 0,
      'default_taxonomy_tid_vids' => array(
        6 => 0,
        4 => 0,
        5 => 0,
        7 => 0,
        8 => 0,
        1 => 0,
        2 => 0,
      ),
      'validate_argument_node_flag_name' => '*relationship*',
      'validate_argument_node_flag_test' => 'flaggable',
      'validate_argument_node_flag_id_type' => 'id',
      'validate_argument_user_flag_name' => '*relationship*',
      'validate_argument_user_flag_test' => 'flaggable',
      'validate_argument_user_flag_id_type' => 'id',
    ),
  ));
  $handler->override_option('use_pager', '1');
  $handler->override_option('row_plugin', 'node');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'build_mode' => 'teaser',
    'links' => 1,
    'comments' => 0,
  ));
  $handler->override_option('pane_title', 'FAQ');
  $handler->override_option('pane_description', '');
  $handler->override_option('pane_category', array(
    'name' => 'View panes',
    'weight' => 0,
  ));
  $handler->override_option('allow', array(
    'use_pager' => FALSE,
    'items_per_page' => FALSE,
    'offset' => FALSE,
    'link_to_view' => FALSE,
    'more_link' => FALSE,
    'path_override' => FALSE,
    'title_override' => FALSE,
    'exposed_form' => FALSE,
    'fields_override' => FALSE,
  ));
  $handler->override_option('argument_input', array(
    'tid' => array(
      'type' => 'context',
      'context' => 'term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taksonomi: Term ID',
    ),
  ));
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', '1');
  $handler = $view->new_display('panel_pane', 'Promoted questions title list', 'panel_pane_2');
  $handler->override_option('relationships', array(
    'nodequeue_rel_queue_name' => array(
      'label' => 'queue',
      'required' => 0,
      'limit' => 1,
      'names' => array(
        'ding_faq_promoted' => 'ding_faq_promoted',
        'ding_tabroll_frontpage_queue' => 0,
      ),
      'id' => 'nodequeue_rel_queue_name',
      'table' => 'node',
      'field' => 'nodequeue_rel_queue_name',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Tilsidesæt',
      ),
    ),
  ));
  $handler->override_option('sorts', array(
    'position' => array(
      'order' => 'ASC',
      'id' => 'position',
      'table' => 'nodequeue_nodes',
      'field' => 'position',
      'relationship' => 'nodequeue_rel_queue_name',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'in_queue' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'in_queue',
      'table' => 'nodequeue_nodes',
      'field' => 'in_queue',
      'relationship' => 'nodequeue_rel_queue_name',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
  ));
  $handler->override_option('title', 'Promoted FAQs');
  $handler->override_option('footer', '<a class="more-link" href="/faq">Mere</a>');
  $handler->override_option('footer_format', '3');
  $handler->override_option('footer_empty', 0);
  $handler->override_option('empty', '');
  $handler->override_option('pane_title', 'Promoted FAQ question list');
  $handler->override_option('pane_description', '');
  $handler->override_option('pane_category', array(
    'name' => 'View panes',
    'weight' => 0,
  ));
  $handler->override_option('allow', array(
    'use_pager' => FALSE,
    'items_per_page' => FALSE,
    'offset' => FALSE,
    'link_to_view' => FALSE,
    'more_link' => FALSE,
    'path_override' => FALSE,
    'title_override' => FALSE,
    'exposed_form' => FALSE,
    'fields_override' => FALSE,
  ));
  $handler->override_option('argument_input', array());
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);

  $views[$view->name] = $view;

  return $views;
}
