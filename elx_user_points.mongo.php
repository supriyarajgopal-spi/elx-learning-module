<?php
/**
 * Root directory of Drupal installation.
 */
define('DRUPAL_ROOT', getcwd());

include_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
drupal_set_time_limit(240);
require '/usr/local/Cellar/composer/1.1.2/libexec/vendor/autoload.php';

$col_count = 0;
$userpoint_vocabulary = taxonomy_vocabulary_machine_name_load('userpoints');
$vid = $userpoint_vocabulary->vid;

//$mongodb = 'mongodb://stagemyelx.cloudapp.net:27017/mean-prod';
$mongodb = 'mongodb://myelx.cloudapp.net:27017/mean-prod';
$options = ['connectTimeoutMS' => 60000, 'socketTimeoutMS' => 60000];
$mongo = new MongoDB\Client($mongodb, $options);
$collection = $mongo->selectCollection('mean-prod', 'userPoints');
//$collection_node = $mongo->selectCollection('mean-prod', 'node');
$cursor = $collection->find();


foreach ($cursor as $obj) {
  $col_count = $col_count + 1;
  $user_uid = $obj->uid;
  $points = $obj->points;
  $point_type = $obj->kind;
  $user_points[] = array($user_uid, $points, $point_type);
/*  
  // Create query for second collection
  $qry = array('_id' => $mongo_id);
  $cursor_node = $collection_node->find($qry);
  foreach ($cursor_node as $obj_node) {
  	$node_id = $obj_node->nid;
  	  print_r($nid);
  }
*/  
  if ($points != 0) {
  
    // Set product userpoint term
    if ($point_type == 'product') {
      $mongo_term_name = 'product';
      $tid = get_userpoint_term_tid($mongo_term_name, $vid);
      if ($tid == FALSE) {
	   $tid = set_userpoint_taxonomy('product', $vid);
	  }
    }

    if (isset($obj->group)) {
      $group_type = $obj->group;
	  $mongo_term_name = $group_type . '_' . $point_type;
	  $tid = get_userpoint_term_tid($mongo_term_name, $vid);
	    if ($tid == FALSE) {
	  	  $tid = set_userpoint_taxonomy($mongo_term_name, $vid);
	    }
    }
    else {
  	  $group_type = '';
    }

    // Set first-login userpoint term
    if (isset($obj->contentid)) {
  	  $contentid = $obj->contentid;
	  if ($contentid == 'first-login') {
	    $mongo_term_name = 'first-login';
	    $tid = get_userpoint_term_tid($mongo_term_name, $vid);
	    if ($tid == FALSE) {
	  	  $tid = set_userpoint_taxonomy('first-login', $vid);
	    }
	  }
    }

    // Insert user points into userpoints, userpoints_total, and userpoints_txn tables
    
    // Check userpoints table for already created user/tid combo
    $userpoints_points = get_user_points($user_uid, $tid);
  
    if ($userpoints_points == FALSE) { 
      $pid = db_insert('userpoints')
        ->fields(array(
          'uid'         => $user_uid,
          'points'      => $points,
          'max_points'  => $points,
          'last_update' => REQUEST_TIME,
          'tid'         => $tid,
      ))
      ->execute();
      if (empty($pid) || $pid == FALSE) {
        $error[$user_uid]['error'] = $pid . ':' . $user_uid;
      }
    }
    else {
      $points = $userpoints_points + $points;
      $fid = db_update('userpoints')
      ->fields(array(
        'points'       => $points,
        'max_points'   => $points,
        'last_update'  => REQUEST_TIME,
        ))
	  ->condition('uid', $user_uid, '=')
      ->execute(); 
    }
 
    // Check userpoints_total table for points
    $user_total_points = get_points_for_userpoints_total($user_uid);
   
    if ($user_total_points != FALSE) {
      $total_points = $user_total_points + $points;
      $fid = db_update('userpoints_total')
      ->fields(array(
        'points'       => $total_points,
        'max_points'   => $total_points,
        'last_update'  => REQUEST_TIME,
        ))
	  ->condition('uid', $user_uid, '=')
      ->execute();
    }
    else {
      $user_point_total_id = db_insert('userpoints_total')
      ->fields(array(
        'uid'         => $user_uid,
        'points'      => $points,
        'max_points'  => $points,
        'last_update' => REQUEST_TIME,
      ))
      ->execute();
      if (empty($user_point_total_id) || $user_point_total_id == FALSE) {
        $error_total[$user_uid]['error'] = $points . ':' . $user_uid;
      }
    }
    
     $txn_id = db_insert('userpoints_txn')
      ->fields(array(
        'uid'           => $user_uid,
        'approver_uid'  => 0,
        'points'        => $points,
        'time_stamp'    => REQUEST_TIME,
        'changed'       => REQUEST_TIME,
        'status'        => 0,
        'description'   => $mongo_term_name, 
        'reference'     => $user_uid,
        'expirydate'    => 0,
        'expired'       => 0,
        'parent_txn_id' => 0,
        'tid'           => $tid,
        'entity_id'     => $user_uid,
        'entity_type'   => 'user',
        'operation'     => 'Insert',
    ))
    ->execute();
    if (empty($pid) || $pid == FALSE) {
      $error[$user_uid]['error'] = $pid . ':' . $user_uid;
    } 
  }
}


function get_points_for_userpoints_total($uid) {
  $result = db_select('userpoints_total', 'upt')
    ->fields('upt', array('points'))
    ->condition('uid', $uid, '=')
    ->execute()
    ->fetchCol();
	if (!empty($result[0])) {
	  $user_total_points = $result[0];
	  return $user_total_points;
	}
	else {
	  return FALSE;
	}
}

function get_userpoint_term_tid($mongo_tx_name, $vid) {
  $result = db_select('taxonomy_term_data', 'ttd')
  ->fields('ttd', array('tid'))
  ->condition('vid', $vid, '=')
  ->condition('name', $mongo_tx_name, '=')
  ->execute()
  ->fetchCol();
  if (!empty($result[0])) {
	$tid = $result[0];
	return $tid;
  }
  else {
	return FALSE;
  }	
}

function set_userpoint_taxonomy($mongo_tx_name, $vid) {
  $term = new stdClass();
  $term->vid = $vid;
  $term->name = $mongo_tx_name;
  taxonomy_term_save($term);
  $tid = $term->tid;
  return $tid;
}

// Returns user points per taxonomy
function get_user_points($user_uid, $tid) {
  $result = db_select('userpoints', 'up')
  ->fields('up', array('points'))
  ->condition('uid', $user_uid, '=')
  ->condition('tid', $tid, '=')
  ->execute()
  ->fetchCol();
  if (!empty($result[0])) {
	$userpoints_points = $result[0];
	return $userpoints_points;
  }
  else {
	return FALSE;
  }
}