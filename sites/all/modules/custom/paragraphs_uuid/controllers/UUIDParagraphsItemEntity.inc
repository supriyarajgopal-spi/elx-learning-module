<?php

/**
 * Overrides save functionality from FieldCollectionItemEntity.
 *
 * Avoid exceptions when deploying a field_collection entity before its host
 * entity exists.
 */
class UUIDParagraphsItemEntity extends ParagraphsItemEntity {

  /**
   * Construct
   *
   * @param array $values
   * @param string $entityType
   * @throws Exception
   */
  public function __construct(array $values = array(), $entityType = NULL) {
    try {
      parent::__construct($values, $entityType);
    } catch(Exception $e) {
      // If we have a host entity throw normally.
      if (isset($this->hostEntity)) {
        throw $e;
      }
    }
  }

  /**
   * Save the field collection item.
   */
  public function save($skip_host_save = FALSE) {
    if (isset($this->hostEntity)) {
      // If we have a host entity save normally.
      parent::save($skip_host_save);
    } else {
      // If there is no host entity, we may be receiving it from deploy.
      // so save the item directly.
      entity_get_controller($this->entityType)->save($this);
    }
  }
}
