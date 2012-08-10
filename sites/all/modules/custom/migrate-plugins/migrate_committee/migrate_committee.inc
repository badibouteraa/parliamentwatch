<?php

abstract class BasicMigrateCommittee extends Migration {

  public function __construct() {
    parent::__construct();
  }

}

class CommitteeNodeMigration extends BasicMigrateCommittee {

  public function __construct() {
    parent::__construct();

    $query = Database::getConnection('default', 'parlamentwatch')
            ->select('legacy_committee', 'c');
    $query->join('legacy_projects', 'p', 'c.cmd = p.cmd');
    $query->fields('c', array('id', 'committee', 'txt'));
    $query->fields('p', array('project', 'startdate'));
	switch(variable_get('site_name')){
		case 'abgeordnetenwatch.de':
		    $query->condition('p.project_cmd', array(132, 360));
			break;
		case 'marsad.tn':
		    $query->condition('p.project_cmd', 974);
			break;
		case 'dailwatch.ie':
		    $query->condition('p.project_cmd', array(233, 486, 30073, 30988));
			break;
		default:
		    $query->condition('p.project_cmd', 0);
			break;		
	}

    // Prepare mapping
    $this->source = new MigrateSourceSQL($query);
    $this->map = new MigrateSQLMap($this->machineName,
                    array(
                        'id' => array(
                            'type' => 'int',
                            'not null' => TRUE,
                        )
                    ),
                    MigrateDestinationNode::getKeySchema()
    );

    $this->destination = new MigrateDestinationNode('committee');
    $this->addFieldMapping('title', 'committee');
    $this->addFieldMapping('body', 'txt');
    $this->addFieldMapping('uid')->defaultValue(1); 
    $this->addFieldMapping('created', 'startdate');
    $this->addFieldMapping('field_parliament', 'project')->arguments(array('create_term' => TRUE));
  }

  public function prepareRow($current_row) {
    if ($current_row->startdate < 1) {
      $current_row->startdate = NULL;
    }
  }

}

class CommitteeTermMigration extends BasicMigrateCommittee {

  public function __construct() {
    parent::__construct();

    $query = Database::getConnection('default', 'parlamentwatch')
            ->select('legacy_committee', 'c');
    $query->join('legacy_projects', 'p', 'c.cmd = p.cmd');
    $query->fields('c', array('id', 'committee', 'txt','first_lang' , 'second_lang','committee_2nd_lang'));
    $query->fields('p', array('project', 'startdate'));
	switch(variable_get('site_name')){
		case 'abgeordnetenwatch.de':
		    $query->condition('p.project_cmd', array(132, 360));
			break;
		case 'marsad.tn':
		    $query->condition('p.project_cmd', 974);
			break;
		case 'dailwatch.ie':
		    $query->condition('p.project_cmd', array(233, 486, 30073, 30988));
			break;
		default:
		    $query->condition('p.project_cmd', 0);
			break;		
	}

    // Prepare mapping
    $this->source = new MigrateSourceSQL($query);
    $this->map = new MigrateSQLMap($this->machineName,
                    array(
                        'id' => array(
                            'type' => 'int',
                            'not null' => TRUE,
                        )
                    ),
                    MigrateDestinationTerm::getKeySchema()
    );

    $this->destination = new MigrateDestinationTerm('committee');
    $this->addFieldMapping('name', 'committee'); 
    $this->addFieldMapping('field_parliament', 'project')->arguments(array('create_term' => TRUE));
    $this->addFieldMapping('language','first_lang');
  }

  public function complete($current_row) {
    
    if($this->sourceValues->second_lang){
      $translations = array($current_row->language=> $current_row,$this->sourceValues->second_lang => $this->sourceValues->committee_2nd_lang);
      $set = i18n_translation_set_create('taxonomy_term', 'committee');
      $current_row->i18n_tsid = $set->tsid;
      taxonomy_term_save($current_row);
      $term_trans = (object) array('vid' => $current_row->vid, 'name' => $this->sourceValues->committee_2nd_lang, 'language' => $this->sourceValues->second_lang,'translation_set'=>$set);
      $term_trans = taxonomy_term_save($term_trans);
      $set->add_item($term_trans)
      ->save();
      $set->add_item($current_row)
      ->save();
    }
    
    switch($current_row->field_parliament){
      case 'Assemblée nationale constituante':
          $a_subterms = array('en'=>'Chairman', 'en'=>'Vice Chairman', 'fr'=>'Rapporteur', 'fr'=>'1er rapporteur adjoint', 'fr'=>'2ème rapporteur adjoint', 'en'=>'Member');
        break;
      default:
          $a_subterms = array('en'=>'Chairman', 'en'=>'Vice Chairman', 'en'=>'Member', 'en'=>'Deputy Member');
        break;
    }

    // add default subterms to term
    foreach($a_subterms as $lang => $subterm){
      $term = (object) array('vid' => $current_row->vid, 'name' => $subterm, 'parent' => $current_row->tid, 'language'=>$lang);
      taxonomy_term_save($term);
    }
	// add default subterms to term
    
  }

}
