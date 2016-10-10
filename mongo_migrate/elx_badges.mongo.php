<pre>
<?php
print str_pad("Starting\n<!--", 4095, '-') . ">\n";
flush();

/**
 * Root directory of Drupal installation.
 */
chdir('..'); // Prod
define('DRUPAL_ROOT', getcwd());

require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
drupal_set_time_limit(240);

require '/home/myelxadmin/.config/composer/vendor/autoload.php'; // Prod path
//require '/usr/local/Cellar/composer/1.1.2/libexec/vendor/autoload.php';
$mongo = new MongoDB\Client('mongodb://myelx.cloudapp.net:27017/mean-prod', array(
  'connectTimeoutMS' => 60000,
  'socketTimeoutMS' => 60000,
));
$database = $mongo->{'mean-prod'};
$batch = 0;
// Ensure that processing resumes if the connection to Mongo is lost.
do {
  try {
    print str_pad("Connecting to Mongo\n<!--", 4095, '-') . ">\n";
    flush();
    $cursor = elx_user_badge_cursor($database);
    while (!empty($cursor)) {
      // Start transmitting data to the client so the client has the ability to
      // stop the script. 4097 characters was enough to get the browsers I
      // tested to display output.
      print str_pad('Starting batch ' . ++$batch . "\n<!--", 4095, '-') . ">\n";
      flush();
      
      elx_user_badge_batch($cursor, $database);
      $cursor = elx_user_badge_cursor($database);
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
function elx_user_badge_cursor(MongoDB\Database $database) {
  // Retrieve object ID of the last successfully processed record.
  $saved_id = variable_get('badge_script_id', NULL);
  if (isset($saved_id)) {
    $query = array(
      '_id' => array('$gt' => new MongoDB\BSON\ObjectID($saved_id)),
    );
  }
  else {
    $query = array();
  }
  return $database->user->find($query, array(
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
 */
function elx_user_badge_batch(MongoDB\Driver\Cursor $cursor, MongoDB\Database $database) {
  foreach($cursor as $obj) {
    ob_start();
    var_dump($obj);
    print str_pad(print_r('Processing ' . ob_get_clean(), TRUE) . '<!--', 4095, '-') . ">\n";
    flush();
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
    variable_set('badge_script_id', (string) $obj->_id);
  }
  // Insert mongo user badges into new elx badges schema
  foreach($user_badges as $user) {
    $user_uid = $user['uid'];
    $user['badges'] = array_unique($user['badges']);
    foreach($user['badges'] as $badge) {
      if ($badge == 'First 1000 Points') {
  	    $badge = 'First 1,000 Points';
  	  }
	  if ($badge == 'First 5000 Points') {
	    $badge = 'First 5,000 Points';
	  }
	  $badge_flag_title = $badge . ' Badge';
      // get flag id fid
      $result = db_select('flag', 'f')
        ->fields('f', array('fid'))
        ->condition('title', $badge_flag_title, '=')
        ->execute()
        ->fetchCol();
	  if (!empty($result[0])) {
	    $fid = $result[0];
	    $result_flagging = db_select('flagging', 'f')
        ->fields('f', array('flagging_id'))
        ->condition('entity_id', $user_uid, '=')
	    ->condition('fid', $fid, '=')
        ->execute()
        ->fetchCol();
	    if (empty($result_flagging[0])) {
	      // Insert mongo user badges into flagging and flag count
          $flagging_id = db_insert('flagging')
            ->fields(array(
              'fid'         => $fid,
              'entity_type' => 'user',
              'entity_id'   => $user_uid,
              'uid'         => 0,
              'sid'         => 0,
              'timestamp'   => REQUEST_TIME,
          ))
          ->execute();
	      $count = get_flagcount_for_badge($fid, $user_uid);
	      if ($count != FALSE) {
	        $count = $count + 1;
            $fid = db_update('flag_counts')
              ->fields(array(
                'count'        => $count,
                'last_updated' => REQUEST_TIME,
              ))
	        ->condition('fid', $fid, '=')
	        ->condition('entity_id', $user_uid, '=')
            ->execute();
	      }
	      else {
	        $flagging_id = db_insert('flag_counts')
            ->fields(array(
              'fid'          => $fid,
              'entity_type'  => 'node',
              'entity_id'    => $user_uid,
              'count'        => 1,
              'last_updated' => REQUEST_TIME,
          ))
          ->execute();
	      }
	      if (empty($flagging_id)) {
	  	    $error[$user_uid]['error'] = $fid . ':' . $user_uid;
	      }
	    }
	  }
    }
  }
}

function get_flagcount_for_badge($fid, $entity_id) {
  $result = db_select('flag_counts', 'fc')
    ->fields('fc', array('count'))
    ->condition('entity_id', $entity_id, '=')
	->condition('fid', $fid, '=')
    ->execute()
    ->fetchCol();
  if (!empty($result[0])) {
	$count = $result[0];
    return $count;
  }
  else {
	return FALSE;
  }
}
?>
The user points script has completed.
</pre>