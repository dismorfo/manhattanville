<?php
/**
 * @file
 * research_initiatives.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function research_initiatives_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function research_initiatives_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function research_initiatives_node_info() {
  $items = array(
    'research_initiative' => array(
      'name' => t('Research Initiative'),
      'base' => 'node_content',
      'description' => t('Content type for content copied from http://zuckermaninstitute.columbia.edu/science.html'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
