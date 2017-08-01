<?php

/**
 * @file
 * engineering_shared_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function engineering_shared_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'articles';
  $page->task = 'page';
  $page->admin_title = 'Articles';
  $page->admin_description = '';
  $page->path = 'news/!tid';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'tid' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          6 => '6',
          4 => '4',
          11 => '11',
          5 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_articles__panel_context_4131f02f-2f19-4402-ac70-16edc90f03a7';
  $handler->task = 'page';
  $handler->subtask = 'articles';
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
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1295c73b-181d-4f51-87b6-46793fb5a8ca';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_articles__panel_context_4131f02f-2f19-4402-ac70-16edc90f03a7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d866744e-5265-4439-8bc4-91c336a21f21';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-article_main';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd866744e-5265-4439-8bc4-91c336a21f21';
  $display->content['new-d866744e-5265-4439-8bc4-91c336a21f21'] = $pane;
  $display->panels['contentmain'][0] = 'new-d866744e-5265-4439-8bc4-91c336a21f21';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-d866744e-5265-4439-8bc4-91c336a21f21';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['articles'] = $page;

  return $pages;

}
