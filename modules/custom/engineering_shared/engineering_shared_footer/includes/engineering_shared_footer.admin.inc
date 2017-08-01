<?php

/**
 * @file
 * Administrative form functions for the Engineering footer.
 */

/**
 * Page callback: Engineering footer configuration form.
 *
 * @see engineering_shared_footer_menu()
 */
function engineering_shared_footer_config_form($form, &$form_state) {
  // Footer Information
  // Provide default values if engineering_shared_footer_contact_us is empty.
  $defaults = array('value' => '', 'format' => 'filtered_html');
  $engineering_shared_footer_contact_us = variable_get('engineering_shared_footer_contact_us');
  empty($engineering_shared_footer_contact_us) ? $engineering_shared_footer_contact_us = $defaults : $engineering_shared_footer_contact_us;
  $form['engineering_shared_footer_contact_us'] = array(
    '#type' => 'text_format',
    '#title' => t('Contact Us'),
    '#default_value' => $engineering_shared_footer_contact_us['value'],
    '#description' => t('Enter the contact information you would like to display in the footer.'),
    '#format' => $engineering_shared_footer_contact_us['format'],
  );

  return system_settings_form($form);
}
