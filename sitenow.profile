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

  $tasks['configure_site_folder'] = array(
    'display_name' => st('Configure Site Folder'),
    'display' => TRUE,
    'type' => 'normal',
    'function' => '_sitenow_configure_site_folder',
  );

  $tasks['delete_update_notify_email'] = array(
    'display_name' => st('Delete Notification Email When Updates are Available'),
    'display' => TRUE,
    'type' => 'normal',
    'function' => '_sitenow_delete_notification_email',
  );

  $tasks['configure_files_folder'] = array(
    'display_name' => st('Configure Files Folder'),
    'display' => TRUE,
    'type' => 'normal',
    'function' => '_sitenow_configure_files_folder',
  );

  return $tasks;
}

/**
 * Custom function to change file paths to outside Drupal root.
 */
function _sitenow_set_file_path() {
// Change public file path
  $sitename = variable_get('site_name');
  $filepath = 'files/' . $sitename . '/files';
  variable_set('file_public_path', $filepath);

 file_prepare_directory($filepath, $options = FILE_CREATE_DIRECTORY);
}

/**
 * Custom function to set directory perms and remove files directory.
 */
function _sitenow_configure_site_folder() {
  $sitename = variable_get('site_name');
  $site_path = DRUPAL_ROOT . '/sites/' . $sitename;
  exec("chmod -R 775 $site_path");
  exec("rm -rf $site_path/files");
  exec("chmod 644 $site_path/settings.php");
}

/**
 * Custom function to delete notification of available updates variable.
 */
function _sitenow_delete_notification_email() {
  variable_del('update_notify_emails');
}

/**
 * Custom function to set perms on sites shared files directory.
 */
function _sitenow_configure_files_folder() {
  $sitename = variable_get('site_name');
  $file_path = drupal_realpath(DRUPAL_ROOT . '/files');
  $site_path = $file_path . '/' . $sitename;
  exec("chmod -R 775 $site_path");
  exec("chgrp -R apache $site_path");

  // Not sure why we are doing this but it was in the fab file so keeping it.
  if (file_exists($site_path . '/files/.htaccess')) {
    $htaccess_path = $site_path . '/files/.htaccess';
    exec("chmod 444 $htaccess_path");
  }
}
