<?php

/**
 * @file
 * Drush include file.
 */

/**
 * Implements hook_drush_cache_clear().
 */
function engineering_shared_people_drush_cache_clear(&$types) {
  $types['engineering-dept-people'] = 'engineering_shared_people_invalidate_cache';
}
