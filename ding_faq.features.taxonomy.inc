<?php
/**
 * @file
 * ding_faq.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ding_faq_taxonomy_default_vocabularies() {
  return array(
    'ding_faq_category' => array(
      'name' => 'FAQ',
      'machine_name' => 'ding_faq_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
