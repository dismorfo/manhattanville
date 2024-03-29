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

  $file_uri = base_path() . path_to_theme() . '/img/default.png';

  if (isset($vars['node']) && $vars['node']->type == 'page') {
    if ($banner = manhattanville_field_get_first_item('node', $vars['node'], 'field_banner', 0, $vars['node']->language)) {;
      $file_uri = file_create_url($banner['uri']);
	}
  }
  else {
	if ($fid = theme_get_setting('manhattanville_banner')) {
	  if ($file = file_load($fid) && !empty($file)) {
	    $file_uri = file_create_url($file->uri);
	  }
	}
  }

  if ( isset($vars['node']) && drupal_is_front_page()) {
    $vars['livable_city_logo'] = module_invoke('block_manhattanville', 'block_view', 'mville_livable_city');
  }

  drupal_add_css('.banner {background-image: url("' . $file_uri . '");}', $cssConf);

  $footer_message = module_invoke('footer_message', 'block_view', 'footer_message');

  $manhattanville_search_widget = module_invoke('block_manhattanville', 'block_view', 'manhattanville_search_widget');

  $social_media_links = module_invoke('block_manhattanville', 'block_view', 'mville_social_media_links');

  $vars['footer_message'] = $footer_message['content'];

  $vars['manhattanville_search_widget'] = $manhattanville_search_widget['content'];

  $vars['social_media_links'] = $social_media_links['content'];

  $main_menu_tree = menu_tree_page_data('main-menu');

  $footer_menu_tree = menu_tree_page_data('menu-footer-menu');

  $vars['main_menu_tree'] = menu_tree_output($main_menu_tree);

  $vars['footer_menu_tree'] = menu_tree_output($footer_menu_tree);

  foreach ($main_menu_tree as $key => $m) {
    if ($m['link']['in_active_trail'] && $main_menu_tree[$key]['below']) {
	  $vars['trail_title'] = $vars['node']->title;
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


function manhattanville_theme() {
  return array(
    'contact_node_form' => array(
      'render element' => 'form',
      'template' => 'contact-node-form',
      'path' => drupal_get_path('theme', 'manhattanville'),
    ),
  );
}


function manhattanville_preprocess_textfield(&$vars) {
  $vars['element']['#attributes']['class'][] = 'pure-input-1';
  $vars['element']['#attributes']['class'][] = 'pure-input-rounded';
  $vars['element']['#size'] = 30;
  $vars['element']['#attributes']['required'] = array('true');
}


function manhattanville_form_alter(&$form, &$form_state, $form_id) {

  $form['#attributes']['class'][] = 'pure-form';

  switch ($form_id) {
    case 'contact_node_form':
      $form['#attributes']['class'][] = 'pure-form-stacked';
      $form['actions']['submit']['#value'] = t('Submit');

      break;
  }
}