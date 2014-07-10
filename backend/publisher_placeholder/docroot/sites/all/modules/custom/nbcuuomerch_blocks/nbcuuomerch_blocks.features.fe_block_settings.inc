<?php
/**
 * @file
 * nbcuuomerch_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nbcuuomerch_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-block_header_help'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'block_header_help',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'stark',
        'weight' => -5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-block_header_welcome'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'block_header_welcome',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'stark',
        'weight' => -6,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-main',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'stark',
        'weight' => -9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-header-shopping-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-header-shopping-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'stark',
        'weight' => -7,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-header-store-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-header-store-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'stark',
        'weight' => -9,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'stark',
        'weight' => -8,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
