<?php
/**
 * @file
 * elx_organic_groups_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function elx_organic_groups_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Brand Management and Field' => 'Brand Management and Field',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access apc statistics'.
  $permissions['access apc statistics'] = array(
    'name' => 'access apc statistics',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'apc',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access own authorizations'.
  $permissions['access own authorizations'] = array(
    'name' => 'access own authorizations',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access own consumers'.
  $permissions['access own consumers'] = array(
    'name' => 'access own consumers',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access resource file'.
  $permissions['access resource file'] = array(
    'name' => 'access resource file',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource flagging'.
  $permissions['access resource flagging'] = array(
    'name' => 'access resource flagging',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource i18n_translation'.
  $permissions['access resource i18n_translation'] = array(
    'name' => 'access resource i18n_translation',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource node'.
  $permissions['access resource node'] = array(
    'name' => 'access resource node',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource og_membership'.
  $permissions['access resource og_membership'] = array(
    'name' => 'access resource og_membership',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource og_membership_type'.
  $permissions['access resource og_membership_type'] = array(
    'name' => 'access resource og_membership_type',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource paragraphs_item'.
  $permissions['access resource paragraphs_item'] = array(
    'name' => 'access resource paragraphs_item',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource rules_config'.
  $permissions['access resource rules_config'] = array(
    'name' => 'access resource rules_config',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource taxonomy_term'.
  $permissions['access resource taxonomy_term'] = array(
    'name' => 'access resource taxonomy_term',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource taxonomy_vocabulary'.
  $permissions['access resource taxonomy_vocabulary'] = array(
    'name' => 'access resource taxonomy_vocabulary',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource user'.
  $permissions['access resource user'] = array(
    'name' => 'access resource user',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource wysiwyg_profile'.
  $permissions['access resource wysiwyg_profile'] = array(
    'name' => 'access resource wysiwyg_profile',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access selected languages'.
  $permissions['access selected languages'] = array(
    'name' => 'access selected languages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'i18n_access',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add userpoints'.
  $permissions['add userpoints'] = array(
    'name' => 'add userpoints',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer aes'.
  $permissions['administer aes'] = array(
    'name' => 'administer aes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'aes',
  );

  // Exported permission: 'administer apply for role'.
  $permissions['administer apply for role'] = array(
    'name' => 'administer apply for role',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'apply_for_role',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer blockify'.
  $permissions['administer blockify'] = array(
    'name' => 'administer blockify',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'blockify',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer consumers'.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer dependencies'.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer mail templates'.
  $permissions['administer mail templates'] = array(
    'name' => 'administer mail templates',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'mail_edit',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer mandrill'.
  $permissions['administer mandrill'] = array(
    'name' => 'administer mandrill',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'mandrill',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer oauth'.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer paragraphs bundles'.
  $permissions['administer paragraphs bundles'] = array(
    'name' => 'administer paragraphs bundles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'paragraphs',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer realname'.
  $permissions['administer realname'] = array(
    'name' => 'administer realname',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'realname',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer services'.
  $permissions['administer services'] = array(
    'name' => 'administer services',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer tac_lite'.
  $permissions['administer tac_lite'] = array(
    'name' => 'administer tac_lite',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'tac_lite',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer total control'.
  $permissions['administer total control'] = array(
    'name' => 'administer total control',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'total_control',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer userpoints'.
  $permissions['administer userpoints'] = array(
    'name' => 'administer userpoints',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'apply for roles'.
  $permissions['apply for roles'] = array(
    'name' => 'apply for roles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'apply_for_role',
  );

  // Exported permission: 'approve role applications'.
  $permissions['approve role applications'] = array(
    'name' => 'approve role applications',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'apply_for_role',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass access in place editing'.
  $permissions['bypass access in place editing'] = array(
    'name' => 'bypass access in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear elx_users feeds'.
  $permissions['clear elx_users feeds'] = array(
    'name' => 'clear elx_users feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear product_details feeds'.
  $permissions['clear product_details feeds'] = array(
    'name' => 'clear product_details feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clone node'.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'clone own nodes'.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'create badge content'.
  $permissions['create badge content'] = array(
    'name' => 'create badge content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create content_object content'.
  $permissions['create content_object content'] = array(
    'name' => 'create content_object content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create disclaimer content'.
  $permissions['create disclaimer content'] = array(
    'name' => 'create disclaimer content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create drag_match content'.
  $permissions['create drag_match content'] = array(
    'name' => 'create drag_match content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create drag_select content'.
  $permissions['create drag_select content'] = array(
    'name' => 'create drag_select content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create field_fun_fact_sheet'.
  $permissions['create field_fun_fact_sheet'] = array(
    'name' => 'create field_fun_fact_sheet',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_manifest'.
  $permissions['create field_manifest'] = array(
    'name' => 'create field_manifest',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_price'.
  $permissions['create field_price'] = array(
    'name' => 'create field_price',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create flash_cards content'.
  $permissions['create flash_cards content'] = array(
    'name' => 'create flash_cards content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create guest_accounts content'.
  $permissions['create guest_accounts content'] = array(
    'name' => 'create guest_accounts content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create h5p_content content'.
  $permissions['create h5p_content content'] = array(
    'name' => 'create h5p_content content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create hot_spots content'.
  $permissions['create hot_spots content'] = array(
    'name' => 'create hot_spots content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create list content'.
  $permissions['create list content'] = array(
    'name' => 'create list content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create market content'.
  $permissions['create market content'] = array(
    'name' => 'create market content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create matching_game content'.
  $permissions['create matching_game content'] = array(
    'name' => 'create matching_game content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create product_detail content'.
  $permissions['create product_detail content'] = array(
    'name' => 'create product_detail content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create question_and_answer content'.
  $permissions['create question_and_answer content'] = array(
    'name' => 'create question_and_answer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create reveal content'.
  $permissions['create reveal content'] = array(
    'name' => 'create reveal content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create story content'.
  $permissions['create story content'] = array(
    'name' => 'create story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create tools content'.
  $permissions['create tools content'] = array(
    'name' => 'create tools content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any badge content'.
  $permissions['delete any badge content'] = array(
    'name' => 'delete any badge content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any content_object content'.
  $permissions['delete any content_object content'] = array(
    'name' => 'delete any content_object content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any disclaimer content'.
  $permissions['delete any disclaimer content'] = array(
    'name' => 'delete any disclaimer content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any drag_match content'.
  $permissions['delete any drag_match content'] = array(
    'name' => 'delete any drag_match content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any drag_select content'.
  $permissions['delete any drag_select content'] = array(
    'name' => 'delete any drag_select content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any flash_cards content'.
  $permissions['delete any flash_cards content'] = array(
    'name' => 'delete any flash_cards content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any guest_accounts content'.
  $permissions['delete any guest_accounts content'] = array(
    'name' => 'delete any guest_accounts content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any h5p_content content'.
  $permissions['delete any h5p_content content'] = array(
    'name' => 'delete any h5p_content content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any hot_spots content'.
  $permissions['delete any hot_spots content'] = array(
    'name' => 'delete any hot_spots content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any list content'.
  $permissions['delete any list content'] = array(
    'name' => 'delete any list content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any market content'.
  $permissions['delete any market content'] = array(
    'name' => 'delete any market content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any matching_game content'.
  $permissions['delete any matching_game content'] = array(
    'name' => 'delete any matching_game content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any product_detail content'.
  $permissions['delete any product_detail content'] = array(
    'name' => 'delete any product_detail content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any question_and_answer content'.
  $permissions['delete any question_and_answer content'] = array(
    'name' => 'delete any question_and_answer content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any reveal content'.
  $permissions['delete any reveal content'] = array(
    'name' => 'delete any reveal content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any story content'.
  $permissions['delete any story content'] = array(
    'name' => 'delete any story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tools content'.
  $permissions['delete any tools content'] = array(
    'name' => 'delete any tools content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own badge content'.
  $permissions['delete own badge content'] = array(
    'name' => 'delete own badge content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own content_object content'.
  $permissions['delete own content_object content'] = array(
    'name' => 'delete own content_object content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own disclaimer content'.
  $permissions['delete own disclaimer content'] = array(
    'name' => 'delete own disclaimer content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own drag_match content'.
  $permissions['delete own drag_match content'] = array(
    'name' => 'delete own drag_match content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own drag_select content'.
  $permissions['delete own drag_select content'] = array(
    'name' => 'delete own drag_select content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own flash_cards content'.
  $permissions['delete own flash_cards content'] = array(
    'name' => 'delete own flash_cards content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own guest_accounts content'.
  $permissions['delete own guest_accounts content'] = array(
    'name' => 'delete own guest_accounts content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own h5p_content content'.
  $permissions['delete own h5p_content content'] = array(
    'name' => 'delete own h5p_content content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own hot_spots content'.
  $permissions['delete own hot_spots content'] = array(
    'name' => 'delete own hot_spots content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own list content'.
  $permissions['delete own list content'] = array(
    'name' => 'delete own list content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own market content'.
  $permissions['delete own market content'] = array(
    'name' => 'delete own market content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own matching_game content'.
  $permissions['delete own matching_game content'] = array(
    'name' => 'delete own matching_game content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own product_detail content'.
  $permissions['delete own product_detail content'] = array(
    'name' => 'delete own product_detail content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own question_and_answer content'.
  $permissions['delete own question_and_answer content'] = array(
    'name' => 'delete own question_and_answer content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own reveal content'.
  $permissions['delete own reveal content'] = array(
    'name' => 'delete own reveal content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own story content'.
  $permissions['delete own story content'] = array(
    'name' => 'delete own story content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tools content'.
  $permissions['delete own tools content'] = array(
    'name' => 'delete own tools content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete role applications'.
  $permissions['delete role applications'] = array(
    'name' => 'delete role applications',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'apply_for_role',
  );

  // Exported permission: 'delete terms in content_object_type'.
  $permissions['delete terms in content_object_type'] = array(
    'name' => 'delete terms in content_object_type',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in learning_category'.
  $permissions['delete terms in learning_category'] = array(
    'name' => 'delete terms in learning_category',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in product_category'.
  $permissions['delete terms in product_category'] = array(
    'name' => 'delete terms in product_category',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in pulse_content'.
  $permissions['delete terms in pulse_content'] = array(
    'name' => 'delete terms in pulse_content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in season'.
  $permissions['delete terms in season'] = array(
    'name' => 'delete terms in season',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in story_type'.
  $permissions['delete terms in story_type'] = array(
    'name' => 'delete terms in story_type',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tools_by_role'.
  $permissions['delete terms in tools_by_role'] = array(
    'name' => 'delete terms in tools_by_role',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in userpoints'.
  $permissions['delete terms in userpoints'] = array(
    'name' => 'delete terms in userpoints',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'deny role applications'.
  $permissions['deny role applications'] = array(
    'name' => 'deny role applications',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'apply_for_role',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any badge content'.
  $permissions['edit any badge content'] = array(
    'name' => 'edit any badge content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any content_object content'.
  $permissions['edit any content_object content'] = array(
    'name' => 'edit any content_object content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any disclaimer content'.
  $permissions['edit any disclaimer content'] = array(
    'name' => 'edit any disclaimer content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any drag_match content'.
  $permissions['edit any drag_match content'] = array(
    'name' => 'edit any drag_match content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any drag_select content'.
  $permissions['edit any drag_select content'] = array(
    'name' => 'edit any drag_select content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any flash_cards content'.
  $permissions['edit any flash_cards content'] = array(
    'name' => 'edit any flash_cards content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any guest_accounts content'.
  $permissions['edit any guest_accounts content'] = array(
    'name' => 'edit any guest_accounts content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any h5p_content content'.
  $permissions['edit any h5p_content content'] = array(
    'name' => 'edit any h5p_content content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any hot_spots content'.
  $permissions['edit any hot_spots content'] = array(
    'name' => 'edit any hot_spots content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any list content'.
  $permissions['edit any list content'] = array(
    'name' => 'edit any list content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any market content'.
  $permissions['edit any market content'] = array(
    'name' => 'edit any market content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any matching_game content'.
  $permissions['edit any matching_game content'] = array(
    'name' => 'edit any matching_game content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any product_detail content'.
  $permissions['edit any product_detail content'] = array(
    'name' => 'edit any product_detail content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any question_and_answer content'.
  $permissions['edit any question_and_answer content'] = array(
    'name' => 'edit any question_and_answer content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any reveal content'.
  $permissions['edit any reveal content'] = array(
    'name' => 'edit any reveal content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any story content'.
  $permissions['edit any story content'] = array(
    'name' => 'edit any story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tools content'.
  $permissions['edit any tools content'] = array(
    'name' => 'edit any tools content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit field_fun_fact_sheet'.
  $permissions['edit field_fun_fact_sheet'] = array(
    'name' => 'edit field_fun_fact_sheet',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_manifest'.
  $permissions['edit field_manifest'] = array(
    'name' => 'edit field_manifest',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_price'.
  $permissions['edit field_price'] = array(
    'name' => 'edit field_price',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own badge content'.
  $permissions['edit own badge content'] = array(
    'name' => 'edit own badge content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own content_object content'.
  $permissions['edit own content_object content'] = array(
    'name' => 'edit own content_object content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own disclaimer content'.
  $permissions['edit own disclaimer content'] = array(
    'name' => 'edit own disclaimer content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own drag_match content'.
  $permissions['edit own drag_match content'] = array(
    'name' => 'edit own drag_match content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own drag_select content'.
  $permissions['edit own drag_select content'] = array(
    'name' => 'edit own drag_select content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_fun_fact_sheet'.
  $permissions['edit own field_fun_fact_sheet'] = array(
    'name' => 'edit own field_fun_fact_sheet',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_manifest'.
  $permissions['edit own field_manifest'] = array(
    'name' => 'edit own field_manifest',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_price'.
  $permissions['edit own field_price'] = array(
    'name' => 'edit own field_price',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own flash_cards content'.
  $permissions['edit own flash_cards content'] = array(
    'name' => 'edit own flash_cards content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own guest_accounts content'.
  $permissions['edit own guest_accounts content'] = array(
    'name' => 'edit own guest_accounts content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own h5p_content content'.
  $permissions['edit own h5p_content content'] = array(
    'name' => 'edit own h5p_content content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own hot_spots content'.
  $permissions['edit own hot_spots content'] = array(
    'name' => 'edit own hot_spots content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own list content'.
  $permissions['edit own list content'] = array(
    'name' => 'edit own list content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own market content'.
  $permissions['edit own market content'] = array(
    'name' => 'edit own market content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own matching_game content'.
  $permissions['edit own matching_game content'] = array(
    'name' => 'edit own matching_game content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own product_detail content'.
  $permissions['edit own product_detail content'] = array(
    'name' => 'edit own product_detail content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own question_and_answer content'.
  $permissions['edit own question_and_answer content'] = array(
    'name' => 'edit own question_and_answer content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own reveal content'.
  $permissions['edit own reveal content'] = array(
    'name' => 'edit own reveal content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own story content'.
  $permissions['edit own story content'] = array(
    'name' => 'edit own story content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tools content'.
  $permissions['edit own tools content'] = array(
    'name' => 'edit own tools content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit terms in content_object_type'.
  $permissions['edit terms in content_object_type'] = array(
    'name' => 'edit terms in content_object_type',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in learning_category'.
  $permissions['edit terms in learning_category'] = array(
    'name' => 'edit terms in learning_category',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in product_category'.
  $permissions['edit terms in product_category'] = array(
    'name' => 'edit terms in product_category',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in pulse_content'.
  $permissions['edit terms in pulse_content'] = array(
    'name' => 'edit terms in pulse_content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in season'.
  $permissions['edit terms in season'] = array(
    'name' => 'edit terms in season',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in story_type'.
  $permissions['edit terms in story_type'] = array(
    'name' => 'edit terms in story_type',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tools_by_role'.
  $permissions['edit terms in tools_by_role'] = array(
    'name' => 'edit terms in tools_by_role',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in userpoints'.
  $permissions['edit terms in userpoints'] = array(
    'name' => 'edit terms in userpoints',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit userpoints'.
  $permissions['edit userpoints'] = array(
    'name' => 'edit userpoints',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'flag beautiful_start'.
  $permissions['flag beautiful_start'] = array(
    'name' => 'flag beautiful_start',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag beauty_queen_badge'.
  $permissions['flag beauty_queen_badge'] = array(
    'name' => 'flag beauty_queen_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag early_bird_badge'.
  $permissions['flag early_bird_badge'] = array(
    'name' => 'flag early_bird_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag fast_learner_badge'.
  $permissions['flag fast_learner_badge'] = array(
    'name' => 'flag fast_learner_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag favorites'.
  $permissions['flag favorites'] = array(
    'name' => 'flag favorites',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag first_10000_points_badge'.
  $permissions['flag first_10000_points_badge'] = array(
    'name' => 'flag first_10000_points_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag first_1_000_points_badge'.
  $permissions['flag first_1_000_points_badge'] = array(
    'name' => 'flag first_1_000_points_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag first_5_000_points_badge'.
  $permissions['flag first_5_000_points_badge'] = array(
    'name' => 'flag first_5_000_points_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag first_viewed_content'.
  $permissions['flag first_viewed_content'] = array(
    'name' => 'flag first_viewed_content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag high_five_badge'.
  $permissions['flag high_five_badge'] = array(
    'name' => 'flag high_five_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag little_brown_bottle_badge'.
  $permissions['flag little_brown_bottle_badge'] = array(
    'name' => 'flag little_brown_bottle_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag new_dimension_badge'.
  $permissions['flag new_dimension_badge'] = array(
    'name' => 'flag new_dimension_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag on_your_way_badge'.
  $permissions['flag on_your_way_badge'] = array(
    'name' => 'flag on_your_way_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag one_hundred_percent_club_badge'.
  $permissions['flag one_hundred_percent_club_badge'] = array(
    'name' => 'flag one_hundred_percent_club_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag perfect_10_badge'.
  $permissions['flag perfect_10_badge'] = array(
    'name' => 'flag perfect_10_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag product_pro_badge'.
  $permissions['flag product_pro_badge'] = array(
    'name' => 'flag product_pro_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag rare_beauty_badge'.
  $permissions['flag rare_beauty_badge'] = array(
    'name' => 'flag rare_beauty_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag service_star_badge'.
  $permissions['flag service_star_badge'] = array(
    'name' => 'flag service_star_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag sleeping_beauty_badge'.
  $permissions['flag sleeping_beauty_badge'] = array(
    'name' => 'flag sleeping_beauty_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag three_minute_beauty_badge'.
  $permissions['flag three_minute_beauty_badge'] = array(
    'name' => 'flag three_minute_beauty_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag we_heard_you_badge'.
  $permissions['flag we_heard_you_badge'] = array(
    'name' => 'flag we_heard_you_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag we_heart_you_badge'.
  $permissions['flag we_heart_you_badge'] = array(
    'name' => 'flag we_heart_you_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag welcome_badge'.
  $permissions['flag welcome_badge'] = array(
    'name' => 'flag welcome_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag well_read_100_badge'.
  $permissions['flag well_read_100_badge'] = array(
    'name' => 'flag well_read_100_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag well_read_25_badge'.
  $permissions['flag well_read_25_badge'] = array(
    'name' => 'flag well_read_25_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag well_read_50_badge'.
  $permissions['flag well_read_50_badge'] = array(
    'name' => 'flag well_read_50_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag well_read_75_badge'.
  $permissions['flag well_read_75_badge'] = array(
    'name' => 'flag well_read_75_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'get a system variable'.
  $permissions['get a system variable'] = array(
    'name' => 'get a system variable',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'get any binary files'.
  $permissions['get any binary files'] = array(
    'name' => 'get any binary files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'get own binary files'.
  $permissions['get own binary files'] = array(
    'name' => 'get own binary files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'services',
  );

  // Exported permission: 'have total control'.
  $permissions['have total control'] = array(
    'name' => 'have total control',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'total_control',
  );

  // Exported permission: 'import elx_users feeds'.
  $permissions['import elx_users feeds'] = array(
    'name' => 'import elx_users feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import product_details feeds'.
  $permissions['import product_details feeds'] = array(
    'name' => 'import product_details feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'moderate userpoints'.
  $permissions['moderate userpoints'] = array(
    'name' => 'moderate userpoints',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'oauth authorize any consumers'.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'oauth authorize consumers in drupal'.
  $permissions['oauth authorize consumers in drupal'] = array(
    'name' => 'oauth authorize consumers in drupal',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'oauth register any consumers'.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'oauth register consumers in drupal'.
  $permissions['oauth register consumers in drupal'] = array(
    'name' => 'oauth register consumers in drupal',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'perform unlimited index queries'.
  $permissions['perform unlimited index queries'] = array(
    'name' => 'perform unlimited index queries',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'save file information'.
  $permissions['save file information'] = array(
    'name' => 'save file information',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send arbitrary files'.
  $permissions['send arbitrary files'] = array(
    'name' => 'send arbitrary files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'set a system variable'.
  $permissions['set a system variable'] = array(
    'name' => 'set a system variable',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'tamper elx_users'.
  $permissions['tamper elx_users'] = array(
    'name' => 'tamper elx_users',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper product_details'.
  $permissions['tamper product_details'] = array(
    'name' => 'tamper product_details',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unflag beautiful_start'.
  $permissions['unflag beautiful_start'] = array(
    'name' => 'unflag beautiful_start',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag beauty_queen_badge'.
  $permissions['unflag beauty_queen_badge'] = array(
    'name' => 'unflag beauty_queen_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag early_bird_badge'.
  $permissions['unflag early_bird_badge'] = array(
    'name' => 'unflag early_bird_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag fast_learner_badge'.
  $permissions['unflag fast_learner_badge'] = array(
    'name' => 'unflag fast_learner_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag favorites'.
  $permissions['unflag favorites'] = array(
    'name' => 'unflag favorites',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag first_10000_points_badge'.
  $permissions['unflag first_10000_points_badge'] = array(
    'name' => 'unflag first_10000_points_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag first_1_000_points_badge'.
  $permissions['unflag first_1_000_points_badge'] = array(
    'name' => 'unflag first_1_000_points_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag first_5_000_points_badge'.
  $permissions['unflag first_5_000_points_badge'] = array(
    'name' => 'unflag first_5_000_points_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag first_viewed_content'.
  $permissions['unflag first_viewed_content'] = array(
    'name' => 'unflag first_viewed_content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag high_five_badge'.
  $permissions['unflag high_five_badge'] = array(
    'name' => 'unflag high_five_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag little_brown_bottle_badge'.
  $permissions['unflag little_brown_bottle_badge'] = array(
    'name' => 'unflag little_brown_bottle_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag new_dimension_badge'.
  $permissions['unflag new_dimension_badge'] = array(
    'name' => 'unflag new_dimension_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag on_your_way_badge'.
  $permissions['unflag on_your_way_badge'] = array(
    'name' => 'unflag on_your_way_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag one_hundred_percent_club_badge'.
  $permissions['unflag one_hundred_percent_club_badge'] = array(
    'name' => 'unflag one_hundred_percent_club_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag perfect_10_badge'.
  $permissions['unflag perfect_10_badge'] = array(
    'name' => 'unflag perfect_10_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag product_pro_badge'.
  $permissions['unflag product_pro_badge'] = array(
    'name' => 'unflag product_pro_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag rare_beauty_badge'.
  $permissions['unflag rare_beauty_badge'] = array(
    'name' => 'unflag rare_beauty_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag service_star_badge'.
  $permissions['unflag service_star_badge'] = array(
    'name' => 'unflag service_star_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag sleeping_beauty_badge'.
  $permissions['unflag sleeping_beauty_badge'] = array(
    'name' => 'unflag sleeping_beauty_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag three_minute_beauty_badge'.
  $permissions['unflag three_minute_beauty_badge'] = array(
    'name' => 'unflag three_minute_beauty_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag we_heard_you_badge'.
  $permissions['unflag we_heard_you_badge'] = array(
    'name' => 'unflag we_heard_you_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag we_heart_you_badge'.
  $permissions['unflag we_heart_you_badge'] = array(
    'name' => 'unflag we_heart_you_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag welcome_badge'.
  $permissions['unflag welcome_badge'] = array(
    'name' => 'unflag welcome_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag well_read_100_badge'.
  $permissions['unflag well_read_100_badge'] = array(
    'name' => 'unflag well_read_100_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag well_read_25_badge'.
  $permissions['unflag well_read_25_badge'] = array(
    'name' => 'unflag well_read_25_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag well_read_50_badge'.
  $permissions['unflag well_read_50_badge'] = array(
    'name' => 'unflag well_read_50_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag well_read_75_badge'.
  $permissions['unflag well_read_75_badge'] = array(
    'name' => 'unflag well_read_75_badge',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unlock elx_users feeds'.
  $permissions['unlock elx_users feeds'] = array(
    'name' => 'unlock elx_users feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock product_details feeds'.
  $permissions['unlock product_details feeds'] = array(
    'name' => 'unlock product_details feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use media wysiwyg'.
  $permissions['use media wysiwyg'] = array(
    'name' => 'use media wysiwyg',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'media_wysiwyg',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view devel_node_access information'.
  $permissions['view devel_node_access information'] = array(
    'name' => 'view devel_node_access information',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'devel_node_access',
  );

  // Exported permission: 'view field_fun_fact_sheet'.
  $permissions['view field_fun_fact_sheet'] = array(
    'name' => 'view field_fun_fact_sheet',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_manifest'.
  $permissions['view field_manifest'] = array(
    'name' => 'view field_manifest',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_price'.
  $permissions['view field_price'] = array(
    'name' => 'view field_price',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own field_fun_fact_sheet'.
  $permissions['view own field_fun_fact_sheet'] = array(
    'name' => 'view own field_fun_fact_sheet',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_manifest'.
  $permissions['view own field_manifest'] = array(
    'name' => 'view own field_manifest',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_price'.
  $permissions['view own field_price'] = array(
    'name' => 'view own field_price',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view own userpoints'.
  $permissions['view own userpoints'] = array(
    'name' => 'view own userpoints',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view passwords'.
  $permissions['view passwords'] = array(
    'name' => 'view passwords',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'aes',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view role applications'.
  $permissions['view role applications'] = array(
    'name' => 'view role applications',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
    ),
    'module' => 'apply_for_role',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Brand Management and Field' => 'Brand Management and Field',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view userpoints'.
  $permissions['view userpoints'] = array(
    'name' => 'view userpoints',
    'roles' => array(
      'Administrator' => 'Administrator',
      'EL NYO Global Education System Admin' => 'EL NYO Global Education System Admin',
      'EL Regional Market Admin' => 'EL Regional Market Admin',
    ),
    'module' => 'userpoints',
  );

  return $permissions;
}
