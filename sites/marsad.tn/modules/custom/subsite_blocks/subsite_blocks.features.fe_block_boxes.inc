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
  $fe_block_boxes->info = 'This content is wrong';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'data_wrong';
  $fe_block_boxes->body = 'test fr';

  $export['data_wrong'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Introduction à marsad';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'introduction';
  $fe_block_boxes->body = '<p>&lt;h2&gt;Bienvenu sur Marsad&lt;/h2&gt;<br>&lt;p&gt;Bienvenu sur Marsad, l’observatoire de l’assemblée constituante tunisienne.&lt;/br&gt;<br>Ici vous pouvez:&lt;/p&gt;<br>&lt;ul&gt;<br>&lt;li&gt;Accéder aux informations de bases concernant l’assemblée: sa &lt;a href="#"&gt;structure&lt;/a&gt;, son règlement intérieur, ses &lt;a href="#"&gt;commissions&lt;/a&gt; et leur composition.&lt;/li&gt;<br>&lt;li&gt;Consulter les &lt;a href="#"&gt;profils&lt;/a&gt; mis à jours de vos élus.&lt;/li&gt;<br>&lt;li&gt;Consulter les rapports et les comptes rendu des commissions.&lt;/li&gt;<br>&lt;li&gt;Suivre les &lt;a href="#"&gt;votes&lt;/a&gt; à l’assemblée en détails et en statistiques.&lt;/li&gt;<br>&lt;li&gt;Profiter d’une &lt;a href="#"&gt;analyse&lt;/a&gt; journalistique des évènements et enjeux majeurs qui entourent le processus de rédaction de la constitution.&lt;/li&gt;<br>&lt;li&gt;Suivre une &lt;a href="#"&gt;couverture&lt;/a&gt; en direct des séances plénière, conférences et débats autour de la constituante.&lt;/li&gt;<br>&lt;/ul&gt;<br>&lt;h2&gt;Devenez citoyen actif, rejoignez le débat.&lt;/h2&gt;<br>&lt;p&gt;Bientôt, Marsad vous rapproche encore plus de la constituante en vous permettant de débattre publiquement avec vos élus.&lt;/br&gt;<br>Au moyens de questions / réponses, vous engagez le débat...&lt;/p&gt;<br>&lt;p&gt;Abonnez vous à notre &lt;a href="#"&gt;newsletter&lt;/a&gt;, suivez notre compte &lt;a href="#"&gt;twitter&lt;/a&gt; ou notre page &lt;a href="#"&gt;facebook&lt;/a&gt; pour vous tenir au courant de la disponibilité de cette nouvelle fonction.&lt;/p&gt;</p>';

  $export['introduction'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Metanavi Addthis';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'metanavi_addthis';
  $fe_block_boxes->body = '<!-- AddThis Button BEGIN -->
<div class="addthis_toolbox addthis_default_style ">
<a class="addthis_button_email"> Email</a>
<a class="addthis_button_facebook"> Facebook</a>
<a class="addthis_button_google_plusone"></a>
<a class="addthis_button_delicious"> Delicious</a>
<a class="addthis_button_favorites"> Favorit</a>
<a class="addthis_button_twitter"> Twitter</a>
<a class="addthis_button_stumbleupon"> StumbleUpon</a>
<a class="addthis_button_more"> weitere</a>
</div>
<script type="text/javascript" src="http://s7.addthis.com/js/250/addthis_widget.js#pubid=xa-4f9976e51a56ded5"></script>
<!-- AddThis Button END -->';

  $export['metanavi_addthis'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Media Footer';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'social_media_footer';
  $fe_block_boxes->body = '<ul class="menu"><li class="first leaf facebook"><a href="https://www.facebook.com/marsadTN" title="">Facebook</a></li><li class="leaf twitter"><a href="https://twitter.com/AlBawsalaTN" title="">Twitter</a></li></ul>';

  $export['social_media_footer'] = $fe_block_boxes;

  return $export;
}
