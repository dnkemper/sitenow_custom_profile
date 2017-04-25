<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "fo_common" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "fo_common".
 * 2. Uncomment the required function to use.
 */

/**
 * Implements template_preprocess_field().
 */
function fo_common_preprocess_field(&$variables, $hook) {
  // Add sub-labels to Records fields with HTML classes for styling.
  switch ($variables['element']['#field_name']) {
    case 'field_record_active':
      $variables['label'] = $variables['label'] . ' <span class="sub-label">(Used during the course of University or departmental operations)</span>';
      break;

    case 'field_record_location':
      $variables['label'] = $variables['label'] . ' <span class="sub-label">(Central Administrative Unit or Local Department)</span>';
      break;

    case 'field_record_inactive':
      $variables['label'] = $variables['label'] . ' <span class="sub-label">(No longer needed during regular course of operations, but retained for legal or business purposes)</span>';
      break;

    case 'field_record_permanent':
      $variables['label'] = $variables['label'] . ' <span class="sub-label">(May be required for legal, historical or business purposes or recommended for records of enduring value)</span>';
      break;
  }
}

/**
 * Implmenets hook_block_view_MODULE_DELTA_alter().
 */
function fo_common_block_view_book_navigation_alter(&$data, $block) {
  // Display the title of the Book Navigation block as plain text, ie not a link.
  $current_bid = 0;
  if ($node = menu_get_object()) {
    $current_bid = empty($node->book['bid']) ? 0 : $node->book['bid'];
  }

  if ($current_bid) {
    // Only display this block when the user is browsing a book.
    $select = db_select('node', 'n')
      ->fields('n', array('title'))
      ->condition('n.nid', $node->book['bid'])
      ->addTag('node_access');
    $title = $select->execute()->fetchField();
    // Only show the block if the user has view access for the top-level node.
    if ($title) {
      $tree = menu_tree_all_data($node->book['menu_name'], $node->book);
      // There should only be one element at the top level.
      $link_data = array_shift($tree);
      $data['subject'] = $link_data['link']['link_title'];
    }
  }
}

/**
 * Implements theme_breadcrumb().
 */
function fo_common_breadcrumb($vars) {
  // Based on adaptivetheme_breadcrumb() with added support for aria landmarks.
  global $theme_key;
  $theme_name = $theme_key;

  $breadcrumb = $vars['breadcrumb'];

  if (at_get_setting('breadcrumb_display', $theme_name) == 1) {

    if (at_get_setting('breadcrumb_home', $theme_name) == 0) {
      array_shift($breadcrumb);
    }

    // Remove the rather pointless breadcrumbs for reset password and user
    // register pages, they link to the page you are on.
    if (arg(0) === 'user' && (arg(1) === 'password' || arg(1) === 'register')) {
      array_pop($breadcrumb);
    }

    if (!empty($breadcrumb)) {

      $separator = filter_xss_admin(at_get_setting('breadcrumb_separator', $theme_name));

      // Push the page title onto the end of the breadcrumb array
      if (at_get_setting('breadcrumb_title', $theme_name) == 1) {
        $breadcrumb[] = '<span class="crumb-title">' . drupal_get_title() . '</span>';
      }

      $class = 'crumb';
      end($breadcrumb);
      $last = key($breadcrumb);

      $output = '';
      if (at_get_setting('breadcrumb_label', $theme_name) == 1) {
        $output = '<div id="breadcrumb" class="clearfix"><nav class="breadcrumb-wrapper with-breadcrumb-label clearfix" role="navigation" aria-labelledby="breadcrumb-label">';
        $output .= '<h2 id="breadcrumb-label" class="breadcrumb-label">' . t('You are here') . '</h2>';
      }
      else {
        $output = '<div id="breadcrumb" class="clearfix"><nav class="breadcrumb-wrapper clearfix" role="navigation" aria-labelledby="breadcrumb-label">';
        $output .= '<h2 id="breadcrumb-label" class="element-invisible">' . t('You are here') . '</h2>';
      }
      $output .= '<ol id="crumbs" class="clearfix">';
      foreach ($breadcrumb as $key => $val) {
        if ($key == $last && count($breadcrumb) != 1) {
          $class = 'crumb crumb-last';
        }
        if ($key == 0) {
          $output .= '<li class="' . $class . ' crumb-first">' . $val . '</li>';
        }
        else {
          $output .= '<li class="' . $class . '"><span class="crumb-sepreator">' . $separator . '</span>' . $val . '</li>';
        }
      }
      $output .= '</ol></nav></div>';

      return $output;
    }
  }
  else {
    return;
  }
}

/**
 * Implements hook_preprocess_block().
 */
function fo_common_preprocess_block(&$vars) {
  // Add `aria-labelledby` to menu/navigation blocks.
  if (isset($vars['attributes_array']['role']) && $vars['attributes_array']['role'] == 'navigation') {
    $vars['title_attributes_array']['class'][] = 'offscreen';
    $vars['title_attributes_array']['id'][] = 'aria-label-' . $vars['block_html_id'];
    $vars['attributes_array']['aria-labelledby'] =  $vars['title_attributes_array']['id'];

    // Remove `element-invisible` class from blocks in menu_bar, which is added by Adpativetheme.
    // @see adaptivetheme/at_core/inc/preprocess.inc
    if ($vars['block']->region === 'menu_bar') {
      unset($vars['title_attributes_array']['class'][array_search('element-invisible', $vars['title_attributes_array']['class'])]);
    }
  }
}
