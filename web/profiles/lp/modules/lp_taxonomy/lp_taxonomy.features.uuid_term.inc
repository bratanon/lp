<?php
/**
 * @file
 * lp_taxonomy.features.uuid_term.inc
 */

/**
 * Implementation of hook_uuid_features_default_terms().
 */
function lp_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'uuid' => '1c7ee159-9c93-9494-a5ad-0edfc4fdadf9',
    'name' => 'Banan',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => 'frukt',
  );
  $terms[] = array(
    'uuid' => '40210670-b34e-ede4-b554-954cb72b99a7',
    'name' => 'Porsche',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => 'bilar',
  );
  $terms[] = array(
    'uuid' => '47afa70e-cfb9-36f4-5150-3876e287858b',
    'name' => 'Apelsin',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => 'frukt',
  );
  $terms[] = array(
    'uuid' => '6209f49b-beba-6994-0d0d-d44b20081ffe',
    'name' => 'Äpple',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => 'frukt',
  );
  $terms[] = array(
    'uuid' => '8d8ff4e0-067a-a444-6150-2f6814ca3405',
    'name' => 'Ford',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => 'bilar',
  );
  $terms[] = array(
    'uuid' => '9ccf6a97-bc26-37e4-5175-43aa22e5e10b',
    'name' => 'Päron',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => 'frukt',
  );
  $terms[] = array(
    'uuid' => 'a679e042-908a-a4f4-6d33-805c799a76ac',
    'name' => 'Volvo',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => 'bilar',
  );
  $terms[] = array(
    'uuid' => 'a7400fe6-2c82-b764-4591-fd36ef96e87f',
    'name' => 'Persika',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => 'frukt',
  );
  $terms[] = array(
    'uuid' => 'd1b1fd5b-c563-b574-c1a4-7e18f2908f5e',
    'name' => 'Ferrari',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => 'bilar',
  );
  return $terms;
}
