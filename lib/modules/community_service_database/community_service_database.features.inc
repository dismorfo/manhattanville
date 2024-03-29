<?php
/**
 * @file
 * community_service_database.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function community_service_database_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function community_service_database_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function community_service_database_node_info() {
  $items = array(
    'community_service' => array(
      'name' => t('Community Service'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
