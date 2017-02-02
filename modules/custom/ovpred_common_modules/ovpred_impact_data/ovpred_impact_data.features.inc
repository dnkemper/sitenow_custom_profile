<?php
/**
 * @file
 * ovpred_impact_data.features.inc
 */

/**
 * Implements hook_entityqueue_api().
 */
function ovpred_impact_data_entityqueue_api($module = NULL, $api = NULL) {
  if ($module == "entityqueue" && $api == "entityqueue_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ovpred_impact_data_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ovpred_impact_data_node_info() {
  $items = array(
    'ovpred_impact_data' => array(
      'name' => t('Impact Data'),
      'base' => 'node_content',
      'description' => t('Use <em>impact data</em> for displaying data points throughout the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
