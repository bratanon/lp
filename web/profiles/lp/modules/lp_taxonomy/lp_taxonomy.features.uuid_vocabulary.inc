<?php
/**
 * @file
 * lp_taxonomy.features.uuid_vocabulary.inc
 */

/**
 * Implementation of hook_uuid_features_default_vocabularies().
 */
function lp_taxonomy_uuid_features_default_vocabularies() {
  $vocabularies = array();

  $vocabularies[] = array(
    'uuid' => 'bilar',
    'name' => 'Bilar',
    'description' => '',
    'module' => 'taxonomy',
    'weight' => '0',
  );
  $vocabularies[] = array(
    'uuid' => 'frukt',
    'name' => 'Frukt',
    'description' => '',
    'module' => 'taxonomy',
    'weight' => '0',
  );
  return $vocabularies;
}
