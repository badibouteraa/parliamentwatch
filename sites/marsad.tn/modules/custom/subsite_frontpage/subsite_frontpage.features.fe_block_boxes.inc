<?php
/**
 * @file
 * subsite_frontpage.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function subsite_frontpage_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Tunisian map';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'radar';
  $fe_block_boxes->body = '<script type="text/javascript" src="http://www.albawsala.com/pw/jquery.js"></script>
<script type="text/javascript" src="https://ajax.googleapis.com/ajax/libs/jqueryui/1.8.13/jquery-ui.min.js"></script>
<script type="text/javascript" src="http://www.albawsala.com/pw/deps_fr.js"></script>
<script type="text/javascript" src="http://www.albawsala.com/pw/hemicycle.js"></script>
<link rel="stylesheet" type="text/css" href="http://ajax.googleapis.com/ajax/libs/jqueryui/1.8.10/themes/ui-lightness/jquery-ui.css" />
<link rel="stylesheet" type="text/css" href="http://www.albawsala.com/pw/style.css" />
<div id="radar" class="float">
    <svg class="float" width="400" height="400" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" version="1.1">
        <g id="seats" class="filtre-groupe"></g>
    </svg>
    <div class="float" style="margin-top:20px">
        
        <div class="filter-bloc clearfloat">
            <span class="float name">Sexe</span>
            <div class="clearfloat top-5">
                <input class="clearfloat" id="tous" type="radio" name="sexe" value="" checked="checked"/>
                <label class="float" for="tous">Tous</label>
            </div>
            <div class="float top-5 left-10">
                <input class="float" id="femme" type="radio" name="sexe" value="F"/>
                <label class="float" for="femme">Femmes</label>
            </div>
            <div class="float top-5 left-10">
                <input class="float" id="homme" type="radio" name="sexe" value="H"/>
                <label class="float" for="homme">Hommes</label>
            </div>
        </div>
        
        <div class="filter-bloc clearfloat">
            <span class="float name">Circonscription</span>
            <select class="clearfloat top-5" name="region"/>
                <option value="">Toutes les circonscriptions</option>
            </select>
        </div>
        
        <div class="filter-bloc clearfloat">
            <span class="float name">Groupe</span>
            <select class="clearfloat top-5" name="groupe"/>
                <option value="">Tout les groupes</option>
            </select>
        </div>
        
        <div id="filter-results" class="clearfloat">
            <span class="float results">214 député(s)</span>
            <a class="floati left-10" href="#">Reset</a>
            <a class="floati left-10" href="#">Afficher</a>
        </div>
        
        <div id="filtre-nom" class="filter-bloc clearfloat">
            <span class="float name">Nom</span>
            <input class="clearfloat top-5" type="text" name="nom" placeholder="Chercher un député"/>
        </div>
        
        <div id="infobulle" class="clearfloat">
            <a id="close" class="floati" href="#">X</a>
            <a id="nom" href="#" class="float"></a>
            <span class="clearfloat">Groupe:</span><span id="groupe" class="float"></span>
            <span class="clearfloat">Circonscription:</span><span id="region" class="float"></span>
            <a href="#" class="clearfloat top-10">Posez une question.</a>
        </div>
    
    </div>

</div>';

  $export['radar'] = $fe_block_boxes;

  return $export;
}
