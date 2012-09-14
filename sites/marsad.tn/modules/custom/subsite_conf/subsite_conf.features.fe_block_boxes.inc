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
  $fe_block_boxes->info = 'This content is wrong';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'data_wrong';
  $fe_block_boxes->body = 'test fr';

  $export['data_wrong'] = $fe_block_boxes;

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
<a class="addthis_button_more"> plus</a>
</div>
<script type="text/javascript" src="http://s7.addthis.com/js/250/addthis_widget.js#pubid=xa-4f9976e51a56ded5"></script>
<!-- AddThis Button END -->';

  $export['metanavi_addthis'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Tunisian map';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'radar';
  $fe_block_boxes->body = '<script type="text/javascript" src="http://www.albawsala.com/pw/jquery.js"></script>
<script type="text/javascript" src="https://ajax.googleapis.com/ajax/libs/jqueryui/1.8.13/jquery-ui.min.js"></script>
<script type="text/javascript" src="http://www.albawsala.com/pw/deps_ar.js"></script>
<script type="text/javascript" src="http://www.albawsala.com/pw/deps_fr.js"></script>
<script type="text/javascript" src="http://www.albawsala.com/pw/hemicycle.js"></script>
<link rel="stylesheet" type="text/css" href="http://ajax.googleapis.com/ajax/libs/jqueryui/1.8.10/themes/ui-lightness/jquery-ui.css" />
<link rel="stylesheet" type="text/css" href="http://www.albawsala.com/pw/style.css" />
<div id="radar" class="float">
    <svg class="float" width="400" height="320" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" version="1.1">
        <g id="seats" class="filtre-groupe"></g>
    </svg>
    <div class="float" style="margin-top:20px">
        
        <div id="filtre-nom" class="filter-bloc clearfloat">
            <span class="float name" id="radar-trans1">Nom</span>
            <input id="radar-trans01" class="clearfloat top-5" type="text" name="nom" placeholder="Chercher un député"/>
            <div id="infobulle" class="clearfloat top-5">
                <a id="close" class="floati" href="#">X</a>
                <a id="nom" href="#" class="float"></a>
            </div>
        </div>
        
        <div class="filter-bloc clearfloat">
            <span class="float name" id="radar-trans2">Sexe</span>
            <div class="clearfloat top-5">
                <input class="clearfloat" id="tous" type="radio" name="sexe" value="" checked="checked"/>
                <label class="float" for="tous" id="radar-trans3">Tous</label>
            </div>
            <div class="float top-5 left-10">
                <input class="float" id="femme" type="radio" name="sexe" value="F"/>
                <label class="float" for="femme" id="radar-trans4">Femmes</label>
            </div>
            <div class="float top-5 left-10">
                <input class="float" id="homme" type="radio" name="sexe" value="H"/>
                <label class="float" for="homme" id="radar-trans5">Hommes</label>
            </div>
        </div>
        
        <div class="filter-bloc clearfloat">
            <span class="float name" id="radar-trans6">Circonscription</span>
            <select class="clearfloat top-5" name="region"/>
                <option value="" id="radar-trans7">Toutes les circonscriptions</option>
            </select>
        </div>
        
        <div class="filter-bloc clearfloat">
            <span class="float name" id="radar-trans8">Groupe</span>
            <select class="clearfloat top-5" name="groupe"/>
                <option value="" id="radar-trans9">Tout les groupes</option>
            </select>
        </div>
        
        <div id="filter-results" class="clearfloat">
            <button id="filter-reset" class="floati left-10">Reset</button>
            <button id="results-show" class="floati">Afficher (216)</button>
        </div>
    
    </div>

</div>';

  $export['radar'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Media Footer';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'social_media_footer';
  $fe_block_boxes->body = '<ul class="menu"><li class="first leaf facebook"><a href="https://www.facebook.com/marsadTN" title="">Facebook</a></li><li class="leaf twitter"><a href="https://twitter.com/AlBawsalaTN" title="">Twitter</a></li></ul>';

  $export['social_media_footer'] = $fe_block_boxes;

  return $export;
}
