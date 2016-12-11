<?php
/**
* @file Contains the code to generate the custom drush commands.
*/

/**
* Implements hook_drush_command().
*/
function ww_migrate_drupal_drush_command() {
  $items = array();
  $items['import-drupal'] = [
    'description' => 'Launch the Drupal import data.',
    'drupal dependencies' => ['ww_migrate_drupal'],
    'aliases' => ['import:drupal'],
  ];
  return $items;
}
