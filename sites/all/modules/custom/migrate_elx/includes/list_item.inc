<?php

class ListMigration extends migrate_elx_Basic_Migration {
  public function __construct() {
    parent::__construct();

    //The dependencies.
    $this->dependencies = array('ListitemParagraph');

    //The Description of the import. This desription is shown on the Migrate GUI
    $this->description = t('Import of product content.');
    $this->itemIdentifier = 'administrative_title';
    //The Source of the import
    //$this->source = new MigrateSourceCSV(drupal_get_path('module','migrate_elx') . '/csv/elx.learning_point.csv',array(),
    //array('delimiter' => ',', 'header_rows' => 1, 'embedded_newlines'=> TRUE, 'enclosure'=>'"'));
    $query = db_select('learning_point_csv', 'l')->fields('l')->condition('content_type', 'list_item' , '=');
    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationNode('list', array('text_format' => 'full_html'));

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
    //$this->addFieldMapping('nid', 'csvrownum');
    $this->addFieldMapping('title', 'administrative_title');
    $this->addFieldMapping('title_field', 'administrative_title');
    $this->addFieldMapping('field_subtitle', 'field_subtitle');
    $this->addFieldMapping('field_intro', 'intro_html');
    $this->addFieldMapping('language', 'language')
    ->defaultValue('en');
    //$this->addFieldMapping('field_layout', 'field_layout');
    $this->addFieldMapping('field_list_item', 'csvid')
    ->sourceMigration('ListitemParagraph');

  }




  /**
   * Prepare a proper unique key.
   */
   /*public function prepareKey($source_key, $row) {
       $row->nid = $row->csvrownum;
       return parent::prepareKey($source_key, $row);
   }*/


}

class ListitemParagraphMigration extends migrate_elx_Basic_Migration {
  public function __construct() {
		parent::__construct();

		//The dependencies.
		//$this->softDependencies = array('List');
		//The Description of the import. This desription is shown on the Migrate GUI
		$this->description = t('Import of product content.');

		//The Source of the import
		//$this->source = new MigrateSourceCSV(drupal_get_path('module','migrate_elx') . '/csv/elx.learning_point.csv', array(),
		//array('delimiter' => ',', 'header_rows' => 1, 'embedded_newlines'=> TRUE, 'enclosure'=>'"'));
    $query = db_select('learning_point_csv', 'l')->fields('l')->condition('content_type', 'list_item' , '=');
    $this->source = new MigrateSourceSQL($query);
		$this->destination = new MigrateDestinationParagraphsItem('list_item', array('en','full_html'));

		//Source and destination relation for rollbacks
		$this->map = new MigrateSQLMap(
		$this->machineName,
		array(
				'csvid' => array(
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



  /*public function prepareKey($source_key, $row) {
      $row->item_id = $row->csvrownum;
      return parent::prepareKey($source_key, $row);
  }*/
}
