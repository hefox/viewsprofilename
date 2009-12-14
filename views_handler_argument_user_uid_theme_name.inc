<?php
// $Id: views_handler_argument_user_uid.inc,v 1.1 2008/09/03 19:21:30 merlinofchaos Exp $
/**
 * @file
 * Provide user uid argument handler.
 */

/**
 * Argument handler to accept a user id.
 */
class views_handler_argument_user_uid_theme_name extends views_handler_argument_numeric {
  /**
   * Override the behavior of title(). Get the name of the user.
   */
  function title_query() {
    if (!$this->argument) {
      return array(variable_get('anonymous', t('Anonymous')));
    }

    $titles = array();
    foreach($this->value as $uid) {
      $titles[] = check_plain(strip_tags(theme('username',user_load($uid))));
    }
    return $titles;
  }
}

