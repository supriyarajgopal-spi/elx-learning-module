<pre>
<?php

/**
 * Root directory of Drupal installation.
 */
chdir('..');
define('DRUPAL_ROOT', getcwd());

require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
drupal_set_time_limit(240);
$userpoint_vocabulary = taxonomy_vocabulary_machine_name_load('userpoints');
$flag = flag_get_flag('first_viewed_content');
require '/home/myelxadmin/.config/composer/vendor/autoload.php';
$mongo = new MongoDB\Client('mongodb://myelx.cloudapp.net:27017/mean-prod', array(
  'connectTimeoutMS' => 60000,
  'socketTimeoutMS' => 60000,
));
$database = $mongo->{'mean-prod'};
// Ensure that processing resumes if the connection to Mongo is lost.
do {
  try {
    $cursor = elx_user_points_cursor($database);
    while (!empty($cursor)) {
      // Start transmitting data to the client so the client has the ability to
      // stop the script. 4097 characters was enough to get the browsers I
      // tested to display output.
      print str_pad('<!--', 4096, '-') . '>';
      flush();

      elx_user_points_batch($cursor, $database, $userpoint_vocabulary->vid, $flag->fid);
      $cursor = elx_user_points_cursor($database);
    }
    $disconnected = FALSE;
  }
  catch (MongoDB\Driver\Exception\ConnectionException $e) {
    $disconnected = TRUE;
  }
} while ($disconnected);

/**
 * Return the result of a user points query for batch processing.
 *
 * @param MongoDB\Database $database
 *   Mongo database to query.
 *
 * @return MongoDB\Driver\Cursor
 *   User points query result for batch processing.
 */
