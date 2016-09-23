<?php
/**
 * @file
 * elx_header.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function elx_header_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Search input for search product library view';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'product_library_search_form';
  $fe_block_boxes->body = '<form action="/search-product-library" method="get" id="search-block-form" accept-charset="UTF-8" _lpchecked="1"><div>
<div class="container-inline">
 <h2 class="element-invisible">Search form</h2>
 <div class="form-item form-type-textfield form-item-search-block-form">
 <label class="element-invisible" for="edit-search-block-form--2">Search </label>
 <input title="Enter the terms you wish to search for." placeholder="Search" type="text" id="edit-search-block-form--2" name="combine" value="" size="15" maxlength="128" class="form-text">
</div>
<div class="form-actions form-wrapper" id="edit-actions"><input type="submit" id="edit-submit" name="op" value="Search" class="form-submit"></div>
</div>
</div></form>';

  $export['product_library_search_form'] = $fe_block_boxes;

  return $export;
}
