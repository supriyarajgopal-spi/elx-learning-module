<?php
/**
 * @file
 * elx_guest_url.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function elx_guest_url_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'invite-guest_url-field_invitation_email_address'
  $field_instances['invite-guest_url-field_invitation_email_address'] = array(
    'bundle' => 'guest_url',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Type e-mail address of person you wish invite.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'invite',
    'field_name' => 'field_invitation_email_address',
    'label' => 'E-mail',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'invite-guest_url-field_invitation_email_body'
  $field_instances['invite-guest_url-field_invitation_email_body'] = array(
    'bundle' => 'guest_url',
    'default_value' => array(
      0 => array(
        'value' => '[invite:inviter:name] has invited you to join [site:name] at [site:url].

To become a member of [site:name], click the link below or paste it into the address bar of your browser.

[invite:invite-accept-link]',
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter e-mail body.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'invite',
    'field_name' => 'field_invitation_email_body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'invite-guest_url-field_invitation_email_subject'
  $field_instances['invite-guest_url-field_invitation_email_subject'] = array(
    'bundle' => 'guest_url',
    'default_value' => array(
      0 => array(
        'value' => '[invite:inviter:name] has sent you an invite!',
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter e-mail subject.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'invite',
    'field_name' => 'field_invitation_email_subject',
    'label' => 'Subject',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'invite-invite_by_email-field_invitation_email_address'
  $field_instances['invite-invite_by_email-field_invitation_email_address'] = array(
    'bundle' => 'invite_by_email',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Type e-mail address of person you wish invite.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'invite',
    'field_name' => 'field_invitation_email_address',
    'label' => 'E-mail',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'invite-invite_by_email-field_invitation_email_body'
  $field_instances['invite-invite_by_email-field_invitation_email_body'] = array(
    'bundle' => 'invite_by_email',
    'default_value' => array(
      0 => array(
        'value' => '[invite:inviter:name] has invited you to join [site:name] at [site:url].

To become a member of [site:name], click the link below or paste it into the address bar of your browser.

[invite:invite-accept-link]',
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter e-mail body.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'invite',
    'field_name' => 'field_invitation_email_body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'invite-invite_by_email-field_invitation_email_subject'
  $field_instances['invite-invite_by_email-field_invitation_email_subject'] = array(
    'bundle' => 'invite_by_email',
    'default_value' => array(
      0 => array(
        'value' => '[invite:inviter:name] has sent you an invite!',
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter e-mail subject.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'invite',
    'field_name' => 'field_invitation_email_subject',
    'label' => 'Subject',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('E-mail');
  t('Enter e-mail body.');
  t('Enter e-mail subject.');
  t('Subject');
  t('Type e-mail address of person you wish invite.');

  return $field_instances;
}
