<?php

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

  $tasks['set_file_path'] = array(
    'display_name' => st('Setting File Path'),
    'display' => TRUE,
    'type' => 'normal',
    'function' => '_sitenow_set_file_path',
  );

  return $tasks;
}

/**
 * Helper function to change file paths to outside Drupal root.
 */
function _sitenow_set_file_path() {
// Change public file path
  $sitename = variable_get('site_name');
  $filepath = 'files/' . $sitename . '/files';
  variable_set('file_public_path', $filepath);

 file_prepare_directory($filepath, $options = FILE_CREATE_DIRECTORY);
}
