<?php

/**
 * @file
 * Contains functions only needed for drush integration.
 */

/**
 * Implements hook_drush_command().
 */
function at_parallaxy_drush_command() {
  $items = array();

  $items['at_parallaxy'] = array(
    'description' => 'Create a theme using at_parallaxy.',
    'arguments' => array(
      'name'         => 'A name for your theme.',
      'machine_name' => '[optional] A machine-readable name for your theme.',
    ),
    'options' => array(
      'name'         => 'A name for your theme.',
      'machine-name' => '[a-z, 0-9] A machine-readable name for your theme.',
      'description'  => 'A description of your theme.',
      'without-rtl'  => 'Remove all RTL stylesheets.',
      // @TODO potentially add settings defaults?
    ),
    'examples' => array(
      'drush at_parallaxy "My theme name"' => 'Create a sub-theme, using the default options.',
      'drush at_parallaxy "My theme name" my_theme' => 'Create a sub-theme with a specific machine name.',
    ),
  );

  return $items;
}

/**
 * Create a at_parallaxy sub-theme using the starter kit.
 */
function drush_at_parallaxy($name = NULL, $machine_name = NULL) {
  // Determine the theme name.
  if (!isset($name)) {
    if (!$name = drush_get_option('name')) {
      drush_print(dt('Please specify a name!' . "\n" . 'e.g., drush at_parallaxy "Your Theme Name" yourthemename'));
      return;
    }
  }

  // Determine the machine name.
  if (!isset($machine_name)) {
    $machine_name = drush_get_option('machine-name');
  }
  if (!$machine_name) {
    $machine_name = $name;
  }
  $machine_name = str_replace(' ', '_', strtolower($machine_name));

  // Remove characters not valid in function names.
  // Functions must begin with an alpha character.
  $search = array(
    '/[^a-z0-9_]/',
    '/^[^a-z]+/',
  );
  $machine_name = preg_replace($search, '', $machine_name);

  // Determine the path to the new subtheme by finding the path to at_parallaxy.
  $at_parallaxy_path = drush_locate_root() . '/' . drupal_get_path('theme', 'parallaxy');
  $subtheme_path = explode('/', $at_parallaxy_path);
  array_pop($subtheme_path);
  array_pop($subtheme_path);
  $subtheme_path = implode('/', $subtheme_path) . '/' . str_replace('_', '-', $machine_name);

  // Make a fresh copy of the original subtheme.
  drush_op('at_parallaxy_copy', $at_parallaxy_path . '/../' . 'parallaxy_subtheme', $subtheme_path);

  // Rename the .info file.
  $subtheme_info_file = $subtheme_path . '/' . $machine_name . '.info';
  drush_op('rename', $subtheme_path . '/at_parallaxy_subtheme.info', $subtheme_info_file);

  // Alter the contents of the .info file based on the command options.
  $alterations = array(
    '= AT Subtheme' => '= ' . $name,
  );
  if ($description = drush_get_option('description')) {
    $alterations['Starter subtheme for at_parallaxy. Copy this subtheme to get started building your own Drupal theme. For help see our <b><a href="http://at_parallaxys.com/documentation/at_parallaxys-documentation" title="at_parallaxys.com - Rocking the hardest since 2006">documentation</a></b>. If you have a problem and need additional help please use the <b><a href="http://drupal.org/project/issues/at_parallaxy">issue queue</a></b>.'] = $description;
  }
  drush_op('at_parallaxy_file_str_replace', $subtheme_info_file, array_keys($alterations), $alterations);

  // Replace all occurrences of 'at_parallaxy_subtheme' with the machine name of our sub theme.
  drush_op('at_parallaxy_file_str_replace', $subtheme_path . '/theme-settings.php', 'at_parallaxy_subtheme', $machine_name);
  drush_op('at_parallaxy_file_str_replace', $subtheme_path . '/template.php', 'at_parallaxy_subtheme', $machine_name);

  // Notify user of the newly created theme.
  drush_print(dt('New Subtheme for "!name" created in: !path', array(
    '!name' => $name,
    '!path' => $subtheme_path,
  )));
}

/**
 * Copy a directory recursively.
 */
function at_parallaxy_copy($source_dir, $target_dir, $ignore = '/^(\.(\.)?|CVS|\.svn|\.git|\.DS_Store)$/') {
  if (!is_dir($source_dir)) {
    drush_die(dt('The directory "!directory" was not found.', array('!directory' => $source_dir)));
  }
  $dir = opendir($source_dir);
  @mkdir($target_dir);
  while ($file = readdir($dir)) {
    if (!preg_match($ignore, $file)) {
      if (is_dir($source_dir . '/' . $file)) {
        at_parallaxy_copy($source_dir . '/' . $file, $target_dir . '/' . $file, $ignore);
      }
      else {
        copy($source_dir . '/' . $file, $target_dir . '/' . $file);
      }
    }
  }
  closedir($dir);
}

/**
 * Replace strings in a file.
 */
function at_parallaxy_file_str_replace($file_path, $find, $replace) {
  $file_contents = file_get_contents($file_path);
  $file_contents = str_replace($find, $replace, $file_contents);
  file_put_contents($file_path, $file_contents);
}
