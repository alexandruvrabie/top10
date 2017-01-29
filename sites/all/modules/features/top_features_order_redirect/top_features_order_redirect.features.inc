<?php
/**
 * @file
 * top_features_order_redirect.features.inc
 */

/**
 * Implements hook_node_info().
 */
function top_features_order_redirect_node_info() {
  $items = array(
    'order_redirect' => array(
      'name' => t('Order Redirect'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
