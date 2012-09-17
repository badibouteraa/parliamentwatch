<?php
/**
 * @file
 * subsite_conf.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function subsite_conf_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Media Footer';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'footer_social_media';
  $fe_block_boxes->body = '<ul class="menu"><li class="first leaf facebook"><a href="http://www.facebook.com/PiratenparteiBayern" title="" onclick="window.open(this.href); return false;">Facebook</a></li><li class="leaf twitter"><a href="https://twitter.com/PiratenBayern" title="" onclick="window.open(this.href); return false;">Twitter</a></li><li class="leaf google"><a href="https://plus.google.com/107862983960150496076/posts" title="" onclick="window.open(this.href); return false;">Google+</a></li></ul>';

  $export['footer_social_media'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Metanavi Addthis';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'metanavi_addthis';
  $fe_block_boxes->body = '<!-- AddThis Button BEGIN -->
<div class="addthis_toolbox addthis_default_style "><a class="addthis_button_email"> Email</a><a class="addthis_button_facebook"> Facebook</a><a class="addthis_button_google_plusone"></a><a class="addthis_button_delicious"> Delicious</a><a class="addthis_button_favorites"> Favorit</a><a class="addthis_button_twitter"> Twitter</a><a class="addthis_button_stumbleupon"> StumbleUpon</a><a class="addthis_button_more"> plus</a></div><script type="text/javascript" src="http://s7.addthis.com/js/250/addthis_widget.js#pubid=xa-4f9976e51a56ded5"></script>
<!-- AddThis Button END -->';

  $export['metanavi_addthis'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Powered by ...';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'poweredby';
  $fe_block_boxes->body = 'powered by <a href="http://www.abgeordnetenwatch.de" target="_blank">Parlamentwatch e.V.</a>';

  $export['poweredby'] = $fe_block_boxes;

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
