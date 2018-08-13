<?php

/**
 * @file
 * Theme and preprocess functions for menus.
 */

/**
 * Implements theme_menu_tree().
 */
function ovpred_compliance_menu_tree(&$variables) {
  return '<ul class="menu nav nav-pills nav-stacked">' . $variables['tree'] . '</ul>';
}
