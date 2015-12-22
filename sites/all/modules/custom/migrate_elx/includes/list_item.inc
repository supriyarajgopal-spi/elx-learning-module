<?php

class ListMigration extends migrate_elx_Basic_Migration {
  public function __construct() {
    parent::__construct();

    //The dependencies.
    $this->dependencies = array('ListitemParagraph');
    
    //The Description of the import. This desription is shown on the Migrate GUI
    $this->description = t('Import of product content.');

    //The Source of the import
    $this->source = new MigrateSourceCSV(drupal_get_path('module','migrate_elx') . '/csv/elx.learning_point.csv', array(),
    array('delimiter' => ';', 'header_rows' => 1, 'embedded_newlines'=> TRUE, 'enclosure'=>"'"));
    $this->destination = new MigrateDestinationNode('list', array('text_format' => 'full_html'));

    //Source and destination relation for rollbacks
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'item_id' => array(
          'type' => 'varchar',
      		'length' => 255,
      		'not null' => TRUE,
        ),
	      	'parent_item_id' => array(
	      	'type' => 'varchar',
	      	'length' => 255,
	      	'not null' => TRUE,
  			)
      ),
      MigrateDestinationNode::getKeySchema()
    );
    
    //Field ampping
    $this->addFieldMapping('title', 'administrative_title');
    $this->addFieldMapping('field_subtitle', 'field_subtitle');
    $this->addFieldMapping('field_intro', 'intro_html');
    //$this->addFieldMapping('field_layout', 'field_layout');
    $this->addFieldMapping('field_list_item', 'item_id')
    ->sourceMigration('ListitemParagraph');
    
  }

  
  function prepareRow($row) {
  	if($row->content_type != 'list_item' || ($row->content_type == 'list_item' && !empty($row->list_item_group_image) && !empty($row->list_item_group_video) && !empty($row->list_item_group_text_html))){
  		return false;
  	}
  }
 
  
}

class ListitemParagraphMigration extends migrate_elx_Basic_Migration {
  public function __construct() {
		parent::__construct();
		
		//The dependencies.
		//$this->softDependencies = array('List');
		//The Description of the import. This desription is shown on the Migrate GUI
		$this->description = t('Import of product content.');
		
		//The Source of the import
		$this->source = new MigrateSourceCSV(drupal_get_path('module','migrate_elx') . '/csv/elx.learning_point.csv', array(), 
		array('delimiter' => ';', 'header_rows' => 1, 'embedded_newlines'=> TRUE, 'enclosure'=>"'"));
		
		$this->destination = new MigrateDestinationParagraphsItem('list_item');
		
		//Source and destination relation for rollbacks
		$this->map = new MigrateSQLMap(
		$this->machineName,
		array(
				'item_id' => array(
					'type' => 'varchar',
      		'length' => 255,
      		'not null' => TRUE,
				),
				
		),
		MigrateDestinationParagraphsItem::getKeySchema()
		);
		
		//Field ampping->defaultValue(DRUPAL_ROOT.'/sites/default/files/elx_bulk');
		$this->addFieldMapping('field_list_image', 'list_item_group_image');
		$this->addFieldMapping('field_list_image:source_dir')
		->defaultValue(DRUPAL_ROOT.'/sites/default/files/elx_bulk');
		$this->addFieldMapping('field_list_video', 'list_item_group_video');
		$this->addFieldMapping('field_list_video:source_dir')
		->defaultValue(DRUPAL_ROOT.'/sites/default/files/elx_bulk');
		$this->addFieldMapping('field_list_text',  'list_item_group_text_html');
		$this->addFieldMapping('field_name')->defaultValue('field_list_item');
  }
  
  
  function prepareRow($row) {
  	if($row->content_type != 'list_item' || ($row->content_type == 'list_item' && empty($row->list_item_group_image) && empty($row->list_item_group_video) && empty($row->list_item_group_text_html))){
  		return false;
  	}
  }
}