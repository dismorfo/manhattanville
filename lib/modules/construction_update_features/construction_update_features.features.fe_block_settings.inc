<?php
/**
 * @file
 * construction_update_features.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function construction_update_features_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block_manhattanville-mville_clean_construction'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'mville_clean_construction',
    'module' => 'block_manhattanville',
    'node_types' => array(),
    'pages' => 'construction',
    'roles' => array(),
    'themes' => array(
      'manhattanville' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'manhattanville',
        'weight' => -15,
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

  $export['block_manhattanville-mville_contact_form'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'mville_contact_form',
    'module' => 'block_manhattanville',
    'node_types' => array(),
    'pages' => 'construction',
    'roles' => array(),
    'themes' => array(
      'manhattanville' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'manhattanville',
        'weight' => -16,
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
