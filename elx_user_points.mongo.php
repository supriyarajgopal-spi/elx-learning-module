<?php

/**
 * Root directory of Drupal installation.
 */
define('DRUPAL_ROOT', getcwd());

require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
drupal_set_time_limit(240);
$userpoint_vocabulary = taxonomy_vocabulary_machine_name_load('userpoints');
require '/usr/local/Cellar/composer/1.1.2/libexec/vendor/autoload.php';
$mongo = new MongoDB\Client('mongodb://myelx.cloudapp.net:27017/mean-prod', array(
  'connectTimeoutMS' => 60000,
  'socketTimeoutMS' => 60000,
));
$database = $mongo->{'mean-prod'};
// Ensure that processing resumes if the connection to Mongo is lost.
do {
  try {
    $cursor = elx_user_points_cursor($database);
    // Store object ID of the last successfully processed record.
    $saved_id = NULL;
    while (!empty($cursor)) {
      elx_user_points_batch($cursor, $database, $userpoint_vocabulary->vid, $saved_id);
      $cursor = elx_user_points_cursor($database, $saved_id);
    }
    $disconnected = FALSE;
  }
  catch (MongoDB\Driver\Exception\ConnectionException $e) {
    $disconnected = TRUE;
  }
}
while ($disconnected);

/**
 * Return the result of a user points query for batch processing.
 *
 * @param MongoDB\Database $database
 *   Mongo database to query.
 * @param MongoDB\BSON\ObjectID $saved_id
 *   Object ID of the last successfully processed record.
 *
 * @return MongoDB\Driver\Cursor
 *   User points query result for batch processing.
 */
function elx_user_points_cursor(MongoDB\Database $database, MongoDB\BSON\ObjectID $saved_id = NULL) {
  if (isset($saved_id)) {
    $query = array(
      '_id' => array('$gt' => $saved_id),
    );
  }
  else {
    $query = array();
  }
  return $database->userPoints->find($query, array(
    'sort' => array('_id' => 1),
    'limit' => 10,
  ));
}

/**
 * Processes a batch of user points.
 *
 * @param MongoDB\Driver\Cursor $cursor
 *   User points query result to process.
 * @param MongoDB\Database $database
 *   Mongo database for additional queries.
 * @param int $vid
 *   User points vocabulary ID.
 */
function elx_user_points_batch(MongoDB\Driver\Cursor $cursor, MongoDB\Database $database, $vid, &$saved_id) {
  foreach ($cursor as $obj) {
  	$mongo_term_name = '';
    $user_uid = $obj->uid;
    $points = $obj->points;
    $point_type = $obj->kind;
    $user_points[] = array($user_uid, $points, $point_type);
    
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
	  
	  if ($mongo_term_name != 'first-login') {
	  	$entity_type = 'node';
	    // Create and query node collection to retrive nid
        $qry = array('_id' => $saved_id);
        $cursor_node = $database->node->find($qry);
        foreach ($cursor_node as $obj_node) {
          $node_title = $obj->title;
          $node_id = $obj_node->nid;
		  $nid = get_nid_for_points($node_id);
		  if ($nid != FALSE) {
            $reference = $nid;
          }
        }
	  }
	  else {
	  	$entity_type = 'user';
		$reference = $user_uid;
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
          'reference'     => $reference,
          'expirydate'    => 0,
          'expired'       => 0,
          'parent_txn_id' => 0,
          'tid'           => $tid,
          'entity_id'     => $user_uid,
          'entity_type'   => $entity_type,
          'operation'     => 'Insert',
      ))
      ->execute();
      if (empty($txn_id) || $txn_id == FALSE) {
        $error[$user_uid]['error'] = $txn_id . ':' . $user_uid;
      }
 
    }
    $saved_id = $obj->_id;
  }
}

/**
 * @param uid 
 *   user's uid
 * @return
 *   returns total points for a given user
 */
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

/** 
 * @param mongo_tx_name 
 *   taxonomy name
 * @param vid 
 *   taxonomy vocabulary id
 * @return
 *   taxonomy term id
 */
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

/** 
 * Set's the taxonomy for userpoints and returns the tid 
 *
 * @param mongo_tx_name 
 *   taxonomy name
 * @param vid 
 *   taxonomy vocabulary id
 * @return
 *   taxonomy term id
 */
function set_userpoint_taxonomy($mongo_tx_name, $vid) {
  $term = new stdClass();
  $term->vid = $vid;
  $term->name = $mongo_tx_name;
  taxonomy_term_save($term);
  $tid = $term->tid;
  return $tid;
}

/** 
 * Returns user's points per taxonomy id
 *
 * @param user_uid 
 *   user's id
 * @param tid 
 *   taxonomy term id
 * @return
 *   userpoints_points
 */
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

/** 
 * Returns user's points per taxonomy id
 *
 * @param user_uid 
 *   user's id
 * @param tid 
 *   taxonomy term id
 * @return
 *   userpoints_points
 */
function get_nid_for_points($nid) {
  $man_nid = $result[0];
  $result = db_select('field_revision_field_manifest', 'frfm')
    ->fields('frfm', array('entity_id'))
    ->condition('field_manifest_target_id', $nid, '=')
    ->execute()
    ->fetchCol();
  if (!empty($result[0])) {
    $nid = $result[0];
    return $nid;
  }
  else {
    return FALSE;
  }
}