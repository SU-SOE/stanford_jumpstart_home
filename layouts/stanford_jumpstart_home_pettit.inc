<?php
/**
 * @file
 * Code for the Stanford Jumpstart Pettit Homepage layout.
 *  @author Caryl Westerberg <cjwest@stanford.edu>
 */
$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'stanford_jumpstart_home_pettit';
$context->description = 'Homepage: Pettit layout with full-width banner, news, events, and a large custom block';
$context->tag = 'Home Page';
$context->conditions = array(
  'path' => array(
    'values' => array(
      '<front>' => '<front>',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'bean-jumpstart-home-page-full-width-b' => array(
        'module' => 'bean',
        'delta' => 'jumpstart-home-page-full-width-b',
        'region' => 'fullwidth_top',
        'weight' => '-10',
      ),
      'bean-homepage-about-block' => array(
        'module' => 'bean',
        'delta' => 'homepage-about-block',
        'region' => 'content_lower',
        'weight' => '-10',
      ),
      'views-f73ff55b085ea49217d347de6630cd5a' => array(
        'module' => 'views',
        'delta' => 'f73ff55b085ea49217d347de6630cd5a',
        'region' => 'content_lower',
        'weight' => '-9',
      ),
      'bean-jumpstart-large-custom-block' => array(
        'module' => 'bean',
        'delta' => 'jumpstart-large-custom-block',
        'region' => 'content_bottom',
        'weight' => '-10',
      ),
      'views-stanford_events_views-block' => array(
        'module' => 'views',
        'delta' => 'stanford_events_views-block',
        'region' => 'content_bottom',
        'weight' => '-9',
      ),
      'views-3f5a4c4c101b2e6f6d77f52a746a2433' => array(
        'module' => 'views',
        'delta' => '3f5a4c4c101b2e6f6d77f52a746a2433',
        'region' => 'main_bottom',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('Home Page');
t('Homepage: Pettit layout with full-width banner, news, events, and a large custom block');
