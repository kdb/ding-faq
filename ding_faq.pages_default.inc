<?php
/**
 * @file
 * ding_faq.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ding_faq_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Ding FAQ',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => NULL,
        'id' => 1,
      ),
    ),
    'relationships' => array(
      3 => array(
        'identifier' => 'Category term',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_ding_faq_category-node-taxonomy_term',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_faq_question' => 'ding_faq_question',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'FAQ
%node:title',
    'panels_breadcrumbs_paths' => 'faq
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd82976d5-f78c-46b3-8d9a-c2ba458d539c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-203b68b0-35f7-4be2-bac3-b300a7e5f01c';
    $pane->panel = 'left_sidebar';
    $pane->type = 'taxonomy_menu';
    $pane->subtype = 'taxonomy_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'slug' => 'faq',
      'default_link_text' => 'All categories',
      'dropdown' => 0,
      'vocabulary' => 'ding_faq_category',
      'base' => '',
      'context' => array(
        0 => 'relationship_entity_from_field:field_ding_faq_category-node-taxonomy_term_1',
        1 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '203b68b0-35f7-4be2-bac3-b300a7e5f01c';
    $display->content['new-203b68b0-35f7-4be2-bac3-b300a7e5f01c'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-203b68b0-35f7-4be2-bac3-b300a7e5f01c';
    $pane = new stdClass();
    $pane->pid = 'new-9585f181-cf01-4270-a7fd-b981246d6e2c';
    $pane->panel = 'main_content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '9585f181-cf01-4270-a7fd-b981246d6e2c';
    $display->content['new-9585f181-cf01-4270-a7fd-b981246d6e2c'] = $pane;
    $display->panels['main_content'][0] = 'new-9585f181-cf01-4270-a7fd-b981246d6e2c';
    $pane = new stdClass();
    $pane->pid = 'new-fb3893c4-f99a-47a1-989f-46b5483382fd';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'fb3893c4-f99a-47a1-989f-46b5483382fd';
    $display->content['new-fb3893c4-f99a-47a1-989f-46b5483382fd'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-fb3893c4-f99a-47a1-989f-46b5483382fd';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-9585f181-cf01-4270-a7fd-b981246d6e2c';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_4';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Ding FAQ',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'entity_bundle:taxonomy_term',
          'settings' => array(
            'type' => array(
              'ding_faq_category' => 'ding_faq_category',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b26aa280-3fc3-47b1-97b3-885d09414f55';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1bc914a1-9fbf-4fda-88e1-f9d0864b6abf';
    $pane->panel = 'left_sidebar';
    $pane->type = 'taxonomy_menu';
    $pane->subtype = 'taxonomy_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'slug' => 'faq',
      'default_link_text' => 'All categories',
      'dropdown' => 0,
      'vocabulary' => 'ding_faq_category',
      'base' => 'faq',
      'context' => array(
        0 => 'argument_term_1',
        1 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1bc914a1-9fbf-4fda-88e1-f9d0864b6abf';
    $display->content['new-1bc914a1-9fbf-4fda-88e1-f9d0864b6abf'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-1bc914a1-9fbf-4fda-88e1-f9d0864b6abf';
    $pane = new stdClass();
    $pane->pid = 'new-d602fe54-4a87-4a79-8078-74679d881065';
    $pane->panel = 'main_content';
    $pane->type = 'views';
    $pane->subtype = 'ding_faq';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'FAQ for %term:name',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd602fe54-4a87-4a79-8078-74679d881065';
    $display->content['new-d602fe54-4a87-4a79-8078-74679d881065'] = $pane;
    $display->panels['main_content'][0] = 'new-d602fe54-4a87-4a79-8078-74679d881065';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-d602fe54-4a87-4a79-8078-74679d881065';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_4'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ding_faq_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'faq';
  $page->task = 'page';
  $page->admin_title = 'FAQ';
  $page->admin_description = '';
  $page->path = 'faq';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'FAQ',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_faq_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'faq';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Ord i ordforråd',
        'keyword' => 'taxonomy_term',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '2967',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f2412742-db92-4838-b255-e454432f300d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b5fdb648-a350-423f-a311-5ad77fa19d96';
    $pane->panel = 'left_sidebar';
    $pane->type = 'taxonomy_menu';
    $pane->subtype = 'taxonomy_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'slug' => 'faq',
      'default_link_text' => 'All categories',
      'dropdown' => 0,
      'vocabulary' => 'ding_faq_category',
      'base' => '',
      'context' => array(
        0 => 'context_entity:taxonomy_term_1',
        1 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b5fdb648-a350-423f-a311-5ad77fa19d96';
    $display->content['new-b5fdb648-a350-423f-a311-5ad77fa19d96'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-b5fdb648-a350-423f-a311-5ad77fa19d96';
    $pane = new stdClass();
    $pane->pid = 'new-ea388827-95e4-4374-8ed2-a9915560a418';
    $pane->panel = 'main_content';
    $pane->type = 'views';
    $pane->subtype = 'ding_faq';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'FAQ',
      'context' => array(
        0 => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ea388827-95e4-4374-8ed2-a9915560a418';
    $display->content['new-ea388827-95e4-4374-8ed2-a9915560a418'] = $pane;
    $display->panels['main_content'][0] = 'new-ea388827-95e4-4374-8ed2-a9915560a418';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-ea388827-95e4-4374-8ed2-a9915560a418';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['faq'] = $page;

  return $pages;

}
