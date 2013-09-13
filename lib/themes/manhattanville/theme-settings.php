<?php

/**
 * @file
 * Theme setting callbacks for the manhattanville theme.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */
function manhattanville_form_system_theme_settings_alter(&$form, &$form_state) {
  
  $form['manhattanville_banner'] = array(
    '#type' => 'managed_file',
    '#name' => 'manhattanville_banner_image',
    '#title' => t('Upload default banner image'),
    '#default_value' => theme_get_setting('manhattanville_banner'),
    '#description' => t('Here you can upload an default banner image'),
    '#required' => FALSE,
    '#upload_location' => 'public://'
  );
  
  return system_settings_form($form);  
  
}