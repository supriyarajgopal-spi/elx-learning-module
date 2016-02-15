<?php

class HotspotMigration extends migrate_elx_Basic_Migration {
  public function __construct() {
    parent::__construct();

    //The dependencies.
    $this->dependencies = array('HotspotitemParagraph');
    $this->itemIdentifier = 'csvid';
    //The Description of the import. This desription is shown on the Migrate GUI
    $this->description = t('Import of product content.');

    //The Source of the import
    //$this->source = new MigrateSourceCSV(drupal_get_path('module','migrate_elx') . '/csv/elx.learning_point.csv', array(),
    //array('delimiter' => ',', 'header_rows' => 1, 'embedded_newlines'=> TRUE, 'enclosure'=>'"'));
    $query = db_select('learning_point_csv', 'l')->fields('l')->condition('content_type', 'hot_spot' , '=');
    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationNode('hot_spots', array('text_format' => 'full_html'));

    //Source and destination relation for rollbacks
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'csvid' => array(
          'type' => 'int',
      		'unsigned' => true,
      		'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    //Field ampping
    $this->addFieldMapping('title', 'administrative_title');
    $this->addFieldMapping('title_field', 'administrative_title');
    $this->addFieldMapping('field_hot_spot_image', 'hot_spot_image');
    $this->addFieldMapping('field_hot_spot_image:source_dir')
    ->defaultValue(DRUPAL_ROOT.'/sites/default/files/elx_bulk');
    $this->addFieldMapping('field_subtitle', 'subtitle');
    $this->addFieldMapping('field_intro', 'intro_html');
    //$this->addFieldMapping('field_layout', 'field_layout');
    $this->addFieldMapping('field_hot_spot_collection', 'csvid')
    ->sourceMigration('HotspotitemParagraph');

  }


  /*public function prepareKey($source_key, $row) {
    $key = array();
    $row->item_id = md5($row->administrative_title);
    $row->parent_id = md5($row->parent_item_administrative_title);
    $key['item_id'] = $row->item_id;
    $key['parent_item_id'] = $row->parent_item_id;
    return $key;
  }*/



}

class HotspotitemParagraphMigration extends migrate_elx_Basic_Migration {
  public function __construct() {
		parent::__construct();

		//The dependencies.
		//$this->softDependencies = array('Hotspot');
		//The Description of the import. This desription is shown on the Migrate GUI
		$this->description = t('Import of hot spot content.');

		//The Source of the import
		//$this->source = new MigrateSourceCSV(drupal_get_path('module','migrate_elx') . '/csv/elx.learning_point.csv', array(),
	//	array('delimiter' => ',', 'header_rows' => 1, 'embedded_newlines'=> TRUE, 'enclosure'=>'"'));
  $query = db_select('learning_point_csv', 'l')->fields('l')->condition('content_type', 'hot_spot' , '=');
  $this->source = new MigrateSourceSQL($query);
		$this->destination = new MigrateDestinationParagraphsItem('hot_spot');

		//Source and destination relation for rollbacks
		$this->map = new MigrateSQLMap(
		$this->machineName,
		array(
				'csvid' => array(
					'type' => 'int',
      		'unsigned' => true,
      		'not null' => TRUE,
				),
		),
		MigrateDestinationParagraphsItem::getKeySchema()
		);

		//Field ampping->defaultValue(DRUPAL_ROOT.'/sites/default/files/elx_bulk');
		$this->addFieldMapping('field_hot_spot_x_cordinate',  'hot_spot_group_x_cordinate');
		$this->addFieldMapping('field_hot_spot_y_cordinate',  'hot_spot_group_y_cordinate');
		$this->addFieldMapping('field_hot_spot_text',  'hot_spot_text_html');
		$this->addFieldMapping('field_name')->defaultValue('field_hot_spot_collection');
  }


  /*public function prepareKey($source_key, $row) {
    $key = array();
    $row->item_id = md5($row->administrative_title);
    //$row->parent_id = md5($row->parent_item_administrative_title);
    $key['item_id'] = $row->item_id;
    //$key['parent_item_id'] = $row->parent_item_id;
    return $key;
  }*/

}
