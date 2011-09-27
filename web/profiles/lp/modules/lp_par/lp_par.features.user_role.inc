<?php
/**
 * @file
 * lp_par.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function lp_par_user_default_roles() {
  $roles = array();

  // Exported role: admin
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => '6',
  );

  // Exported role: ads manager
  $roles['ads manager'] = array(
    'name' => 'ads manager',
    'weight' => '4',
  );

  // Exported role: cheif editor
  $roles['cheif editor'] = array(
    'name' => 'cheif editor',
    'weight' => '3',
  );

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '2',
  );

  // Exported role: moderator
  $roles['moderator'] = array(
    'name' => 'moderator',
    'weight' => '5',
  );

  return $roles;
}
