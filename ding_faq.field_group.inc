<?php
/**
 * @file
 * ding_faq.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ding_faq_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ding_faq_attachments|node|ding_faq_question|form';
  $field_group->group_name = 'group_ding_faq_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_faq_question';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attachments',
    'weight' => '4',
    'children' => array(
      0 => 'field_ding_faq_files',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ding_faq_attachments|node|ding_faq_question|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ding_faq_categorization|node|ding_faq_question|form';
  $field_group->group_name = 'group_ding_faq_categorization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_faq_question';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '3',
    'children' => array(
      0 => 'field_ding_faq_category',
      1 => 'field_ding_faq_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ding_faq_categorization|node|ding_faq_question|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ding_faq_content|node|ding_faq_question|form';
  $field_group->group_name = 'group_ding_faq_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_faq_question';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Indhold',
    'weight' => '2',
    'children' => array(
      0 => 'field_ding_faq_body',
      1 => 'field_ding_faq_lead',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ding_faq_content|node|ding_faq_question|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ding_faq_images|node|ding_faq_question|form';
  $field_group->group_name = 'group_ding_faq_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_faq_question';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '1',
    'children' => array(
      0 => 'field_ding_faq_list_image',
      1 => 'field_ding_faq_title_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ding_faq_images|node|ding_faq_question|form'] = $field_group;

  return $export;
}
