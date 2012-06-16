<?php

abstract class BasicMigrateCommittee extends Migration {

  public function __construct() {
    parent::__construct();
  }

}

class CommitteeMigration extends BasicMigrateCommittee {

  public function __construct() {
    parent::__construct();

    $query = Database::getConnection('default', 'parlamentwatch')
            ->select('legacy_committee', 'c');
    $query->join('legacy_projects', 'p', 'c.cmd = p.cmd');
    $query->fields('c', array('id', 'committee', 'txt'));
    $query->fields('p', array('project', 'startdate'));
    #$query->condition('p.project_cmd', array(132, 360));

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

