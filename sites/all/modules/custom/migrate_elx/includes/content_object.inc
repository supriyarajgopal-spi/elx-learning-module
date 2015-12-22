<?php

class ContentobjectMigration extends migrate_elx_Basic_Migration {
  public function __construct() {
    parent::__construct();
		
    //The dependencies.
    $this->dependencies = array('List', 'Hotspot');

    //The Description of the import. This desription is shown on the Migrate GUI
    $this->description = t('Import of content objects.');

    //The Source of the import
    $this->source = new MigrateSourceCSV(drupal_get_path('module','migrate_elx') . '/csv/elx.learning_point.csv', array(),
    array('delimiter' => ';', 'header_rows' => 1, 'embedded_newlines'=> TRUE, 'enclosure'=>"'"));
    $this->destination = new MigrateDestinationNode('content_object', array('text_format' => 'full_html'));

    //Source and destination relation for rollbacks
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'item_id' => array(
          'type' => 'varchar',
      		'length' => 255,
      		'not null' => TRUE,
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );
    
    //Field ampping
    $this->addFieldMapping('title', 'original_administrative_title');
    $this->addFieldMapping('field_subtitle', 'field_subtitle');
    $this->addFieldMapping('field_intro', 'intro_html');
    $this->addFieldMapping('field_markets', 'content_object_markets')->separator(',');
    $this->addFieldMapping('language', 'language');
    $this->addFieldMapping('field_learning_objects', 'learning_objects')
    ->separator(',')
    ->sourceMigration(array('List','Hotspot'));
    
  }
  
  function prepareRow($row) {
  	//dpm($row);
  	$row->list = db_select('migrate_map_list', 'ml')
  	->fields('ml', array('destid1'))
  	->condition('sourceid2', $row->item_id)
  	->execute()
  	->fetchCol();
  	$row->hotspot = db_select('migrate_map_hotspot', 'ml')
  	->fields('ml', array('destid1'))
  	->condition('sourceid2', $row->item_id)
  	->execute()
  	->fetchCol();
  	$row->learning_objects = array_merge($row->list,$row->hotspot);
  	dpm($row->learning_objects);
  	$row->learning_objects = implode(',', $row->learning_objects);
  	print_r($row->learning_objects);
  	if($row->content_type != 'content_object'){
  		return false;
  	}
  }
  
  function prepare($node, stdClass $row) {
  	
  	$learning_objects = explode(',', $row->learning_objects);
  	foreach($learning_objects as $lo){
  		if($lo)
  		$node->field_learning_objects['en'][]['target_id'] = $lo;
  	}
  	
  	dpm($node);
  	dpm($row);
  }
  
}
