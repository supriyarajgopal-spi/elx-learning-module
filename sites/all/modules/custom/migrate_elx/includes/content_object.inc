<?php

class ContentobjectMigration extends migrate_elx_Basic_Migration {
  public function __construct() {
    parent::__construct();

    //The dependencies.
    $this->dependencies = array('List', 'Hotspot');
    $this->itemIdentifier = 'cdvid';

    //The Description of the import. This desription is shown on the Migrate GUI
    $this->description = t('Import of content objects.');
    $res = db_query("SELECT source FROM {feeds_source} WHERE id='data_xls'");
    $source = $res->fetchAll();
    //dpm($source[0]->source);
    //The Source of the import
    if(!$csv = drupal_realpath($source[0]->source)){
      $csv = drupal_get_path('module','migrate_elx') . '/csv/elx.learning_point.csv';
    }
    //$this->source = new MigrateSourceCSV(drupal_get_path('module','migrate_elx') . '/csv/elx.learning_point.csv', array(),
    $this->source = new MigrateSourceCSV($csv, array(), array('delimiter' => ',', 'header_rows' => 1, 'embedded_newlines'=> TRUE));

    //$this->source = new MigrateSourceSQL('');
    $this->destination = new MigrateDestinationNode('content_object', array('text_format' => 'full_html'));

    //Source and destination relation for rollbacks
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'csvid' => array(
          'type' => 'varchar',
      		'length' => 255,
      		'not null' => TR
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    //Field ampping
    $this->addFieldMapping('title', 'administrative_title');
    $this->addFieldMapping('title_field', 'administrative_title');
    //$this->addFieldMapping('field_subtitle', 'subtitle');
    $this->addFieldMapping('field_intro', 'intro_html');
    $this->addFieldMapping('field_markets', 'content_object_markets')
    ->separator(',');
    $this->addFieldMapping('field_tags_keywords', 'content_object_tags_keywords')
    ->separator(',');
    //$this->addFieldMapping('language', 'language');
    $this->addFieldMapping('field_learning_objects', 'administrative_title')
    ->separator(',')
    //
    ->sourceMigration(array('List','Hotspot','Questionanswer'));

  }

  /*function prepareRow($row) {
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
  }*/

}
