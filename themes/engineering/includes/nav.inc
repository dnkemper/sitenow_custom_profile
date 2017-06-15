<?php

/**
 * @file
 * Theme and preprocess functions for menus.
 */

/**
 * Implements theme_menu_link().
 */
function engineering_menu_link($variables) {
  $element = $variables['element'];
  $sub_menu = '';
  $icon = '';
  $title = $element['#title'];

  if (!empty($element['#below'])) {
    $sub_menu = drupal_render($element['#below']);
    $element['#localized_options']['html'] = TRUE;
    $element['#title'] .= '<span class="caret"></span>';
  }

  // Fix for active class.
  if (($element['#href'] == current_path() || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']) || $element['#localized_options']['language']->language == $language_url->language)) {
    $element['#attributes']['class'][] = 'active';
  }

  // Add active class to li if active trail.
  if (in_array('active-trail', $element['#attributes']['class'])) {
    $element['#attributes']['class'][] = 'active';
  }

  // Add a unique class using the title.
  $title = strip_tags($element['#title']);
  $element['#attributes']['class'][] = 'menu-link-' . drupal_html_class($title);

  switch ($variables['element']['#original_link']['menu_name']) {
    case 'menu-social-media':
      switch ($variables['element']['#original_link']['link_title']) {
        case 'Facebook':
          $icon = '<i class="fa fa-facebook-square" aria-hidden="true"></i>';
          $element['#localized_options']['html'] = TRUE;
          $title = '<span class="menu-link-title sr-only">' . $title . '</span>';
          break;

        case 'Flickr':
          $icon = '<i class="fa fa-flickr" aria-hidden="true"></i>';
          $element['#localized_options']['html'] = TRUE;
          $title = '<span class="menu-link-title sr-only">' . $title . '</span>';
          break;

        case 'Instagram':
          $icon = '<i class="fa fa-instagram" aria-hidden="true"></i>';
          $element['#localized_options']['html'] = TRUE;
          $title = '<span class="menu-link-title sr-only">' . $title . '</span>';
          break;

        case 'LinkedIn':
          $icon = '<i class="fa fa-linkedin-square" aria-hidden="true"></i>';
          $element['#localized_options']['html'] = TRUE;
          $title = '<span class="menu-link-title sr-only">' . $title . '</span>';
          break;

        case 'Twitter':
          $icon = '<i class="fa fa-twitter-square" aria-hidden="true"></i>';
          $element['#localized_options']['html'] = TRUE;
          $title = '<span class="menu-link-title sr-only">' . $title . '</span>';
          break;

        case 'Wordpress':
          $icon = '<i class="fa fa-wordpress" aria-hidden="true"></i>';
          $element['#localized_options']['html'] = TRUE;
          $title = '<span class="menu-link-title sr-only">' . $title . '</span>';
          break;

        case 'YouTube':
          $icon = '<i class="fa fa-youtube-square" aria-hidden="true"></i>';
          $element['#localized_options']['html'] = TRUE;
          $title = '<span class="menu-link-title sr-only">' . $title . '</span>';
          break;

      }
      break;

  }

  $output = l($icon . $title, $element['#href'], $element['#localized_options']);

  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}
