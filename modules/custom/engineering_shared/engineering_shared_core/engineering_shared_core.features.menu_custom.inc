<?php

/**
 * @file
 * engineering_shared_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function engineering_shared_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-quick-links.
  $menus['menu-quick-links'] = array(
    'menu_name' => 'menu-quick-links',
    'title' => 'Quick Links',
    'description' => '',
  );
  // Exported menu: menu-social-media.
  $menus['menu-social-media'] = array(
    'menu_name' => 'menu-social-media',
    'title' => 'Social Media',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Quick Links');
  t('Social Media');

  return $menus;
}
