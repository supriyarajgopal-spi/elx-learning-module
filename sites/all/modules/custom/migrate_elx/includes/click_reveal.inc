<?php

class ContentobjectMigration extends Migration {
  public function __construct() {
    parent::__construct();

    //The defintion of the collumns. Keys are integers. values are array(field name, description).
    $columns = array(
      0 => array('admin_title_field', 'PLANTID'),
      2 => array('field_display_title', 'FGSID'),
      3 => array('field_subtitle', 'VARIETY'),
      4 => array('language', 'LOWER_VARIETY'),
      5 => array('field_tags_keywords', 'AUTHORITY'),
      6 => array('field_product_categories', 'NAUTHORITY'),
      7 => array('field_season', 'VAR'),
      8 => array('field_point_value', 'CULT'),
      9 => array('field_markets', 'FORM'),
      10 => array('field_why_there_s_only_one_html_translated', 'SUBSPECIES'),
      11 => array('field_demonstration_html_translated', 'GREX'),
      12 => array('field_benefits_html_translated', 'TRADEMARK'),
      13 => array('field_if_she_asks_share_html_translated', 'NOTES'),
      14 => array('field_perfect_partners_text html_translated', 'NOTES'),
      15 => array('field_customer_questions_html_translated', 'NOTES'),
      16 => array('field_if_she_asks_share_html_translated', 'NOTES'),
      17 => array('field_related_products', 'NOTES'),
      

      
      
      
      
    );

    //The Description of the import. This desription is shown on the Migrate GUI
    $this->description = t('Import of product content.');

    //The Source of the import
    $this->source = new MigrateSourceCSV(drupal_get_path('module','migrate_elx') . '/csv/elx.products.csv', $columns, array('delimiter' => ',', 'header_rows' => 1));

    $this->destination = new MigrateDestinationNode('product_detail');

    //Source and destination relation for rollbacks
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'id_csv' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'alias' => 'import'
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    //Field ampping
    $this->addFieldMapping('title', 'title_csv');
    $this->addFieldMapping('body', 'body_csv');
    $this->addFieldMapping('field_plant_cultivar', 'cult_csv');
    $this->addFieldMapping('field_plant_form', 'form_csv');
    $this->addFieldMapping('field_plant_grex', 'grex_csv');
    $this->addFieldMapping('field_plant_variety', 'variety_csv');
    $this->addFieldMapping('field_plant_subspecies', 'sub_csv');
    $this->addFieldMapping('field_plant_authorities', 'auth_csv');
    $this->addFieldMapping('field_plant_naming_authorities', 'auth_csv');
    $this->addFieldMapping('field_plant_mark', 'mark_csv');
    $this->addFieldMapping('field_plant_hybrid', 'var_csv');
    //$this->addFieldMapping('field_plant_family', 'family_csv');
    //$this->addFieldMapping('field_plant_genus', 'genus_csv');
  }
}
