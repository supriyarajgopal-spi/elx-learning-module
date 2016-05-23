<?php
/**
 * @file
 *   Paragrahs module web services functions.
 */

/**
 * Implements hook_services_resources().
 */
function paragraphs_deploy_services_resources() {
  $resources = array();
  $resources['paragraphs_item'] = array();
  return $resources;
}