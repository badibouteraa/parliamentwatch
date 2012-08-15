<?php

abstract class BasicMigrateParty extends Migration {

  public function __construct() {
    parent::__construct();
  }

}

class PartyTermMigration extends BasicMigrateParty {

  public function __construct() {
    parent::__construct();

    $query = Database::getConnection('default', 'parlamentwatch')
            ->select('legacy_party', 'l');
    $query->fields('l', array('id', 'party'));

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

    $this->destination = new MigrateDestinationTerm('party');
    $this->addFieldMapping('name', 'party');
  }

}

