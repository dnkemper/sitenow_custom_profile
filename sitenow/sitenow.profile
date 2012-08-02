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

function sitenow_install_tasks() {
  $task['sitenow_choose_theme_form'] = array(
    'display_name' => st('Choose a theme'),
    'type' => 'form',
  );
  return $task;
}

function sitenow_choose_theme_form($form, &$form_state, &$install_state) {
  drupal_set_title(t('Choose a theme'));
  $theme = array('sitenow1' => t('SiteNow1'));
  
  $form['theme'] = array(
    '#type' => 'radios',
    '#title' => t('Select Theme'),
    '#options' => $theme,
    // '#description' => t('Test Description'),
	'#required' => TRUE,
  );
  
  $form['submit'] = array(
    '#type' => 'submit',
	'#value' => t('Save'),
  );
return $form;
}

function sitenow_choose_theme_form_submit($form, &$form_state) {
  //print_r($form_state['values']['theme']);
  // enable themes
  $enable = array(
    'theme_default' => $form_state['values']['theme'],
    'admin_theme' => 'seven',
	'corolla',
  );
  
  // if($enable['theme_default'] == 'iowa') {
  //    theme_enable($enable);
  //	module_enable(array('fusion_accelerator','fusion_apply','fusion_apply_ui','fusion_apply_rules'));
  // }
  // else {
    theme_enable($enable);
  // }
  
  foreach ($enable as $var => $theme) {
    if (!is_numeric($var)) {
      variable_set($var, $theme);
    }
  }
 
  // Disable the default Bartik theme
  theme_disable(array('bartik'));
}
