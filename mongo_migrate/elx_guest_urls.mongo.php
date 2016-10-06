<?php

/**
 * Root directory of Drupal installation.
 */
define('DRUPAL_ROOT', getcwd());

require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
drupal_set_time_limit(240);

require '/usr/local/Cellar/composer/1.1.2/libexec/vendor/autoload.php';
$mongo = new MongoDB\Client('mongodb://myelx.cloudapp.net:27017/mean-prod', array(
  'connectTimeoutMS' => 60000,
  'socketTimeoutMS' => 60000,
));
$database = $mongo->{'mean-prod'};
// Ensure that processing resumes if the connection to Mongo is lost.
do {
  try {
    $cursor = elx_guest_url_cursor($database);
    // Store object ID of the last successfully processed record.
    $saved_id = NULL;
    while (!empty($cursor)) {
      elx_guest_url_batch($cursor, $database, $saved_id);
      $cursor = elx_guest_url_cursor($database, $saved_id);
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
function elx_guest_url_cursor(MongoDB\Database $database, MongoDB\BSON\ObjectID $saved_id = NULL) {
  if (isset($saved_id)) {
    $query = array(
      '_id' => array('$gt' => $saved_id),
    );
  }
  else {
    $query = array();
  }
  return $database->node->find($query, array(
    'sort' => array('_id' => 1),
    'limit' => 1,
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
function elx_guest_url_batch(MongoDB\Driver\Cursor $cursor, MongoDB\Database $database, &$saved_id) {
  foreach($cursor as $obj) {
    if ($obj->type == 'guest_accounts') {
      $result = db_select('node', 'n')
        ->fields('n', array('nid'))
        ->condition('type', 'guest_accounts', '=')
        ->condition('title', $obj->title, '=')
        ->execute()
        ->fetchCol();
      if (empty($result[0])) {
	    $guest_node = new stdClass();
	    $guest_node->type = 'guest_accounts';
	    $guest_node->language = $obj->language;
	    $guest_node->title = $obj->title;
	    $guest_node->uid = $obj->uid;
	    $guest_node->status = 1;
	    $guest_node->created = $obj->created;
	    $guest_node->changed = $obj->changed;
	    $guest_node->comment = 1;
	    $guest_node->promote = 1;
	    $guest_node->sticky = 0;
	    $guest_node->tnid = 0;
	    $guest_node->translate = 0;
	    if (isset($obj->uuid)) {
          $guest_node->uuid = $obj->uuid;
	    }
	    node_save($guest_node);
	  }
    }
  }
}