<?php

/**
 * @file
 * engineering_shared_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function engineering_shared_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function engineering_shared_core_image_default_styles() {
  $styles = array();

  // Exported image style: 16_9_medium.
  $styles['16_9_medium'] = array(
    'label' => '16:9 Medium',
    'effects' => array(
      1 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 337.5,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 3_2_small.
  $styles['3_2_small'] = array(
    'label' => '3:2 Small',
    'effects' => array(
      2 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 300,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: showcase_hero.
  $styles['showcase_hero'] = array(
    'label' => 'Showcase Hero',
    'effects' => array(
      3 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 2400,
          'height' => 600,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
