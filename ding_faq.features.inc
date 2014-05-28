<?php
/**
 * @file
 * ding_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ding_faq_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ding_faq_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ding_faq_node_info() {
  $items = array(
    'ding_faq_question' => array(
      'name' => t('FAQ Question'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
