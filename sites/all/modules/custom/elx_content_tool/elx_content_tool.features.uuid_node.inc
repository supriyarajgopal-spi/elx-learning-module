<?php
/**
 * @file
 * elx_content_tool.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function elx_content_tool_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 30639,
  'title' => 'TR Singapore',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4afc23d7-e57f-457e-8666-b465b4f5647f',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852996,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0519cebe-ccd2-47a8-a664-ee006ad34a57',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:23:16 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Italy',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1749575d-5516-4130-b5f4-b0db534c0d6c',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852210,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0664d693-ba5f-4eec-b70d-4f670d74c7ef',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:10:10 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Fashion Group',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '95f35233-a594-4e97-a597-6c96e2ec8106',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852015,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '085cfc0a-c4bb-4d7d-b931-1db19a7d2f87',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:06:55 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Travel Retail Europe - Middle East - Africa',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'fef1da17-cf2b-4b73-9247-d1a40e5670ca',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465853114,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0bc6a71b-e0cb-4c2e-b198-1fd55216c473',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:25:14 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'TR Malaysia',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '94777997-ac4c-4206-b7bc-1417e39b47de',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465853031,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0e02eac0-3071-413b-a8f5-23ae4a2a19d5',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:23:51 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Travel Retail Americas - North America',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '992fbbe7-f184-4d75-84b9-c92def748a34',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852946,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '101ea022-8394-4f0f-9e29-de1e6b4000ca',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:22:26 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Finland',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3c1ec15c-29e0-4640-ba8b-433036178e99',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852573,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '18af59f4-510b-4409-8791-63dd2c74d61b',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:16:13 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Thailand',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5dccfcec-ec8f-49ef-9f1a-ec92fe398ba5',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465851837,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '192a5297-fc32-4fbe-bc90-bf672036e134',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:03:57 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'China',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '60264e22-d93b-4dbe-941f-48ca3153eda6',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465851334,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1a113d88-6b70-4c21-a7df-6e982bf15776',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 20:55:34 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Puerto Rico',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c972460c-a53b-4e73-bf08-e2e1b534b86e',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465851911,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1d30894e-a8cf-49d6-bd7c-d8235d9b69b2',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:05:11 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Travel Retail Japan',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3c1e5d85-8986-4176-abca-3959bca082a0',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465853061,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2026b560-19d8-4e70-93d7-293f6cbedf81',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:24:21 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Nordic',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9b43bc3c-6728-4b0a-bcdc-d701c06e5961',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852560,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '20e646eb-9e4b-4459-b0b7-73e5e062143d',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:16:00 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'South Africa',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c8f092b2-dd93-46ae-a2e1-60932fa6ec68',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852648,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2136f229-5bcf-4af6-a0e6-0d9c05128f81',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:17:28 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Vietnam',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '65e9fecc-b15b-45a6-b2e0-a8680c1936c9',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465851858,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2bf69868-26f8-4797-80a6-2ad0ae86eeab',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:04:18 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Korea',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ecfc9c78-4ecd-47c9-a493-300181d0da4f',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465851389,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '314d5d2c-4b96-4b63-a130-7d3dd8f383c6',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 20:56:29 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Ireland',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '52ac2f4e-89e0-4a63-8903-dd01c68e69c6',
  'type' => 'market',
  'language' => 'en',
  'created' => 1466789546,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '352d4dc8-b840-4724-be6d-c821bde4956f',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-24 17:32:26 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Hong Kong',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e2d4d30d-1c21-4c67-a854-e8d07e5112ee',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465851354,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '35d80f77-f576-4df6-94a2-a709f4827b4a',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 20:55:54 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Turkey',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '7f78c21c-d66d-457c-8cc9-18d4ef80ab56',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852705,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '36267a49-de69-497e-960b-f37c01a7eb14',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:18:25 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Travel Retail Korea',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9dded384-91be-4cda-a8f2-f7db00a223fd',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465853091,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3ce5dc72-bd1a-4846-9caf-63e206f7fe69',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:24:51 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Japan',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '94c18185-590a-47bd-8854-8db29b15f789',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465851371,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '40534793-d7af-4d60-9bb4-f1df3f3b8158',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 20:56:11 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Czech Republic',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0b016e10-ce37-4617-9781-4e669d17f4cf',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852079,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4126b00d-c030-4107-97bf-c1964505277f',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:07:59 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Greece',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '345baaed-3f17-4f42-be4d-06377cf5942f',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852131,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '496ca999-b795-4b9d-957a-a10a72465ab7',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:08:51 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Romania',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '2749d3df-b58d-4fa0-81f0-8c6bd03554b4',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852744,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4e81b55f-eba7-4551-b4e8-fa852b4b117e',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:19:04 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Germany',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '09edfc70-afb0-41d5-89c9-3a650041d806',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852117,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '50553e9f-9a5f-4aaa-ada6-1f25d87da5d8',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:08:37 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Travel Retail Middle Pacific',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '69f9e6c0-0c01-48f1-adea-f932879f89d7',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465853074,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '54f251e7-1f6a-4770-ac93-f97d9d4f7a89',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:24:34 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Austria',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8e8d1462-978d-489d-8a47-deda7709a253',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852037,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '555d83bd-e06d-4e25-8744-4852cab7c43d',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:07:17 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'U.K.',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd5e3ff19-d7bd-431b-b214-a66dacc0ced2',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852692,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5a0bca06-8977-4c06-83bb-a0e5fa704882',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:18:12 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Bulgaria',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '64123860-b2ca-48a8-a677-97de63f4d5c2',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852726,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '60cdcde9-4106-44c4-9fed-9093e40028b4',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:18:46 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'TR Thailand',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ea41c5f0-cdf0-4248-b3ee-f49e008f3e1a',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465853010,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6df4754c-9ece-4b3f-806b-37be280eba40',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:23:30 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Venezuela',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '350dd9dc-d059-410b-90af-30383b7d26ae',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852863,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7032ffc6-0bec-4ff5-aac8-867050910665',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:21:03 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Travel Retail Americas - South - Central America - Mexico',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '87f744b9-0601-405d-bcc1-05db4a2ab529',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852908,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '71555f0c-624a-4205-9146-d447653ee99c',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:21:48 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Southern Cone - Chile - Peru - Argentina',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '963c7357-fc5f-4c0a-bc2d-80f7db9d8b91',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852822,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '72f9c624-0c3a-4691-b8a2-13fca21b0c8b',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:20:22 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Colombia - Ecuador - Central America',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c7068d45-2746-4140-9b48-71d62d1fc2b6',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852889,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7514ee08-c255-4c0f-b1db-ae8c55052e60',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:21:29 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Malaysia',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '625e55ab-46a7-4243-9b97-bb217d92858d',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465851557,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '78081033-3615-44b2-ac9c-7e675ecbcdcb',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 20:59:17 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Taiwan',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4ac2925e-ec62-4cf8-8390-1de69009a936',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465851806,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7c2beeb9-4181-4f42-96c1-e44d15645b4c',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:03:26 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Singapore',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '995d8c72-4a66-40f0-9907-1ef7c89fbff7',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465851586,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '832fe5a5-c4d9-4e07-8cab-e643adbbcffa',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 20:59:46 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Portugal',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd06cb6cd-3453-4315-952e-2f8fd8eb3b96',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852805,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8d265b1d-a25e-4113-a5e3-053574e8e4d5',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:20:05 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Spain',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ecf0e6b0-1a9c-4ecf-9e4b-e5c03a5a4ffb',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852656,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8e65395f-ca3d-4e15-b8de-65ab8a637b8f',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:17:36 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Poland/Lituania/Estonia/Latvia',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8a97606c-00d3-419d-91bf-b8d3dec01708',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852614,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8f84dadb-8f2a-4346-a81b-ac3f8524d88f',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:16:54 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Hungary',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c9040dce-4ff1-4e66-a7d0-e00fe3a26f3d',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852152,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9428804b-b135-4040-a01b-37588a4678c3',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:09:12 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Belgium',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '48da3fca-754f-4a22-bea8-f8bab17c78e4',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852053,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9601403b-2bcb-4737-8796-81a646b83790',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:07:33 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Russia',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c94bcd02-cdf6-4e64-bd4a-6832161cc681',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852626,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '98fcb9ea-a065-457d-befc-11bef4ec318f',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:17:06 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Mexico',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c7497b43-6794-4f3c-92d3-00986d9e3647',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852848,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9a20bd29-c9ea-4115-9744-31425f8d3b13',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:20:48 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Canada',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd3433df1-803c-4d3f-9bbc-86d0b171aa6b',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465232206,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a151d076-f9ae-4726-b32f-7b976c8e1873',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-06 16:56:46 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Travel Retail Americas - Caribbean - Cancun',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ca3a7427-90e1-4b82-879a-0a708455a7c4',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852925,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a3e8bd4d-33cd-433b-961d-a04ee9c442ab',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:22:05 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'India',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6f2d6d0b-1fee-41da-be44-148fdb0fbc3c',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852188,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a63631ab-fcc0-47ef-9612-1bb6ada049a7',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:09:48 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Netherlands',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '360eb2ae-9465-4305-8f85-9ea0e288af15',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852065,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ac5f4f6e-41de-443a-b734-b0225ce83e11',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:07:45 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Switzerland',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '192e4c11-fdaa-4178-87e8-fffcd444e6a0',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852670,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b8cffade-882e-42b8-984a-d8a4e25d99dd',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:17:50 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Cyprus',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8b582805-c0ac-4046-a61e-342a57056e61',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852766,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'be235ec5-be42-4d6d-866e-8990c8152f9b',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:19:26 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Israel',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'da9b0565-9bd0-419d-a34e-36f70aef27bc',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852170,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c0d86624-f9bb-4f34-a4be-a6970a496dac',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:09:30 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'France',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '2abdf502-f743-4e3f-9897-7f635ade4787',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852096,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c67ba915-6796-4564-ad0d-e685f90203af',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:08:16 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Travel Retail China',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '19f66ed2-b12a-4210-9ea1-444a4c669be4',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852975,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd2b1292a-8c6a-4dba-a63c-cf6b2437eaf3',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:22:55 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Travel Retail Oceania',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '2283f385-b52c-4c2f-9304-4d430fab745b',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465853045,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd67898c0-fb3c-4102-9abe-82d585a29dfa',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:24:05 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Travel Retail Hong Kong-Macau-Taiwan',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c6169197-bf61-497b-9028-06cd53286102',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852961,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'daaec0af-88c8-4713-9fe0-013998dc3db2',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:22:41 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Philippines',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ea213720-7e3a-4394-b030-d25a2e73dd52',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465851884,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e0ea066a-e55b-4196-b635-f4b987b60628',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:04:44 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'New Zealand',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '462a048c-0514-48d9-8867-9b8063bbf59d',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465851570,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e35b9451-c434-409f-873d-f637ca7e864c',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 20:59:30 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Australia',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'bdeb0282-9b1f-4266-9028-e24a8ceef28c',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465851320,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f0c8bca2-3177-4469-8458-c71181c69f8f',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 20:55:20 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'United States',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '44351f5b-a7dc-4929-81b2-a44a58b717be',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465232182,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f1e3a06c-b34e-42f3-acae-6fe840128cde',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-06 16:56:22 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Adriatic',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '49a23e7b-ccd4-496c-8ef7-37fc552d9cc3',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852587,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f6416394-fee3-4258-9ab6-8849a7fd3f90',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:16:27 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Indonesia',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd0751717-8ae6-46db-a149-293c0eb01c82',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465851870,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f846c8da-e540-4b8a-98c8-4907934988dc',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:04:30 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Middle East',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'dc2e9a90-6d19-40bf-9f03-3f4319ec551b',
  'type' => 'market',
  'language' => 'en',
  'created' => 1465852785,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f8ea819e-e8ef-430a-90f9-7804e9ea441b',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-13 21:19:45 +0000',
);
  $nodes[] = array(
  'uid' => 30639,
  'title' => 'Eau Claire',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b7f9ce39-e371-472d-8359-11f5ad918aec',
  'type' => 'market',
  'language' => 'en',
  'created' => 1466789535,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fd4da53f-4679-4ed2-a0ac-b82537cea297',
  'revision_uid' => 30639,
  'group_access' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 30639,
  'comment_count' => 0,
  'name' => 'darren.oh@spi.com',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2016-06-24 17:32:15 +0000',
);
  return $nodes;
}
