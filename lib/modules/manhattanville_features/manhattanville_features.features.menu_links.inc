<?php
/**
 * @file
 * manhattanville_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function manhattanville_features_menu_default_menu_links() {
  $menu_links = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Academics');
  t('Construction Updates');
  t('Design Goals');
  t('Home');
  t('Planning');
  t('Planning and Design');
  t('Stories');
  t('Team');


  return $menu_links;
}
