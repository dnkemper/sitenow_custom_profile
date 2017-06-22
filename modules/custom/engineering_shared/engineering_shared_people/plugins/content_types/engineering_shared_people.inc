<?php

/**
 * @file
 * Ctools content type plugin file for Engineering Dept People pane module.
 */

$plugin = array(
// Just do this one, it is needed.
  "single" => TRUE,
// Title to show up on the pane screen.
  "title" => t("Engineering Department People"),
// Description to show up on the pane screen.
  "description" => t("A list of events from Localist"),
// A category to put this under.
  "category" => t("Miscellaneous"),
// A function that will return the settings form for the pane.
  "edit form" => "engineering_shared_people_edit_form",
// A function that will return the renderable content.
  "render callback" => "engineering_shared_people_render",
// A function that will return the information displayed on the admin screen (optional).
  "admin info" => "engineering_shared_people_admin_info",
// Array of defaults for the settings form.
  "defaults" => array(
    "dept" => "",
    "type" => "",
  ),
// This is NEEDED to be able to use substitution strings in your pane.
  "all contexts" => TRUE,
);

/**
 * Admin information.
 */
function engineering_shared_people_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = t("Engineering Department People");
    return $block;
  }
}

/**
 * The 'Edit form' callback for the content type.
 */
function engineering_shared_people_edit_form($form, &$form_state) {
  $conf = $form_state["conf"];
  $form["dept"] = array(
    "#type" => "textfield",
    "#title" => t("Department"),
    "#description" => t("Provide a valid term id from the Departments vocabulary on the Engineering main site.<br>https://www.engineering.uiowa.edu/admin/structure/taxonomy/departments"),
    "#default_value" => $conf["dept"],
  );
  $form["type"] = array(
    "#type" => "textfield",
    "#title" => t("Person Type"),
    "#description" => t("Provide a valid term id from the Person Type vocabulary on the Engineering main site.<br>https://www.engineering.uiowa.edu/admin/structure/taxonomy/person_directory_listings"),
    "#default_value" => $conf["type"],
  );

  return $form;
}

/**
 * Custom form_submit.
 */
function engineering_shared_people_edit_form_submit(&$form, &$form_state) {
  // Puts all values in the $conf array.
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Render.
 */
function engineering_shared_people_render($subtype, $conf, $panel_args, $context) {
  $args = array(
    'department' => $conf['dept'],
    'person_type' => $conf['type'],
  );

  // Endpoint base.
  $endpoint_base = 'https://engineering.uiowa.edu/feeds/person/json/v1/directory/';

  // Append args to the $endpoint.
  $endpoint = $endpoint_base . implode('/', $args);
  // If the api call is not in the cache table, perform the api call.
  if (!cache_get($endpoint, 'cache_engineering_shared_people')) {
    $result = drupal_http_request($endpoint);
    $json = drupal_json_decode($result->data);
    // Create a cache item.
    cache_set($endpoint, $json, 'cache_engineering_shared_people', REQUEST_TIME + (60 * variable_get('engineering_shared_people_cache_time')));
  }
  else {
    $json = cache_get($endpoint, 'cache_engineering_shared_people')->data;
  }

  $markup['row'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => 'row',
    ),
  );
  foreach ($json['nodes'] as $delta => $item) {
    $markup['row']['col_' . $delta] = array(
      '#type' => 'container',
      '#attributes' => array(
        'class' => 'col-xs-12 col-md-6 col-lg-6',
      ),
    );

    $content = array();

    // Name and URL.
    $content['name'] = $item['node']['name'];
    $content['url'] = '//www.engineering.uiowa.edu/node/' . $item['node']['nid'];

    // Prepare the image.
    if ($item['node']['image_url']) {
      $image_url = $item['node']['image_url'];
      $image_style = 'styles/3_2_small/public';
      $image_url = str_replace('/files/person/', '/files/styles/3_2_small/public/person/', $image_url);
      $image = theme('imagecache_external', array('path' => $image_url, 'style_name' => '3_2_small'));
      $content['image'] = $image;
    }

    // Title/Department.
    if ($item['node']['title']) {
      $content['title'] = $item['node']['title'] . ', ' . $item['node']['directory'];
    }

    // Email.
    if ($item['node']['email']) {
      $content['email'] = $item['node']['email'];
    }

    // Phone.
    if ($item['node']['phone']) {
      $content['phone'] = $item['node']['phone'];
    }

    // Office Location.
    if ($item['node']['office']) {
      $content['location'] = $item['node']['office'];
    }

    // Theme the person teaser with content data.
    $person_teaser = theme('person_teaser', $content);

    $markup['row']['col_' . $delta]['markup_' . $delta] = array(
      '#type' => 'markup',
      '#markup' => render($person_teaser),
    );
  }
  $block = new stdClass();
  // The title may be overridden by the user within the panel options.
  $block->title = 'People';
  $block->content = render($markup);

  return $block;
}
