<?php
/**
 * @file
 * manhattanville_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function manhattanville_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu');


  return $menus;
}
