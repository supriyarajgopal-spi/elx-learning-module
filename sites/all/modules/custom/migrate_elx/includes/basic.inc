<?php
abstract class migrate_elx_Basic_Migration extends Migration {
  public function __construct() {
    parent::__construct();
    ini_set('auto_detect_line_endings', TRUE);
  }
}