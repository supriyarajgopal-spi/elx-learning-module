<?php

class QuestionanswerMigration extends Migration {
  public function __construct() {
    parent::__construct();

    //The defintion of the collumns. Keys are integers. values are array(field name, description).


    //The Description of the import. This desription is shown on the Migrate GUI
    $this->description = t('Import of product content.');

    //The Source of the import
    $this->source = new MigrateSourceCSV(drupal_get_path('module','migrate_elx') . '/csv/elx.learning_point.csv', array(),
    array('delimiter' => ';', 'header_rows' => 1, 'embedded_newlines'=> TRUE, 'enclosure'=>"'"));
    
    $this->destination = new MigrateDestinationNode('question_and_answer');

    //Source and destination relation for rollbacks
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'item_id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'alias' => 'import'
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    //Field ampping
    $this->addFieldMapping('title', 'administrative_title');
    $this->addFieldMapping('field_subtitle', 'cult_csv');
    $this->addFieldMapping('field_intro', 'grex_csv');
    $this->addFieldMapping('field_completion_text', 'variety_csv');
    //$this->addFieldMapping('field_plant_family', 'family_csv');
    //$this->addFieldMapping('field_plant_genus', 'genus_csv');
  }
}

class QuestionParagraphMigration extends migrate_elx_Basic_Migration {
	public function __construct() {
		parent::__construct();

		//The dependencies.
		//$this->softDependencies = array('List');
		//The Description of the import. This desription is shown on the Migrate GUI
		$this->description = t('Import of product content.');

		//The Source of the import
		$this->source = new MigrateSourceCSV(drupal_get_path('module','migrate_elx') . '/csv/elx.learning_point.csv', array(),
				array('delimiter' => ';', 'header_rows' => 1, 'embedded_newlines'=> TRUE, 'enclosure'=>"'"));

		$this->destination = new MigrateDestinationParagraphsItem('answers');

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
						),
				),
				MigrateDestinationParagraphsItem::getKeySchema()
				);

		//Field ampping->defaultValue(DRUPAL_ROOT.'/sites/default/files/elx_bulk');
		$this->addFieldMapping('field_question_media', 'qa_group_question_image');
		$this->addFieldMapping('field_question_media:source_dir')
		->defaultValue(DRUPAL_ROOT.'/sites/default/files/elx_bulk');
		$this->addFieldMapping('field_video_poster_image', 'qa_group_question_image');
		$this->addFieldMapping('field_video_poster_image:source_dir')
		->defaultValue(DRUPAL_ROOT.'/sites/default/files/elx_bulk');
		$this->addFieldMapping('field_question_video', 'qa_group_question_video');
		$this->addFieldMapping('field_question_video:source_dir')
		->defaultValue(DRUPAL_ROOT.'/sites/default/files/elx_bulk');
		$this->addFieldMapping('field_question_text',  'qa_group_question_text');
		$this->addFieldMapping('field_name')->defaultValue('field_paragraph_answer');
	}


	function prepareRow($row) {
		if($row->content_type != 'question_answer' || ($row->content_type == 'list_item' && empty($row->list_item_group_image) && empty($row->list_item_group_video) && empty($row->list_item_group_text_html))){
			return false;
		}
	}
}

class QuestionParagraphMigration extends migrate_elx_Basic_Migration {
	public function __construct() {
		parent::__construct();

		//The dependencies.
		//$this->softDependencies = array('List');
		//The Description of the import. This desription is shown on the Migrate GUI
		$this->description = t('Import of product content.');

		//The Source of the import
		$this->source = new MigrateSourceCSV(drupal_get_path('module','migrate_elx') . '/csv/elx.learning_point.csv', array(),
				array('delimiter' => ';', 'header_rows' => 1, 'embedded_newlines'=> TRUE, 'enclosure'=>"'"));

		$this->destination = new MigrateDestinationParagraphsItem('multiple_choice_collection');

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
						),
				),
				MigrateDestinationParagraphsItem::getKeySchema()
				);

		//Field ampping->defaultValue(DRUPAL_ROOT.'/sites/default/files/elx_bulk');
		$this->addFieldMapping('field_list_image', 'qa_group_question_text');
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
