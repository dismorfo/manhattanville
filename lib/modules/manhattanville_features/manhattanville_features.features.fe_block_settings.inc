<?php
/**
 * @file
 * manhattanville_features.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function manhattanville_features_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block_manhattanville-manhattanville_search_widget'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'manhattanville_search_widget',
    'module' => 'block_manhattanville',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'manhattanville' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'manhattanville',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['footer_message-footer_message'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'footer_message',
    'module' => 'footer_message',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'manhattanville' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'manhattanville',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'manhattanville' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'manhattanville',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-columbia_project_team-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'columbia_project_team-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'team',
    'roles' => array(),
    'themes' => array(
      'manhattanville' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'manhattanville',
        'weight' => -10,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-design_team-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'design_team-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'team',
    'roles' => array(),
    'themes' => array(
      'manhattanville' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'manhattanville',
        'weight' => -11,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
