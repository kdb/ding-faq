<?php
/**
 * @file
 * ding_faq.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ding_faq_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ding_faq';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ding FAQ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Læs mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'news-list-item';
  $handler->display->display_options['style_options']['class'] = 'list news-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_ding_faq_list_image']['id'] = 'field_ding_faq_list_image';
  $handler->display->display_options['fields']['field_ding_faq_list_image']['table'] = 'field_data_field_ding_faq_list_image';
  $handler->display->display_options['fields']['field_ding_faq_list_image']['field'] = 'field_ding_faq_list_image';
  $handler->display->display_options['fields']['field_ding_faq_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_faq_list_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_faq_list_image']['element_class'] = 'news-image-wrapper';
  $handler->display->display_options['fields']['field_ding_faq_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_faq_list_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_faq_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_faq_list_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_ding_faq_list_image']['settings'] = array(
    'image_link' => 'content',
    'styles' => array(
      'breakpoint_1' => '768',
      'style_1' => 'ding_list_medium',
      'breakpoint_2' => '500',
      'style_2' => 'ding_list_small',
      'max_style' => 'ding_list_large',
      'fallback_style' => 'ding_list_large',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-heading';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_ding_faq_category']['id'] = 'field_ding_faq_category';
  $handler->display->display_options['fields']['field_ding_faq_category']['table'] = 'field_data_field_ding_faq_category';
  $handler->display->display_options['fields']['field_ding_faq_category']['field'] = 'field_ding_faq_category';
  $handler->display->display_options['fields']['field_ding_faq_category']['label'] = '';
  $handler->display->display_options['fields']['field_ding_faq_category']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ding_faq_category']['element_class'] = 'news-label';
  $handler->display->display_options['fields']['field_ding_faq_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_faq_category']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_faq_category']['element_wrapper_class'] = 'news-sub-heading';
  $handler->display->display_options['fields']['field_ding_faq_category']['element_default_classes'] = FALSE;
  /* Field: Content: Lead */
  $handler->display->display_options['fields']['field_ding_faq_lead']['id'] = 'field_ding_faq_lead';
  $handler->display->display_options['fields']['field_ding_faq_lead']['table'] = 'field_data_field_ding_faq_lead';
  $handler->display->display_options['fields']['field_ding_faq_lead']['field'] = 'field_ding_faq_lead';
  $handler->display->display_options['fields']['field_ding_faq_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_faq_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_faq_lead']['element_class'] = 'news-list-content';
  $handler->display->display_options['fields']['field_ding_faq_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_faq_lead']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'news-link';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Læs mere';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'ding_faq_category' => 'ding_faq_category',
  );
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'empty';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_faq_question' => 'ding_faq_question',
  );
  $translatables['ding_faq'] = array(
    t('Master'),
    t('Læs mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Alle'),
  );
  $export['ding_faq'] = $view;

  return $export;
}
