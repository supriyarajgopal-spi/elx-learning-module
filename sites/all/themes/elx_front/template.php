<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param array $variables
 *   Variables to pass to the theme template.
 * @param string $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function elx_front_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  elx_front_preprocess_html($variables, $hook);
  elx_front_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param array $variables
 *   Variables to pass to the theme template.
 * @param string $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function
function elx_front_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  $variables['classes_array'] = array_diff($variables['classes_array'],
    array('class-to-remove')
  );
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param array $variables
 *   Variables to pass to the theme template.
 * @param string $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function elx_front_preprocess_page(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param array $variables
 *   Variables to pass to the theme template.
 * @param string $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function elx_front_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--no-wrapper.tpl.php template for sidebars.
  if (strpos($variables['region'], 'sidebar_') === 0) {
    $variables['theme_hook_suggestions'] = array_diff(
      $variables['theme_hook_suggestions'], array('region__no_wrapper')
    );
  }
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param array $variables
 *   Variables to pass to the theme template.
 * @param string $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function elx_front_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  if ($variables['block_html_id'] == 'block-system-main') {
    $variables['theme_hook_suggestions'] = array_diff(
      $variables['theme_hook_suggestions'], array('block__no_wrapper')
    );
  }
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param array $variables
 *   Variables to pass to the theme template.
 * @param string $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function elx_front_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // elx_front_preprocess_node_page() or elx_front_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param array $variables
 *   Variables to pass to the theme template.
 * @param string $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function elx_front_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */


/**
 * Hook theme
 * 
 */
function elx_front_theme(&$existing, $type, $theme, $path) {
  $hooks['user_login'] = array(
    'template' => 'user-login',
    'render element' => 'form',
    // other theme registration code...
  );
  return $hooks;
}


/**
 * Preprocess User Login
 * Override or insert variables into the user login page template.
 */
function elx_front_preprocess_user_login(&$vars) {
  $vars['intro_text'] = t('The Estee Lauder Experience');
  $vars['rendered'] = drupal_render_children($vars['form']); 
}

/*
 *  Hook form_alter
 *  Remove labels and add HTML5 placeholder attribute to login form
 */
function elx_front_form_alter(&$form, &$form_state, $form_id) {
  // If we have a valid username - set the user's preferred language
  if (!empty($form_state['input']['name']) && module_exists('elx_language')) {
    $new_lang_code = elx_language_detect($form_state['input']['name']);
	if (!empty($new_lang_code)) {
	  $languages = language_list();
	  if (isset($languages[$new_lang_code])) {
	    global $language;
        $language = $languages[$new_lang_code];
	  }
	}
  }
  //elx_languages_json_to_po();
  if ( TRUE === in_array( $form_id, array( 'user_login', 'user_login_block') ) ) {
  	$user_login_final_validate_index = array_search('user_login_final_validate', $form['#validate']);
    if ($user_login_final_validate_index >= 0) {
      $form['#validate'][$user_login_final_validate_index] = 'elx_front_final_validate';
    }
	$lang_email = t('Email Address:');
    $lang_pw = t('Password:');
	$lang_remember_me = t('Remember Me');
	$lang_signin_label = t('Sign In');

	$form['name']['#attributes']['placeholder'] = t($lang_email);
    $form['pass']['#attributes']['placeholder'] = t($lang_pw);
    $form['name']['#title_display'] = "invisible";
    $form['pass']['#title_display'] = "invisible";
    $form['remember_me']['#title'] = t($lang_remember_me);
    $form['actions']['submit']['#value'] = t($lang_signin_label);
  }
}

/*
 *  Form user login alter
 *  Remove login form descriptions
 */
function elx_front_form_user_login_alter(&$form, &$form_state) {
	//print_r('Form alter test');
    $form['name']['#description'] = t('');
    $form['pass']['#description'] = t('');
}

/*
 *  Modify user_login_final_validate() with custom error messages
 */
function elx_front_final_validate($form, &$form_state) {
  if (empty($form_state['uid'])) {
    // Always register an IP-based failed login event.
    flood_register_event('failed_login_attempt_ip', variable_get('user_failed_login_ip_window', 3600));
    // Register a per-user failed login event.
    if (isset($form_state['flood_control_user_identifier'])) {
      flood_register_event('failed_login_attempt_user', variable_get('user_failed_login_user_window', 21600), $form_state['flood_control_user_identifier']);
    }

    if (isset($form_state['flood_control_triggered'])) {
      if ($form_state['flood_control_triggered'] == 'user') {
        form_set_error('name', format_plural(variable_get('user_failed_login_user_limit', 5), 'Sorry, there has been more than one failed login attempt for this account. It is temporarily blocked. Try again later or request a new password.', 'Sorry, there have been more than @count failed login attempts for this account. It is temporarily blocked. Try again later or request a new password.', array('@url' => url('user/password'))));
      }
      else {
        // We did not find a uid, so the limit is IP-based.
        form_set_error('name', t('Sorry, too many failed login attempts from your IP address. This IP address is temporarily blocked. Try again later or request a new password.', array('@url' => url('user/password'))));
      }
    }
    else {
	  //TODO:: Add other errors
	  //"FORGOT_NOT_FOUND":
      //"EMAIL_ERROR":
      //"FORGOT_PASSWORD":
      //"UNKNOWN_USER":
	  $lang_invalid_email_pw = 'The email or password you entered do not match. Please try again.';
      form_set_error('name', t($lang_invalid_email_pw));
      watchdog('user', 'Login attempt failed for %user.', array('%user' => $form_state['values']['name']));
    }
  }
  elseif (isset($form_state['flood_control_user_identifier'])) {
    // Clear past failures for this user so as not to block a user who might
    // log in and out more than once in an hour.
    flood_clear_event('failed_login_attempt_user', $form_state['flood_control_user_identifier']);
  }
}