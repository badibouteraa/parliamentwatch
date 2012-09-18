<?php

abstract class BasicMigrateConstituency extends Migration {

  public function __construct() {
    parent::__construct();
  }

}

class ConstituencyTermMigration extends BasicMigrateConstituency {

  public function __construct() {
    parent::__construct();

	$this->dependencies = array('ParliamentTerm');

    $query = Database::getConnection('default', 'parlamentwatch')
            ->select('legacy_constituency', 'c');
    $query->join('legacy_projects', 'p', 'c.cmd = p.cmd');
    $query->fields('c', array('id', 'constituency', 'constituency_nr', 'zipcodes'));
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
		case 'piratenpartei-bayern.de':
		    $query->condition('p.project_cmd', array(1036, 1010, 1475));
			break;	
		default:
		    $query->condition('p.project_cmd', 0);
			break;		
	}

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

    $this->destination = new MigrateDestinationTerm('constituency');
    $this->addFieldMapping('name', 'constituency');
    $this->addFieldMapping('field_constituency_nr', 'constituency_nr');
    $this->addFieldMapping('field_parliament', 'project');
    $this->addFieldMapping('field_voc_constituency_zip', 'zipcodes')->separator(',')->arguments(array('create_term' => TRUE));
  }

  public function prepareRow($current_row) {
    if ($current_row->startdate < 1) {
      $current_row->startdate = NULL;
    }
  }

}
