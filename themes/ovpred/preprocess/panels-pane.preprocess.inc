<?php
/**
 * @file
 * Preprocess panels color preset and theme hook suggestions.
 */

/**
 * Implements hook_preprocess_panels_pane().
 */
function ovpred_preprocess_panels_pane(&$variables) {

  if(isset($variables['pane']->style['style'])) {
    // Wrapper style.
    if($variables['pane']->style['style'] === 'wrapper') {
      $variables['theme_hook_suggestions'][] = 'panels_pane__wrapper';
      $variables['attributes_array']['class'][] = $variables['pane']->style['settings']['preset_color'];
    }
    // Wrapper + secondary content.
    if($variables['pane']->style['style'] === 'splitscreen') {
      $variables['theme_hook_suggestions'][] = 'panels_pane__splitscreen';
      $variables['attributes_array']['class'][] = $variables['pane']->style['settings']['preset_color'];
      $variables['attributes_array']['class'][] = $variables['pane']->style['style'];
      if($variables['pane']->style['settings']['secondary_title']) {
        $variables['secondary_content']['secondary_title'] = array(
          '#prefix' => '<h3>',
          '#markup' => check_plain($variables['pane']->style['settings']['secondary_title']),
          '#suffix' => '</h3>',
        );
      }
      if($variables['pane']->style['settings']['secondary_textarea']) {
        $variables['secondary_content']['secondary_textarea'] = array(
          '#prefix' => '<span>',
          '#markup' => $variables['pane']->style['settings']['secondary_textarea']['value'],
          '#suffix' => '</span>',
        );
      }
    }
  }

  if(isset($variables['pane']->style['style'])) {

  }

  return $variables;
}
