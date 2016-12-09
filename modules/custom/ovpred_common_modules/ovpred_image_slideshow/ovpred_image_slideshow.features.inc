<?php
/**
 * @file
 * ovpred_image_slideshow.features.inc
 */

/**
 * Implements hook_entityqueue_api().
 */
function ovpred_image_slideshow_entityqueue_api($module = NULL, $api = NULL) {
  if ($module == "entityqueue" && $api == "entityqueue_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ovpred_image_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ovpred_image_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ovpred_image_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: ovpred_slideshow.
  $styles['ovpred_slideshow'] = array(
    'name' => 'ovpred_slideshow',
    'label' => 'ovpred_slideshow',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 576,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
