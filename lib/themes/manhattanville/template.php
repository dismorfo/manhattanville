<?php

/**
 * Override or insert variables into the page template.
 */
function manhattanville_preprocess_page(&$vars) {

  $cssConf = array(
    'group' => CSS_THEME,
    'type' => 'inline',
    'media' => 'screen',
    'preprocess' => FALSE,
    'weight' => '9999',
  );

  if (isset($vars['node']) && $vars['node']->type == 'page') {
  	  
    $banner = manhattanville_field_get_first_item('node', $vars['node'], 'field_banner', 0, $vars['node']->language);

    drupal_add_css('.banner {background-image: url("' . file_create_url($banner['uri']) . '");}', $cssConf);

  }
  else {

  	$fid = theme_get_setting('manhattanville_banner');
	$file_uri = base_path() . path_to_theme() . '/default.png';

	if ($fid) {
	  $file = file_load($fid);
	  $file_uri = file_create_url($file->uri);
	}

  	drupal_add_css('.banner {background-image: url("' . $file_uri . '");}', $cssConf);

  }
  
  $menu_tree = menu_tree_page_data('main-menu');
  
  $vars['main_menu_tree'] = menu_tree_output($menu_tree);

  foreach ($menu_tree as $key => $m) {
    if ($m['link']['in_active_trail'] && $menu_tree[$key]['below']) {
      $vars['active_menu_tree'] = menu_tree_output($menu_tree[$key]['below']);
    }  
  }

  $vars['primary_local_tasks'] = $vars['tabs'];

  unset($vars['primary_local_tasks']['#secondary']);

  $vars['secondary_local_tasks'] = array(
    '#theme' => 'menu_local_tasks',
    '#secondary' => $vars['tabs']['#secondary'],
  );

  $vars['primary_local_tasks'] = $vars['tabs'];

}

/**
 * Returns the value of the field first item
 */
function manhattanville_field_get_first_item($entity_type, $entity, $field_name, $index = 0, $langcode = NULL) {
  $field = field_get_items($entity_type, $entity, $field_name, $langcode);
  return $field[$index];
}