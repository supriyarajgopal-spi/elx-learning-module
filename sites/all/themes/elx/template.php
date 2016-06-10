<?php

/**
 * Hook theme
 * 
 */
function elx_theme(&$existing, $type, $theme, $path) {
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
function elx_preprocess_user_login(&$vars) {
  $vars['intro_text'] = t('The Estee Lauder Experience');
  $vars['rendered'] = drupal_render_children($vars['form']); 
}

/*
 *  Hook form_alter
 *  Remove labels and add HTML5 placeholder attribute to login form
 */
function elx_form_alter(&$form, &$form_state, $form_id) {
  // If we have a valid username - set the user's preferred language
  if (!empty($form_state['input'])) {
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
      $form['#validate'][$user_login_final_validate_index] = 'elx_final_validate';
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
function elx_form_user_login_alter(&$form, &$form_state) {
	//print_r('Form alter test');
    $form['name']['#description'] = t('');
    $form['pass']['#description'] = t('');
}

/*
 *  Modify user_login_final_validate() with custom error messages
 */
function elx_final_validate($form, &$form_state) {
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


/**
 * Override or insert variables into the maintenance page template.
 */
function elx_preprocess_maintenance_page(&$vars) {
  // While markup for normal pages is split into page.tpl.php and html.tpl.php,
  // the markup for the maintenance page is all in the single
  // maintenance-page.tpl.php template. So, to have what's done in
  // elx_preprocess_html() also happen on the maintenance page, it has to be
  // called here.
  elx_preprocess_html($vars);
}

/**
 * Override or insert variables into the html template.
 */
function elx_preprocess_html(&$vars) {
  // Add conditional CSS for IE8 and below.
  drupal_add_css(path_to_theme() . '/ie.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE), 'weight' => 999, 'preprocess' => FALSE));
  // Add conditional CSS for IE7 and below.
  drupal_add_css(path_to_theme() . '/ie7.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'weight' => 999, 'preprocess' => FALSE));
  // Add conditional CSS for IE6.
  drupal_add_css(path_to_theme() . '/ie6.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 6', '!IE' => FALSE), 'weight' => 999, 'preprocess' => FALSE));
}

/**
 * Override or insert variables into the page template.
 */
function elx_preprocess_page(&$vars) {
  $vars['primary_local_tasks'] = $vars['tabs'];
  unset($vars['primary_local_tasks']['#secondary']);
  $vars['secondary_local_tasks'] = array(
    '#theme' => 'menu_local_tasks',
    '#secondary' => $vars['tabs']['#secondary'],
  );
}

/**
 * Display the list of available node types for node creation.
 */
function elx_node_add_list($variables) {
  $content = $variables['content'];
  $output = '';
  if ($content) {
    $output = '<ul class="admin-list">';
    foreach ($content as $item) {
      $output .= '<li class="clearfix">';
      $output .= '<span class="label">' . l($item['title'], $item['href'], $item['localized_options']) . '</span>';
      $output .= '<div class="description">' . filter_xss_admin($item['description']) . '</div>';
      $output .= '</li>';
    }
    $output .= '</ul>';
  }
  else {
    $output = '<p>' . t('You have not created any content types yet. Go to the <a href="@create-content">content type creation page</a> to add a new content type.', array('@create-content' => url('admin/structure/types/add'))) . '</p>';
  }
  return $output;
}

/**
 * Overrides theme_admin_block_content().
 *
 * Use unordered list markup in both compact and extended mode.
 */
function elx_admin_block_content($variables) {
  $content = $variables['content'];
  $output = '';
  if (!empty($content)) {
    $output = system_admin_compact_mode() ? '<ul class="admin-list compact">' : '<ul class="admin-list">';
    foreach ($content as $item) {
      $output .= '<li class="leaf">';
      $output .= l($item['title'], $item['href'], $item['localized_options']);
      if (isset($item['description']) && !system_admin_compact_mode()) {
        $output .= '<div class="description">' . filter_xss_admin($item['description']) . '</div>';
      }
      $output .= '</li>';
    }
    $output .= '</ul>';
  }
  return $output;
}

/**
 * Override of theme_tablesort_indicator().
 *
 * Use our own image versions, so they show up as black and not gray on gray.
 */
function elx_tablesort_indicator($variables) {
  $style = $variables['style'];
  $theme_path = drupal_get_path('theme', 'elx');
  if ($style == 'asc') {
    return theme('image', array('path' => $theme_path . '/images/arrow-asc.png', 'alt' => t('sort ascending'), 'width' => 13, 'height' => 13, 'title' => t('sort ascending')));
  }
  else {
    return theme('image', array('path' => $theme_path . '/images/arrow-desc.png', 'alt' => t('sort descending'), 'width' => 13, 'height' => 13, 'title' => t('sort descending')));
  }
}

/**
 * Implements hook_css_alter().
 */
function elx_css_alter(&$css) {
  // Use elx's vertical tabs style instead of the default one.
  if (isset($css['misc/vertical-tabs.css'])) {
    $css['misc/vertical-tabs.css']['data'] = drupal_get_path('theme', 'elx') . '/vertical-tabs.css';
    $css['misc/vertical-tabs.css']['type'] = 'file';
  }
  if (isset($css['misc/vertical-tabs-rtl.css'])) {
    $css['misc/vertical-tabs-rtl.css']['data'] = drupal_get_path('theme', 'elx') . '/vertical-tabs-rtl.css';
    $css['misc/vertical-tabs-rtl.css']['type'] = 'file';
  }
  // Use elx's jQuery UI theme style instead of the default one.
  if (isset($css['misc/ui/jquery.ui.theme.css'])) {
    $css['misc/ui/jquery.ui.theme.css']['data'] = drupal_get_path('theme', 'elx') . '/jquery.ui.theme.css';
    $css['misc/ui/jquery.ui.theme.css']['type'] = 'file';
  }
}