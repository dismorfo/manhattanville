<?php
/**
 * @file
 * manhattanville_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function manhattanville_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'columbia_project_team';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Columbia Project Team';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Columbia Project Team';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Duis venenatis placerat risus in fringilla. Suspendisse tempor ante eget erat venenatis, ac rutrum ipsum sagittis. Etiam viverra convallis rhoncus. Aenean a sem vestibulum, commodo dolor ut, lobortis massa. Maecenas at vestibulum metus, non feugiat nisl. Fusce dignissim eget tellus sit amet varius. Proin porta pulvinar venenatis. Aliquam dignissim felis sit amet enim porttitor vehicula. Pellentesque in nisi odio. Maece- nas in sapien felis. Nam interdum consequat sagittis. Nunc porttitor hendrerit purus, eu eleifend dolor sceler- isque ut. Proin viverra dolor erat.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'team' => 'team',
  );
  /* Filter criterion: Content: Team (field_team) */
  $handler->display->display_options['filters']['field_team_value']['id'] = 'field_team_value';
  $handler->display->display_options['filters']['field_team_value']['table'] = 'field_data_field_team';
  $handler->display->display_options['filters']['field_team_value']['field'] = 'field_team_value';
  $handler->display->display_options['filters']['field_team_value']['value'] = array(
    'Columbia Project Team' => 'Columbia Project Team',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['columbia_project_team'] = $view;

  $view = new view();
  $view->name = 'design_team';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Design Team';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Design Team';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Duis venenatis placerat risus in fringilla. Suspendisse tempor ante eget erat venenatis, ac rutrum ipsum sagittis. Etiam viverra convallis rhoncus. Aenean a sem vestibulum, commodo dolor ut, lobortis massa. Maecenas at vestibulum metus, non feugiat nisl. Fusce dignissim eget tellus sit amet varius. Proin porta pulvinar venenatis. Aliquam dignissim felis sit amet enim porttitor vehicula. Pellentesque in nisi odio. Maece- nas in sapien felis. Nam interdum consequat sagittis. Nunc porttitor hendrerit purus, eu eleifend dolor sceler- isque ut. Proin viverra dolor erat.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'team' => 'team',
  );
  /* Filter criterion: Content: Team (field_team) */
  $handler->display->display_options['filters']['field_team_value']['id'] = 'field_team_value';
  $handler->display->display_options['filters']['field_team_value']['table'] = 'field_data_field_team';
  $handler->display->display_options['filters']['field_team_value']['field'] = 'field_team_value';
  $handler->display->display_options['filters']['field_team_value']['value'] = array(
    'Design Team' => 'Design Team',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['design_team'] = $view;

  return $export;
}
