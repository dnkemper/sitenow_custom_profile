<?php

/**
 * @file
 * Helper functions for the engineering_fpp_widgets feature.
 */

/**
 * Helper function to determine if a region can be full_width.
 *
 * @param string $layout
 *   Name of the panel layout.
 * @param string $region
 *   Name of the panel region.
 *
 * @return bool
 *   Retruns true if the region is allowed to be full_width.
 *
 * @see full_width_layouts()
 */
function _allow_full_width_region($layout, $region) {
  $allowed_regions = full_width_layouts();

  if (array_key_exists($layout, $allowed_regions)) {
    if (in_array($region, $allowed_regions[$layout])) {
      return TRUE;
    }
  }
}

/**
 * Static function to hold the allowed full width layouts and regions.
 *
 * @return array
 *   Retruns an array of full width layouts and regions.
 */
function full_width_layouts() {
  static $layouts = array(
    'radix_boxton' => array('contentmain'),
    'radix_brenham' => array('header'),
    'radix_brenham_flipped' => array('header'),
    'radix_geary' => array('header'),
    'radix_harris' => array('header'),
    'radix_moscone_flipped' => array('header', 'footer'),
    'radix_moscone' => array('header', 'footer'),
    'radix_pond' => array('header', 'footer'),
    'radix_rolph' => array('header', 'footer'),
    'radix_sutro_double' => array('header', 'middle', 'footer'),
    'radix_sutro' => array('header', 'footer'),
    'radix_taylor_flipped' => array('header', 'footer'),
    'radix_taylor' => array('header', 'footer'),
    'radix_webb_flipped' => array('header'),
    'radix_webb' => array('header'),
  );

  return $layouts;
}
