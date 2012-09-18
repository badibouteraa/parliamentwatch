<?php

abstract class BasicMigrateParliament extends Migration {

  public function __construct() {
    parent::__construct();
  }

}

class ParliamentTermMigration extends BasicMigrateParliament {

  public function __construct() {
    parent::__construct();

    $query = Database::getConnection('default', 'parlamentwatch')
            ->select('legacy_projects', 'p');
    $query->fields('p', array('parl_id', 'project', 'startdate', 'enddate'));
	$query->condition('p.is_mapping_id', 1);
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
                        'parl_id' => array(
                            'type' => 'int',
                            'not null' => TRUE,
                        )
                    ),
                    MigrateDestinationTerm::getKeySchema()
    );

    $this->destination = new MigrateDestinationTerm('parliaments');
    $this->addFieldMapping('name', 'project');
    // TODO: $this->addFieldMapping('valid_from', 'startdate');
    // TODO: $this->addFieldMapping('valid_till', 'enddate');
  }

  public function prepareRow($current_row) {
    if ($current_row->startdate < 1) {
      $current_row->startdate = NULL;
    }
  }

}
