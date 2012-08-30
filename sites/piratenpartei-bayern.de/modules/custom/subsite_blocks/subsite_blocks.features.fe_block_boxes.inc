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
  $fe_block_boxes->info = 'Text über der Profilliste der Abgeordneten im Bezirkstag';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'profiles_bezirkstag';
  $fe_block_boxes->body = 'Lorem ipsum ad qui amet dolore, vitae cetero quaerendum mel ea. Facilis fastidii duo no. Viris partiendo ius no, alia animal nam at. Feugait imperdiet ius an, no quis facer lucilius vis. Aliquam saperet contentiones ex pro, id idque offendit ius. Fugit suavitate ad eam, ut essent debitis cum. Cu duo iudico instructior. Sea te choro perfecto, per eu meis nonumy percipit. Ut mea sint constituam, cu pro impedit constituam. Et diam wisi tollit mel, te has atqui veritus. Falli volumus ullamcorper id vis, fugit debet ei pri. Mea esse saperet oporteat cu, sumo interesset an cum.';

  $export['profiles_bezirkstag'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Text über der Profilliste der Abgeordneten im Bundestag';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'profiles_bundestag';
  $fe_block_boxes->body = 'Lorem ipsum ad qui amet dolore, vitae cetero quaerendum mel ea. Facilis fastidii duo no. Viris partiendo ius no, alia animal nam at. Feugait imperdiet ius an, no quis facer lucilius vis. Aliquam saperet contentiones ex pro, id idque offendit ius. Fugit suavitate ad eam, ut essent debitis cum. Cu duo iudico instructior. Sea te choro perfecto, per eu meis nonumy percipit. Ut mea sint constituam, cu pro impedit constituam. Et diam wisi tollit mel, te has atqui veritus. Falli volumus ullamcorper id vis, fugit debet ei pri. Mea esse saperet oporteat cu, sumo interesset an cum.';

  $export['profiles_bundestag'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Text über der Profilliste der Abgeordneten im Landtag';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'profiles_landtag';
  $fe_block_boxes->body = 'Lorem ipsum ad qui amet dolore, vitae cetero quaerendum mel ea. Facilis fastidii duo no. Viris partiendo ius no, alia animal nam at. Feugait imperdiet ius an, no quis facer lucilius vis. Aliquam saperet contentiones ex pro, id idque offendit ius. Fugit suavitate ad eam, ut essent debitis cum. Cu duo iudico instructior. Sea te choro perfecto, per eu meis nonumy percipit. Ut mea sint constituam, cu pro impedit constituam. Et diam wisi tollit mel, te has atqui veritus. Falli volumus ullamcorper id vis, fugit debet ei pri. Mea esse saperet oporteat cu, sumo interesset an cum.';

  $export['profiles_landtag'] = $fe_block_boxes;

  return $export;
}