function elx_user_points_cursor(MongoDB\Database $database) {
  // Retrieve object ID of the last successfully processed record.
  $saved_id = variable_get('userpoint_script_id', NULL);
  if (isset($saved_id)) {
    $query = array(
      '_id' => array('$gt' => new MongoDB\BSON\ObjectID($saved_id)),
    );
  }
  else {
    $query = array();
  }
  return $database->userPoints->find($query, array(
    'sort' => array('_id' => 1),
    'limit' => 100,
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
function elx_user_points_batch(MongoDB\Driver\Cursor $cursor, MongoDB\Database $database, $vid, $first_viewed_fid) {
  foreach ($cursor as $obj) {
    $count = $count + 1;
    $reference = NULL;
    $mongo_term_name = '';
    $user_uid = $obj->uid;
    $points = $obj->points;
    $point_type = $obj->kind;

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

        if ($mongo_term_name != 'first-login') {
          $entity_type = 'node';
          // Create and query node collection with findOne to retrive nid
          $qry = array('_id' => new MongoDB\BSON\ObjectId($contentid));
          $qry_result = $database->node->findOne($qry);
          $node_id = $qry_result->nid;
          if ($mongo_term_name == 'product') {
            $nid = get_product_nid_for_points($node_id);
          }
          else {
            $nid = get_h5p_nid_for_points($node_id);
          }
          if ($nid != FALSE) {
            $reference = $nid;
            // Check if first_viewed flag is set and set if not
            $flagging_id = set_first_viewed_flag($first_viewed_fid, $entity_type, $nid, $user_uid);
          }
        }
        else {
          $entity_type = 'user';
          $reference = $user_uid;
        }
      }

      // Insert user points into userpoints, userpoints_total, and userpoints_txn tables
      // Check userpoints table for already created user/tid combo
      $userpoints_points = get_user_points($user_uid, $tid);
      // Add points to userpoints.
      if ($userpoints_points === FALSE) {
        $pid = db_insert('userpoints')
          ->fields(array(
            'uid' => $user_uid,
            'points' => $points,
            'max_points' => $points,
            'last_update' => REQUEST_TIME,
            'tid' => $tid,
          ))
          ->execute();
        if (empty($pid) || $pid == FALSE) {
          $error[$user_uid]['error'] = $pid . ':' . $user_uid;
        }
      }
      else {
        $userpoints_points += $points;
        $fid = db_update('userpoints')
          ->fields(array(
            'points' => $userpoints_points,
            'max_points' => $userpoints_points,
            'last_update' => REQUEST_TIME,
          ))
          ->condition('uid', $user_uid, '=')
          ->execute();
      }

      // Check userpoints_total table for points
      $user_total_points = get_points_for_userpoints_total($user_uid);
      // Add points to userpoints_total.
      if ($user_total_points !== FALSE) {
        $user_total_points += $points;
        $fid = db_update('userpoints_total')
          ->fields(array(
            'points' => $user_total_points,
            'max_points' => $user_total_points,
            'last_update' => REQUEST_TIME,
          ))
          ->condition('uid', $user_uid, '=')
          ->execute();
      }
      else {
        $user_point_total_id = db_insert('userpoints_total')
          ->fields(array(
            'uid' => $user_uid,
            'points' => $points,
            'max_points' => $points,
            'last_update' => REQUEST_TIME,
          ))
          ->execute();
        if (empty($user_point_total_id) || $user_point_total_id == FALSE) {
          $error_total[$user_uid]['error'] = $points . ':' . $user_uid;
        }
      }

      $txn_id = db_insert('userpoints_txn')
        ->fields(array(
          'uid' => $user_uid,
          'approver_uid' => 0,
          'points' => $points,
          'time_stamp' => REQUEST_TIME,
          'changed' => REQUEST_TIME,
          'status' => 0,
          'description' => $mongo_term_name,
          'reference' => $reference,
          'expirydate' => 0,
          'expired' => 0,
          'parent_txn_id' => 0,
          'tid' => $tid,
          'entity_id' => $user_uid,
          'entity_type' => $entity_type,
          'operation' => 'Insert',
        ))
        ->execute();
      if (empty($txn_id) || $txn_id == FALSE) {
        $error[$user_uid]['error'] = $txn_id . ':' . $user_uid;
      }
    }
    variable_set('userpoint_script_id', (string) $obj->_id);
  }
}

/**
 * @param uid 
 *   user's uid
 * @return
 *   returns total points for a given user
 */
function get_points_for_userpoints_total($uid) {
  return db_select('userpoints_total', 'upt')
    ->fields('upt', array('points'))
    ->condition('uid', $uid, '=')
    ->execute()
    ->fetchField();
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
  return db_select('taxonomy_term_data', 'ttd')
    ->fields('ttd', array('tid'))
    ->condition('vid', $vid, '=')
    ->condition('name', $mongo_tx_name, '=')
    ->execute()
    ->fetchField();
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
  return db_select('userpoints', 'up')
    ->fields('up', array('points'))
    ->condition('uid', $user_uid, '=')
    ->condition('tid', $tid, '=')
    ->execute()
    ->fetchField();
}

/**
 * Returns nid for content
 *
 * @param nid 
 *   mongo manifest nid
 * @return
 *   h5p content nid
 */
function get_h5p_nid_for_points($nid) {
  static $drupal_static_fast;
  if (!isset($drupal_static_fast)) {
    $drupal_static_fast[__FUNCTION__] = &drupal_static(__FUNCTION__);
    $drupal_static_fast[__FUNCTION__]['table_manifest'] = _field_sql_storage_tablename(field_info_field('field_manifest'));
    $drupal_static_fast[__FUNCTION__]['column_manifest'] = _field_sql_storage_columnname('field_manifest', 'target_id');
    $drupal_static_fast[__FUNCTION__]['table_h5p_node'] = _field_sql_storage_tablename(field_info_field('field_h5p_node'));
    $drupal_static_fast[__FUNCTION__]['column_h5p_node'] = _field_sql_storage_columnname('field_h5p_node', 'target_id');
  }
  $table_manifest = &$drupal_static_fast[__FUNCTION__]['table_manifest'];
  $column_manifest = &$drupal_static_fast[__FUNCTION__]['column_manifest'];
  $table_h5p_node = &$drupal_static_fast[__FUNCTION__]['table_h5p_node'];
  $column_h5p_node = &$drupal_static_fast[__FUNCTION__]['column_h5p_node'];

  $query = db_select($table_manifest, 'frfm');
  $query->join($table_h5p_node, 'h5p', 'frfm.entity_type = h5p.entity_type AND frfm.entity_id = h5p.entity_id');
  $query->leftJoin('node', 'n', "h5p.$column_h5p_node = n.nid AND n.tnid <> :tnid", array(
    ':tnid' => 0,
  ));
  $query->addExpression("COALESCE(n.tnid, h5p.$column_h5p_node)");
  return $query
      ->condition("frfm.$column_manifest", $nid)
      ->range(0, 1)
      ->execute()
      ->fetchField();
}

/**
 * Returns product nid
 *
 * @param nid 
 *   mongo manifest product nid
 * @return
 *   product nid
 */
function get_product_nid_for_points($nid) {
  static $drupal_static_fast;
  if (!isset($drupal_static_fast)) {
    $drupal_static_fast[__FUNCTION__] = &drupal_static(__FUNCTION__);
    $drupal_static_fast[__FUNCTION__]['table'] = _field_sql_storage_tablename(field_info_field('field_manifest'));
    $drupal_static_fast[__FUNCTION__]['column'] = _field_sql_storage_columnname('field_manifest', 'target_id');
  }
  $table = &$drupal_static_fast[__FUNCTION__]['table'];
  $column = &$drupal_static_fast[__FUNCTION__]['column'];

  $query = db_select($table, 'frfm');
  $query->leftJoin('node', 'n', 'frfm.entity_id = n.nid AND n.tnid <> :tnid', array(
    ':tnid' => 0,
  ));
  $query->addExpression("COALESCE(n.tnid, frfm.entity_id)");
  return $query
      ->condition('frfm.entity_type', 'node')
      ->condition("frfm.$column", $nid)
      ->range(0, 1)
      ->execute()
      ->fetchField();
}

/**
 * Checks if first_viewed_content is set and if not sets the flag
 *
 * @param first_viewed_fid 
 *   flag fid for first_viewed_content
 * @param entity_type 
 *   node
 * @param nid 
 *   entity_id or nid for content viewed 
 * @param user_uid 
 *   user's uid
 * @return
 *   flagging id
 */
function set_first_viewed_flag($first_viewed_fid, $entity_type, $nid, $user_uid) {
  $result_get = db_select('flagging', 'f')
    ->fields('f', array('flagging_id'))
    ->condition('fid', $first_viewed_fid, '=')
    ->condition('entity_type', $entity_type, '=')
    ->condition('entity_id', $nid, '=')
    ->condition('uid', $user_uid, '=')
    ->execute()
    ->fetchField();
  if (!empty($result_get[0])) {
    return $result_get[0];
  }
  else {
    $result_set = db_insert('flagging')
      ->fields(array(
        'fid' => $first_viewed_fid,
        'entity_type' => $entity_type,
        'entity_id' => $nid,
        'uid' => $user_uid,
        'sid' => 0,
        'timestamp' => REQUEST_TIME,
      ))
      ->execute();
    return $result_set[0];
  }
}
?>
</pre>
