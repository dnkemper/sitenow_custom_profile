<?php

/**
 * @file
 * Theme and preprocess functions for pages.
 */

/**
 * Implements template_preprocess_page().
 */
function engineering_preprocess_page(&$vars) {
  // Add a grid definitions for '.main-content' regions.
  if (!empty($vars['page']['sidebar'])) {
    $vars['page']['content']['#wrapper_classes'][] = 'col-md-8';
    $vars['page']['sidebar']['#wrapper_classes'][] = 'col-md-4';
  }
  else {
    $vars['page']['content']['#wrapper_classes'][] = 'col-md-12';
  }

  // If we are on the front page unset the title.
  if ($vars['is_front'] == TRUE) {
    drupal_set_title('');
  }
}

/**
 * Implements template_process_page().
 */
function engineering_process_page(&$vars) {
  $vars['content-classes'][] = 'main-content';

  // If there is no container set OR it's set to true.
  if (!isset($vars['container']) || $vars['container'] == TRUE) {
    // Add a container to '.main-content'.
    $vars['content-classes'][] = 'container-smooth';
  }

  // Add classes for the main_wrapper.
  $vars['content_classes'] = implode(' ', $vars['content-classes']);

  // Move system_main actions to print at the page level.
  if (isset($vars['page']['content']['system_main']['actions'])) {
    $vars['action_links'][] = $vars['page']['content']['system_main']['actions'];
    unset($vars['page']['content']['system_main']['actions']);
  }

  // Remove Login action links for user page.
  $args = arg();
  if ($args[0] == 'user' && (count($args) == 1) && $vars['logged_in'] == FALSE) {
    unset($vars['action_links'][0]);
  }
}
