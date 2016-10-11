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
