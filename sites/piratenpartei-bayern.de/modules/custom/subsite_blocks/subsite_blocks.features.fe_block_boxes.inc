<?php
/**
 * @file
 * subsite_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function subsite_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Media Footer';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'footer_social_media';
  $fe_block_boxes->body = '<ul class="menu"><li class="first leaf facebook"><a href="https://www.facebook.com/pages/abgeordnetenwatchde/204139474516" title="">Facebook</a></li><li class="leaf twitter"><a href="http://twitter.com/a_watch" title="">Twitter</a></li><li class="leaf google"><a href="https://plus.google.com/101206126881536002255/posts" title="">Google+</a></li><li class="last leaf rss"><a href="/rss.xml" title="">RSS</a></li></ul>';

  $export['footer_social_media'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Text über der Profilliste Bezirkstag';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'profiles_bezirkstag';
  $fe_block_boxes->body = 'Lorem ipsum ad qui amet dolore, vitae cetero quaerendum mel ea. Facilis fastidii duo no. Viris partiendo ius no, alia animal nam at. Feugait imperdiet ius an, no quis facer lucilius vis. Aliquam saperet contentiones ex pro, id idque offendit ius. Fugit suavitate ad eam, ut essent debitis cum. Cu duo iudico instructior. Sea te choro perfecto, per eu meis nonumy percipit. Ut mea sint constituam, cu pro impedit constituam. Et diam wisi tollit mel, te has atqui veritus. Falli volumus ullamcorper id vis, fugit debet ei pri. Mea esse saperet oporteat cu, sumo interesset an cum.';

  $export['profiles_bezirkstag'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Text über der Profilliste Bundestag';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'profiles_bundestag';
  $fe_block_boxes->body = 'Lorem ipsum ad qui amet dolore, vitae cetero quaerendum mel ea. Facilis fastidii duo no. Viris partiendo ius no, alia animal nam at. Feugait imperdiet ius an, no quis facer lucilius vis. Aliquam saperet contentiones ex pro, id idque offendit ius. Fugit suavitate ad eam, ut essent debitis cum. Cu duo iudico instructior. Sea te choro perfecto, per eu meis nonumy percipit. Ut mea sint constituam, cu pro impedit constituam. Et diam wisi tollit mel, te has atqui veritus. Falli volumus ullamcorper id vis, fugit debet ei pri. Mea esse saperet oporteat cu, sumo interesset an cum.';

  $export['profiles_bundestag'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Text über der Profilliste Landtag';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'profiles_landtag';
  $fe_block_boxes->body = 'Lorem ipsum ad qui amet dolore, vitae cetero quaerendum mel ea. Facilis fastidii duo no. Viris partiendo ius no, alia animal nam at. Feugait imperdiet ius an, no quis facer lucilius vis. Aliquam saperet contentiones ex pro, id idque offendit ius. Fugit suavitate ad eam, ut essent debitis cum. Cu duo iudico instructior. Sea te choro perfecto, per eu meis nonumy percipit. Ut mea sint constituam, cu pro impedit constituam. Et diam wisi tollit mel, te has atqui veritus. Falli volumus ullamcorper id vis, fugit debet ei pri. Mea esse saperet oporteat cu, sumo interesset an cum.';

  $export['profiles_landtag'] = $fe_block_boxes;

  return $export;
}
