<?php
/**
 * @file
 * nbcuuomerch_blocks.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nbcuuomerch_blocks_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-main_-2014-universal-studios-all-rights-reserved-copyright-and-trademark-notices-of-specific-items-on-this-site:<front>
  $menu_links['menu-footer-main_-2014-universal-studios-all-rights-reserved-copyright-and-trademark-notices-of-specific-items-on-this-site:<front>'] = array(
    'menu_name' => 'menu-footer-main',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => '© 2014 Universal Studios. All rights reserved. Copyright and trademark notices of specific items on this site',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-main_-2014-universal-studios-all-rights-reserved-copyright-and-trademark-notices-of-specific-items-on-this-site:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-main_ca-rights:<front>
  $menu_links['menu-footer-main_ca-rights:<front>'] = array(
    'menu_name' => 'menu-footer-main',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'CA Rights',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-main_ca-rights:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-main_privacy-policy---revised:<front>
  $menu_links['menu-footer-main_privacy-policy---revised:<front>'] = array(
    'menu_name' => 'menu-footer-main',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Privacy Policy - Revised',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-main_privacy-policy---revised:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-main_terms-of-use:<front>
  $menu_links['menu-footer-main_terms-of-use:<front>'] = array(
    'menu_name' => 'menu-footer-main',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Terms of Use',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-main_terms-of-use:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-header-shopping-menu_cart-empty:<front>
  $menu_links['menu-header-shopping-menu_cart-empty:<front>'] = array(
    'menu_name' => 'menu-header-shopping-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Cart (empty)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-shopping-menu_cart-empty:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-shopping-menu_checkout:<front>
  $menu_links['menu-header-shopping-menu_checkout:<front>'] = array(
    'menu_name' => 'menu-header-shopping-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Checkout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-shopping-menu_checkout:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-store-menu_buy-tickets:<front>
  $menu_links['menu-header-store-menu_buy-tickets:<front>'] = array(
    'menu_name' => 'menu-header-store-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Buy Tickets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-store-menu_buy-tickets:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-user-menu-anonymous_my-account:user
  $menu_links['menu-user-menu-anonymous_my-account:user'] = array(
    'menu_name' => 'menu-user-menu-anonymous',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-user-menu-anonymous_my-account:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-user-menu-anonymous_sign-up:https://www.universalorlando.com/Customer-Profile/emailsignup.aspx
  $menu_links['menu-user-menu-anonymous_sign-up:https://www.universalorlando.com/Customer-Profile/emailsignup.aspx'] = array(
    'menu_name' => 'menu-user-menu-anonymous',
    'link_path' => 'https://www.universalorlando.com/Customer-Profile/emailsignup.aspx',
    'router_path' => '',
    'link_title' => 'Sign Up',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-user-menu-anonymous_sign-up:https://www.universalorlando.com/Customer-Profile/emailsignup.aspx',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Buy Tickets');
  t('CA Rights');
  t('Cart (empty)');
  t('Checkout');
  t('Log out');
  t('My Account');
  t('Privacy Policy - Revised');
  t('Sign Up');
  t('Terms of Use');
  t('User account');
  t('© 2014 Universal Studios. All rights reserved. Copyright and trademark notices of specific items on this site');


  return $menu_links;
}
