<?php
/**
 * @file
 * ovpred_articles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ovpred_articles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ovpred_articles_image_default_styles() {
  $styles = array();

  // Exported image style: ovpred_article_teaser.
  $styles['ovpred_article_teaser'] = array(
    'label' => 'OVPRED Subsite Article Teaser',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 300,
          'height' => 200,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'ovpred_article_teaser',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ovpred_articles_node_info() {
  $items = array(
    'ovpred_article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use articles for time-sensitive content like news or press releases. This content type and functionality is common across OVPRED sites.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ovpred_article_contact' => array(
      'name' => t('Article Contact'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
