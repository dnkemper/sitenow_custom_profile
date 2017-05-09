<?php

/**
 * @file
 * SiteNow profile.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function sitenow_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
  $form['update_notifications']['update_status_module']['#default_value'] = array(1);
}

/**
 * Implements hook_install_tasks().
 *
 * Defines task to set file paths and save initial theme settings.
 */
function sitenow_install_tasks($install_state) {

  $tasks = array();

  $tasks['delete_update_notify_email'] = array(
    'display_name' => st('Delete Notification Email When Updates are Available'),
    'display' => TRUE,
    'type' => 'normal',
    'function' => '_sitenow_delete_notification_email',
  );

  return $tasks;
}

/**
 * Custom function to delete notification of available updates variable.
 */
function _sitenow_delete_notification_email() {
  variable_del('update_notify_emails');
}

/**
 * Implements hook_webform_component_defaults_alter().
 */
function sitenow_webform_component_defaults_alter(&$defaults, $type) {
  if ($type == 'file') {
    $defaults['extra']['scheme'] = 'private';
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function sitenow_form_webform_component_edit_form_alter(&$form, &$form_state, $form_id) {
  $form['extra']['scheme']['#access'] = FALSE;
  $form['extra']['scheme_description'] = array(
    '#markup' => '<p>' . t('Files uploaded through webform submissions may only be accessed by users who can view webform submissions.') . '</p>',
    '#weight' => 7,
  );
  // Do not allow arbitrary file extensions for file upload components.
  if ($form['type']['#value'] == 'file') {
    $form['validation']['extensions']['addextensions']['#access'] = FALSE;
    $form['validation']['extensions']['#description'] = t('To collect files of additional types, allow an archive file extension. A respondent can then upload files of additional types by compressing the files into an archive before uploading.');
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function sitenow_form_form_builder_field_configure_alter(&$form, &$form_state, $form_id) {
  if (!empty($form['webform_file_scheme'])) {
    $form['webform_file_scheme']['#access'] = FALSE;
    $form['webform_file_scheme_description'] = array(
      '#markup' => '<p>' . t('Files uploaded through webform submissions may only be accessed by users who can view webform submissions.') . '</p>',
      '#weight' => 6,
    );
  }
  if ($form['#_edit_element']['#webform_component']['type'] == 'file') {
    $form['webform_file_extensions']['#description'] = t('To collect files of additional types, allow an archive file extension. A respondent can then upload files of additional types by compressing the files into an archive before uploading.');
  }
}

/**
 * Implements hook_theme_registry_alter().
 */
function sitenow_theme_registry_alter(&$theme_registry) {
  // Use a custom theme function to remove the row for additional file types.
  $profile_path = drupal_get_path('profile', 'sitenow');
  $file_name = 'sitenow.file.inc';
  $theme_registry['webform_edit_file_extensions']['file'] = $file_name;
  $theme_registry['webform_edit_file_extensions']['theme path'] = $profile_path;
  $theme_registry['webform_edit_file_extensions']['function'] = 'theme_sitenow_edit_file_extensions';
  $theme_registry['webform_edit_file_extensions']['includes'] = array($profile_path . '/includes/' . $file_name);
}

/**
 * Implements hook_menu_alter()
 */
function sitenow_menu_alter(&$items) {
  // This is required until issue https://www.drupal.org/node/2078423
  // in Redirect module is fixed.
  $items['admin/config/search/redirect/settings']['access callback'] = '_sitenow_redirect_settings_access_callback';
}

/**
 * Custom function to control access to Redirect settings page.
 */
function _sitenow_redirect_settings_access_callback(){
  global $user;
  // Forbid access for roles different than administrator.
  return (in_array('administrator', array_values($user->roles))) ? TRUE : FALSE;
}
