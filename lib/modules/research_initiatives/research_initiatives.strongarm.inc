<?php
/**
 * @file
 * research_initiatives.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function research_initiatives_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_research_initiative';
  $strongarm->value = array();
  $export['menu_options_research_initiative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_research_initiative';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_research_initiative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_research_initiative';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_research_initiative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_research_initiative';
  $strongarm->value = '1';
  $export['node_preview_research_initiative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_research_initiative';
  $strongarm->value = 0;
  $export['node_submitted_research_initiative'] = $strongarm;

  return $export;
}
