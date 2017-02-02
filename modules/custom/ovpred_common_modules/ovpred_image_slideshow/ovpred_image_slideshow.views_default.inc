<?php
/**
 * @file
 * ovpred_image_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ovpred_image_slideshow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ovpred_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'OVPRED Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_eq_file_entityqueue_subqueue']['id'] = 'reverse_eq_file_entityqueue_subqueue';
  $handler->display->display_options['relationships']['reverse_eq_file_entityqueue_subqueue']['table'] = 'file_managed';
  $handler->display->display_options['relationships']['reverse_eq_file_entityqueue_subqueue']['field'] = 'reverse_eq_file_entityqueue_subqueue';
  $handler->display->display_options['relationships']['reverse_eq_file_entityqueue_subqueue']['required'] = TRUE;
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['label'] = '';
  $handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered']['file_view_mode'] = 'ovpred_slideshow_image';
  /* Sort criterion: Entityqueue: File Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['ovpred_slideshow'] = $view;

  return $export;
}
