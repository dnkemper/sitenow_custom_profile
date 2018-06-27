<?php

/**
 * @file
 * Administrative form functions for sitenow_footer.
 */

/**
 * Page callback: sitenow_footer.
 *
 * @see sitenow_footer_menu()
 */
function sitenow_footer_config_form($form, &$form_state) {
  // Theme.
  $form['theme_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => 'Theme',
    '#collapsible' => TRUE,
  );
  $form['theme_fieldset']['sitenow_footer_theme'] = array(
    '#type' => 'select',
    '#title' => 'Footer Theme',
    '#options' => array(
      'default' => 'Uiowa Standard',
    ),
    '#default_value' => variable_get('sitenow_footer_theme'),
    '#description' => t('Select a theme to use for the footer.'),
  );
  // Lockup.
  $form['logo_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => 'Logo',
    '#collapsible' => TRUE,
  );
  $form['logo_fieldset']['sitenow_footer_logo'] = array(
    '#type'          => 'media',
    '#title'         => 'Image',
    '#description'   => 'Upload an image to use for a logo or lockup.',
    '#theme'         => 'media_widget',
    '#default_value' => variable_get('sitenow_footer_logo', NULL),
    '#media_options' => array(
      'global' => array(
        'file_directory'  => 'sitenow_footer_logo',
        'enabledPlugins'  => array(
          'upload'
        ),
        'file_extensions' => 'svg png gif jpg jpeg',
        'uri_scheme'      => 'public',
        'types'           => array('image'),
        'schemes'         => array(
          'public' => 'public',
        ),
      ),
    ),
  );

  // Menus.
  $menus = array('none' => 'None');
  $menus = array_merge($menus, menu_get_menus());
  $form['menu_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => 'Footer Menus',
    '#collapsible' => TRUE,
  );
  $form['menu_fieldset']['sitenow_footer_social_media_menu'] = array(
    '#type' => 'select',
    '#title' => t('Social Media Menu'),
    '#default_value' => variable_get('sitenow_footer_social_media_menu'),
    '#description' => t('Choose the menu for social media links.'),
    '#options' => $menus,
  );
  $form['menu_fieldset']['sitenow_footer_custom_menu'] = array(
    '#type' => 'select',
    '#title' => t('Footer Links Menu'),
    '#default_value' => variable_get('sitenow_footer_custom_menu'),
    '#description' => t('Choose the menu for custom footer links.'),
    '#options' => $menus,
  );

  // Footer Information
  // Provide default values if sitenow_footer_additional_info is empty.
  $defaults = array('value' => '', 'format' => 'filtered_html');
  $sitenow_footer_additional_info = variable_get('sitenow_footer_additional_info');
  empty($sitenow_footer_additional_info) ? $sitenow_footer_additional_info = $defaults : $sitenow_footer_additional_info;
  $form['additional_info_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => 'Additional Information',
    '#collapsible' => TRUE,
  );
  $form['additional_info_fieldset']['sitenow_footer_additional_info_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => variable_get('sitenow_footer_additional_info_title', ''),
    '#description' => t('Enter a title for the Additional Information block.'),
  );
  $form['additional_info_fieldset']['sitenow_footer_additional_info'] = array(
    '#type' => 'text_format',
    '#title' => t('Details'),
    '#default_value' => $sitenow_footer_additional_info['value'],
    '#description' => t('Enter the additonal information you would like to display in the footer.'),
    '#format' => $sitenow_footer_additional_info['format'],
    '#rows' => 10,
  );

  $form = system_settings_form($form);
  // Prepend custom submit handler.
  // This needs to fire before system settings submit handler.
  array_unshift($form['#submit'], 'sitenow_footer_config_form_submit');
  return $form;
}

/**
 * Custom submit handler for sitenow_footer_config_form().
 */
function sitenow_footer_config_form_submit($form, &$form_state) {
  if (isset($form_state['values']['sitenow_footer_logo']) &&
    $form_state['values']['sitenow_footer_logo'] > 0) {
    $file = file_load($form_state['values']['sitenow_footer_logo']);
    if ($file) {
      $file->status = FILE_STATUS_PERMANENT;
      file_save($file);
      variable_set('sitenow_footer_logo', $file->fid);
      file_usage_add($file, 'sitenow_footer', 'image', $file->fid);
    }
  }
  else {
    $file = file_load(variable_get('sitenow_footer_logo', ''));
    if (isset($file, $file->fid)) {
      file_delete($file, TRUE);
      file_usage_delete($file, 'sitenow_footer', 'image', $file->fid);
    }
    variable_del('sitenow_footer_logo');
  }
  unset($form_state['values']['sitenow_footer_logo']);
}
