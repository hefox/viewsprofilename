<?php

/**
 * Implementation of hook_views_data_alter().
 */
function viewsprofilename_views_data_alter(&$data) {
   $data['users']['uid']['argument']['handler'] = 'views_handler_argument_user_uid_theme_name';
}
/**
 * Implementation of hook_views_handlers().
 */
function viewsprofilename_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'viewsprofilename'),
    ),
    'handlers' => array(
		  'views_handler_argument_user_uid_theme_name' => array(
        	'parent' => 'views_handler_argument_numeric',
      ),
    )
  );
}
