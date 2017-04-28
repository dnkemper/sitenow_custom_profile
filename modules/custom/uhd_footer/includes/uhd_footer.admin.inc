<?php

/**
 * @file
 * Administrative form functions for the University of Iowa branding bar.
 */

/**
 * Page callback: University of Iowa branding bar configuration form.
 *
 * @see uhd_footer_menu()
 */
function uhd_footer_config_form($form, &$form_state) {

  $menus = array('none' => 'None');
  $menus = array_merge($menus, menu_get_menus());
  $form['uhd_footer_social_media_menu'] = array(
    '#type' => 'select',
    '#title' => t('Connect with us'),
    '#default_value' => variable_get('uhd_footer_social_media_menu'),
    '#description' => t('Choose the menu for social media links.'),
    '#options' => $menus,
  );
  $form['uhd_footer_custom_menu'] = array(
    '#type' => 'select',
    '#title' => t('Quick Links'),
    '#default_value' => variable_get('uhd_footer_custom_menu'),
    '#description' => t('Choose the menu for custom quick links.'),
    '#options' => $menus,
  );

  // Footer Information
  // Provide default values if uhd_footer_contact_us is empty.
  $defaults = array('value' => '', 'format' => 'filtered_html');
  $uhd_footer_contact_us = variable_get('uhd_footer_contact_us');
  empty($uhd_footer_contact_us) ? $uhd_footer_contact_us = $defaults : $uhd_footer_contact_us;
  $form['uhd_footer_contact_us'] = array(
    '#type' => 'text_format',
    '#title' => t('Contact Us'),
    '#default_value' => $uhd_footer_contact_us['value'],
    '#description' => t('Enter the contact information you would like to display in the footer.'),
    '#format' => $uhd_footer_contact_us['format'],
  );

  return system_settings_form($form);
}
