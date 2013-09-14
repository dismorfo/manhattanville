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
  
  $footer_message = module_invoke('footer_message', 'block_view', 'footer_message');
  
  $vars['footer_message'] = $footer_message['content'];
  
  $main_menu_tree = menu_tree_page_data('main-menu');
  
  $footer_menu_tree = menu_tree_page_data('menu-footer-menu');
  
  $vars['main_menu_tree'] = menu_tree_output($main_menu_tree);
  
  $vars['footer_menu_tree'] = menu_tree_output($footer_menu_tree);

  foreach ($main_menu_tree as $key => $m) {
    if ($m['link']['in_active_trail'] && $main_menu_tree[$key]['below']) {
      $vars['active_menu_tree'] = menu_tree_output($main_menu_tree[$key]['below']);
    }  
  }
  
}

/**
 * Returns the value of the field first item
 */
function manhattanville_field_get_first_item($entity_type, $entity, $field_name, $index = 0, $langcode = NULL) {
  $field = field_get_items($entity_type, $entity, $field_name, $langcode);
  return $field[$index];
}