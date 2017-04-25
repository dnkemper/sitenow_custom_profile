<?php

/**
 * @file
 * Theme settings.
 */

/**
 * Implements hook_form_system_theme_settings_alter().
 */
function ovpr_common_form_system_theme_settings_alter(&$form, &$form_state) {

  $form['at-settings']['ovpr'] = array(
    '#type' => 'fieldset',
    '#title' => t('OVPR Branding'),
    '#description' => t('<h3>OVPR Branding Bar</h3><p>These settings allow you to configure the OVPR branded bar.</p>'),
  );
  $form['at-settings']['ovpr']['ovpr_branding_bar'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable OVPR Branding Bar'),
    '#default_value' => theme_get_setting('ovpr_branding_bar'),
    '#description' => t('The OVPR Branding Bar is the gray bar above the yellow breadcrumbs bar.'),
  );
  $form['at-settings']['ovpr']['ovpr_depts_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Department Name'),
    '#default_value' => theme_get_setting('ovpr_depts_name'),
    '#description' => t('Enter the name of the department. This is used on the left side of the OVPR branding bar.'),
    '#states' => array(
  // Action to take.
      'visible' => array(
        ':input[name="ovpr_branding_bar"]' => array('checked' => TRUE),
      ),
    ),
  );
  $form['at-settings']['ovpr']['ovpr_depts_links'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable OVPR Department Links'),
    '#default_value' => theme_get_setting('ovpr_depts_links'),
    '#description' => t('OVPR Department links are on the right side of the OVPR Branding Bar.'),
    '#states' => array(
  // Action to take.
      'visible' => array(
        ':input[name="ovpr_branding_bar"]' => array('checked' => TRUE),
      ),
    ),
  );
}

