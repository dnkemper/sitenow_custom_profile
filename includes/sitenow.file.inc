<?php

/**
 * @file
 * Remove ability to add additional file extensions to webform.
 */

/**
 * Output the list of allowed extensions as checkboxes.
 */
function theme_sitenow_edit_file_extensions($variables) {
  $element = $variables['element'];

  // Format the components into a table.
  $rows = array();
  foreach (element_children($element['types']) as $filtergroup) {
    $row = array();
    $first_row = count($rows);
    if ($element['types'][$filtergroup]['#type'] == 'checkboxes') {
      $select_link = ' <a href="#" class="webform-select-link webform-select-link-' . $filtergroup . '">(' . t('select') . ')</a>';
      $row[] = $element['types'][$filtergroup]['#title'];
      $row[] = array('data' => $select_link, 'width' => 40);
      $row[] = array(
        'data' => drupal_render_children($element['types'][$filtergroup]),
        'class' => array('webform-file-extensions', 'webform-select-group-' . $filtergroup));
      $rows[] = array('data' => $row);
      unset($element['types'][$filtergroup]);
    }
  }

  // Remove the row for additional types.
  unset($element['addextensions']);

  $header = array(
    array(
      'data' => t('Category'), 'colspan' => '2'
    ),
    array(
      'data' => t('Types')
    )
  );

  // Create the table inside the form.
  $element['types']['table'] = array(
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
    '#attributes' => array('class' => array('webform-file-extensions')),
  );

  return drupal_render_children($element);
}
