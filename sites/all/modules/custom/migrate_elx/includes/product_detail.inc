<?php

class ProductdetailMigration extends Migration {
	
  public function __construct() {
    parent::__construct();


    //The Description of the import. This desription is shown on the Migrate GUI
    $this->description = t('Import of product content.');

    //The Source of the import
    $this->source = new MigrateSourceCSV(drupal_get_path('module','migrate_elx') . '/csv/elx.products.csv', array(), 
    array('delimiter' => ',', 'header_rows' => 1, 'embedded_newlines'=> TRUE, 'enclosure'=>'"'));

    $this->destination = new MigrateDestinationNode('product_detail', array('text_format' => 'full_html'));

    //Source and destination relation for rollbacks
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'admin_title_field' => array(
          'type' => 'varchar',
      		'length' => 255,
      		'not null' => TRUE,
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    //Field ampping
    $this->addFieldMapping('language')->defaultValue('en');
    $this->addFieldMapping('translate')->defaultValue(true);
    $this->addFieldMapping('title', 'admin_title_field');
    //$this->addFieldMapping('title_field', 'admin_title_field');
    $this->addFieldMapping('field_display_title', 'field_display_title');
    $this->addFieldMapping('field_subtitle', 'field_subtitle');
    $this->addFieldMapping('language','language')->defaultValue('en');
    $this->addFieldMapping('field_tags_keywords', 'field_tags_keywords')
    ->separator(',');
    $this->addFieldMapping('field_tags_keywords:create_term')
    ->defaultValue(TRUE);
    $this->addFieldMapping('field_product_categories', 'field_product_categories')->separator(',');;
    $this->addFieldMapping('field_season','field_season');
    $this->addFieldMapping('field_point_value', 'field_point_value');
    $this->addFieldMapping('field_perfect_partners_text', 'field_perfect_partners_text_html_translated');
    $this->addFieldMapping('field_markets', 'field_markets')->separator(',');
    $this->addFieldMapping('field_why_there_s_only_one', 'field_why_there_s_only_one_html_translated');
    $this->addFieldMapping('field_demonstration', 'field_demonstration_html_translated');
    $this->addFieldMapping('field_benefits', 'field_benefits_html_translated');
    $this->addFieldMapping('field_if_she_asks_share', 'field_if_she_asks_share_html_translated');
    $this->addFieldMapping('field_customer_questions', 'field_customer_questions_html_translated');
    $this->addFieldMapping('field_perfect_partners_text', 'field_perfect_partners_text_html_translated');
    //
    $this->addFieldMapping('field_related_products', 'field_related_products')->separator(',');
    //Needs File Dependency
    $this->addFieldMapping('field_product_image', 'field_image');
    $this->addFieldMapping('field_product_image:source_dir')
    ->defaultValue(DRUPAL_ROOT.'/sites/default/files/elx_bulk');
    
    
  }
  
  public function prepareRow($row) {
  	//print_r($row);
  }
}
