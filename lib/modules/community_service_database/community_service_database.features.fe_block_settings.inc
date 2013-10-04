<?php
/**
 * @file
 * community_service_database.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function community_service_database_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-community_service_listing-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'community_service_listing-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'community-services',
    'roles' => array(),
    'themes' => array(
      'manhattanville' => array(
        'region' => 'content',
        'status' => 1,
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
    'visibility' => 1,
  );

  return $export;
}
