<?php

/**
 * @file
 * engineering_shared_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function engineering_shared_roles_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 2,
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 3,
  );

  return $roles;
}
