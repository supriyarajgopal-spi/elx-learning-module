<?php
/**
 * Root directory of Drupal installation.
 */
define('DRUPAL_ROOT', getcwd());

include_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
drupal_set_time_limit(240);
require '/usr/local/Cellar/composer/1.1.2/libexec/vendor/autoload.php';

$mongo = new MongoDB\Client();
$collection = $mongo->selectCollection('mean-prod', 'user');
$collection = $collection->find();
foreach($collection as $obj) {
  $mongo_uid = $obj->uid;
  $mongo_name = $obj->name;
  if (!empty($obj->earned_badges)) {
    $mongo_badges_object = $obj->earned_badges;
    $mongo_badges_array = (array) $mongo_badges_object;
    $mongo_badges_array = str_replace('-', ' ', $mongo_badges_array);
    if (!empty($mongo_badges_array)) {
     $user_badges[$obj->uid]['uid'] = $obj->uid;
     $user_badges[$obj->uid]['name'] = $obj->name;
     $user_badges[$obj->uid]['badges'] = $mongo_badges_array;
    }
  }
}
// Insert mongo user badges into new elx badges schema
foreach($user_badges as $user) {
  $user_uid = $user['uid'];
  foreach($user['badges'] as $badge) {
  	if ($badge == 'First 1000 Points') {
  	  $badge = 'First 1,000 Points';
  	}
	if ($badge == 'First 5000 Points') {
	  $badge = 'First 5,000 Points';
	}
  	$result = db_select('node', 'n')
      ->fields('n', array('nid'))
      ->condition('type', 'badge', 'like')
      ->condition('title', $badge, '=')
      ->execute()
      ->fetchCol();
	if (!empty($result[0])) {
	  $nid = $result[0];
	  // Insert mongo user badges into new elx badges schema
      $bid = db_insert('badges') // Table name no longer needs {}
        ->fields(array(
          'nid'     => $nid,
          'title'   => $badge,
          'uid'     => $user_uid,
          'timestamp' => REQUEST_TIME,
      ))
      ->execute();
	  if (empty($bid)) {
	  	$error[$user_uid]['error'] = $nid . ':' . $user_uid;
	  }
	}
  }
}
