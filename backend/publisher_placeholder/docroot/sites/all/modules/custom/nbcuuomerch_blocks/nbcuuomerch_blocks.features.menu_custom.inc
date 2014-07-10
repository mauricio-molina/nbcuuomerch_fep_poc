<?php
/**
 * @file
 * nbcuuomerch_blocks.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function nbcuuomerch_blocks_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-main.
  $menus['menu-footer-main'] = array(
    'menu_name' => 'menu-footer-main',
    'title' => 'Footer main',
    'description' => '',
  );
  // Exported menu: menu-header-shopping-menu.
  $menus['menu-header-shopping-menu'] = array(
    'menu_name' => 'menu-header-shopping-menu',
    'title' => 'Header shopping menu',
    'description' => '',
  );
  // Exported menu: menu-header-store-menu.
  $menus['menu-header-store-menu'] = array(
    'menu_name' => 'menu-header-store-menu',
    'title' => 'Header store menu',
    'description' => '',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer main');
  t('Header shopping menu');
  t('Header store menu');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');


  return $menus;
}
