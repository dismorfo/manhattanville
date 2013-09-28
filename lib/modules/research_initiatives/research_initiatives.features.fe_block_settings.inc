<?php
/**
 * @file
 * research_initiatives.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function research_initiatives_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-ee4c07472ae5ddb79c7162e7ff6b5172'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ee4c07472ae5ddb79c7162e7ff6b5172',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'academics',
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
