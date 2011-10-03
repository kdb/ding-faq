<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ding_faq_user_default_permissions() {
  $permissions = array();

  // Exported permission: create faq_question content
  $permissions['create faq_question content'] = array(
    'name' => 'create faq_question content',
    'roles' => array(
      '0' => 'super-admin',
    ),
  );

  // Exported permission: delete any faq_question content
  $permissions['delete any faq_question content'] = array(
    'name' => 'delete any faq_question content',
    'roles' => array(
      '0' => 'super-admin',
    ),
  );

  // Exported permission: delete own faq_question content
  $permissions['delete own faq_question content'] = array(
    'name' => 'delete own faq_question content',
    'roles' => array(
      '0' => 'super-admin',
    ),
  );

  // Exported permission: edit any faq_question content
  $permissions['edit any faq_question content'] = array(
    'name' => 'edit any faq_question content',
    'roles' => array(
      '0' => 'super-admin',
    ),
  );

  // Exported permission: edit own faq_question content
  $permissions['edit own faq_question content'] = array(
    'name' => 'edit own faq_question content',
    'roles' => array(
      '0' => 'super-admin',
    ),
  );

  return $permissions;
}
