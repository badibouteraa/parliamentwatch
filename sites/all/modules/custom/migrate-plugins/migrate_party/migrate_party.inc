<?php

abstract class BasicMigrateParty extends Migration {

    public function __construct() {
        parent::__construct();
    }
}

class PartyMigration extends BasicMigrateParty {

    public function __construct() {
        parent::__construct();

		$query = Database::getConnection('default', 'parlamentwatch')
									 	->select('aw_parteien', 'aw')
									 	->fields('aw', array('id', 'partei'));

        $this->source = new MigrateSourceSQL($query);
        $this->map = new MigrateSQLMap($this->machineName,
                        array(
                            'id' => array(
                                'type' => 'int',
                                'not null' => TRUE,
                            )
                        ),
                        MigrateDestinationNode::getKeySchema(),
						'parlamentwatch'
        );

        $this->destination = new MigrateDestinationNode('party');
        $this->addFieldMapping('title', 'partei');
	}
}

