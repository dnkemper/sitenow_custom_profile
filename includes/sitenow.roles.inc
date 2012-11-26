<?php

/**
 * @file sitenow.roles.inc
 *
 * This has been split out as it was getting too long.
 *
 * Install setup for:
 * editor role
 * webmaster role
 */

 function sitenow_default_roles() {

  user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, array('access content'));
  user_role_grant_permissions(DRUPAL_AUTHENTICATED_RID, array('access content'));

    // Create editor and webmaster roles
    $new_roles = array('editor', 'webmaster');
    foreach ($new_roles as $r){
      if(!user_role_load_by_name($r)){
        $role = new stdClass();
        $role->name = $r;
        user_role_save($role);
      }
    }

	$editor_role_id = 3;
	$webmaster_role_id = 4;

	// Enable default permissions for roles.
	user_role_grant_permissions($editor_role_id, array('administer menu','administer nodes','access content overview','view own unpublished content',
													   'create article content','edit own article content','edit any article content','delete own article content','delete any article content',
													   'create page content','edit own page content','edit any page content','delete own page content','delete any page content',
													   'access overlay','view the administration theme','access site reports','access toolbar','change own username'));
    user_role_grant_permissions($webmaster_role_id, array('administer blocks','access dashboard','manage features','administer image styles','administer menu','bypass node access',
														  'administer content types'));

  // Create a default role for site administrators, with all available permissions assigned.
  $admin_role = new stdClass();
  $admin_role->name = 'administrator';
  $admin_role->weight = 4;
  user_role_save($admin_role);
  user_role_grant_permissions($admin_role->rid, array_keys(module_invoke_all('permission')));
  // Set this as the administrator role.
  variable_set('user_admin_role', $admin_role->rid);

  // Assign user 1 the "administrator" role.
  db_insert('users_roles')
    ->fields(array('uid' => 1, 'rid' => $admin_role->rid))
    ->execute();
}
