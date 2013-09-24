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

  // Exported menu link: menu-footer-menu:<front>
  $menu_links['menu-footer-menu:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Construction Updates',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Community');
  t('Construction');
  t('Construction Updates');
  t('Design goals');
  t('Home');
  t('Planning');
  t('Planning and Design');
  t('Stories');
  t('Team');


  return $menu_links;
}
