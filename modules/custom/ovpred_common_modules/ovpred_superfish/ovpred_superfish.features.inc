<?php
/**
 * @file
 * ovpred_superfish.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ovpred_superfish_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
