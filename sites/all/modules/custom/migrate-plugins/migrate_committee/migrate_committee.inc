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
    $query->fields('c', array('id', 'committee', 'txt'));
    $query->fields('p', array('project', 'startdate'));
	switch(variable_get('site_name')){
		case 'abgeordnetenwatch.de':
		    $query->condition('p.project_cmd', array(132, 360));
			break;
		case 'marsad.tn':
		    $query->condition('p.project_cmd', 974);
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
  }

  public function complete($current_row) {

	switch($current_row->field_parliament['0']){
		case 'Assemblée nationale constituante':
		    $a_subterms = array('Chairman', 'Vice Chairman', 'Rapporteur', '1er rapporteur adjoint', '2ème rapporteur adjoint', 'Member');
			break;
		default:
		    $a_subterms = array('Chairman', 'Vice Chairman', 'Member', 'Deputy Member');
			break;
	}

	// add default subterms to term
	foreach($a_subterms as $subterm){
		$term = (object) array('vid' => $current_row->vid, 'name' => $subterm, 'parent' => $current_row->tid);
		taxonomy_term_save($term);
	}
  }

}
