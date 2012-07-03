<?php

abstract class BasicMigrateConstituency extends Migration {

  public function __construct() {
    parent::__construct();
  }

}

class ConstituencyMigration extends BasicMigrateConstituency {

  public function __construct() {
    parent::__construct();

    $query = Database::getConnection('default', 'parlamentwatch')
            ->select('legacy_constituency', 'c');
    $query->join('legacy_projects', 'p', 'c.cmd = p.cmd');
    $query->fields('c', array('id', 'constituency', 'zipcode'));
    $query->fields('p', array('project', 'startdate'));
    $query->condition('p.project_cmd', array(132, 360));

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

    $this->destination = new MigrateDestinationNode('constituency');
    $this->addFieldMapping('title', 'constituency');
    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('created', 'startdate');
    $this->addFieldMapping('field_parliament', 'project')->arguments(array('create_term' => TRUE));
    $this->addFieldMapping('field_zipcodes', 'zipcodes')->separator(',')->arguments(array('create_term' => TRUE));
  }

  public function prepareRow($current_row) {
    if ($current_row->startdate < 1) {
      $current_row->startdate = NULL;
    }
  }

}

