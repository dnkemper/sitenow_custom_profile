<?php
/**
 * @file
 * ovpred_impact_data_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ovpred_impact_data_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ovpred_impact_data_primary';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Impact Data - Primary';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'impact-data-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'impact-data-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Entityqueue: Node Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'ovpred_impact_data_primary' => 'ovpred_impact_data_primary',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Entityqueue: Node Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
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
    'ovpred_impact_data' => 'ovpred_impact_data',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'impact_data_primary');
  $handler->display->display_options['pane_category']['name'] = 'OVPRED';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['ovpred_impact_data_primary'] = $view;

  return $export;
}
