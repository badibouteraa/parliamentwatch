<?php

abstract class BasicMigratePartyMembers extends Migration {

    public function __construct() {
        parent::__construct();
    }
}

class PartyMembersMigration extends BasicMigratePartyMembers {

    public function __construct() {
        parent::__construct();

		$query = Database::getConnection('default', 'parlamentwatch')
									 	->select('aw_abgeordnete', 'aw')
										->condition('aw.term_parliament', 'Bundestag', '=')
									 	->fields('aw', array('id', 'parteiid'));

        $this->source = new MigrateSourceSQL($query);
        $this->map = new MigrateSQLMap($this->machineName,
                        array(
							'parteiid' => array(
                                'type' => 'int',
                                'not null' => TRUE,
                            ),
							'id' => array(
                                'type' => 'int',
                                'not null' => TRUE,
                            )
                        ),
                        MigrateDestinationOGMembership::getKeySchema()
        );

        $this->destination = new MigrateDestinationOGMembership(array(945, 1));
        
	}
}

