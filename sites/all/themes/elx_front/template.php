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
/**
 * Alter User Login Page
 * Override or insert variables into the user login page template.
 */
function elx_front_page_alter(&$page){
  $page['header']['user_login'] = array(
    #'#markup' => t('<div class="logo"><img src="/sites/all/themes/elx_front/images/ELX-logo.svg"/></div><div class="logo-sub"><img src="/sites/all/themes/elx_front/images/estee-lauder-experience-logo-white.svg"/></div>'),
  );
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

/*
 *  Custom pager. 
 *  custom logic and display to match current site 
 *  allan.hill - 082016
 */
function elx_front_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  //$quantity = $variables['quantity'];
  $quantity = 7;
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  /*
  Default Code. We aren't allowing admin overrides - ahill
  $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] : t('« first')), 'element' => $element, 'parameters' => $parameters));
  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : t('last »')), 'element' => $element, 'parameters' => $parameters));
  */

  // 1 should always show if we are on page 2+
  $li_first = theme('pager_first', array('text' => (t('1')), 'element' => $element, 'parameters' => $parameters));
  $li_previous = theme('pager_previous', array('text' => (t('‹')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (t('›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  // the last page # should always show if we aren't on the last page.
  $li_last = theme('pager_last', array('text' => ($pager_max), 'element' => $element, 'parameters' => $parameters)); 

  if ($pager_total[$element] > 1) {

    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'),
        'data' => $li_previous,
      );
    }
    /*
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    */
    if ( $li_first && ($pager_current > 4) ) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager-current'),
            'data' => $i,
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
    }
    // End generation.
    if ( $li_last && ($pager_current < ( $pager_max - 3 ) ) ) {
      $items[] = array(
        'class' => array('pager-last'),
        'data' => $li_last,
      );
    }
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'),
        'data' => $li_next,
      );
    }
    return '<h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list', array(
      'items' => $items,
      'attributes' => array('class' => array('pager')),
    ));

    
    
    
  }
}