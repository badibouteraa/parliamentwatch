<?php

abstract class BasicMigratePolitician extends Migration {

    public function __construct() {
        parent::__construct();
    }
}

class PoliticianMigration extends BasicMigratePolitician {

    public function __construct() {
        parent::__construct();

		$query = Database::getConnection('default', 'parlamentwatch')
									 	->select('aw_abgeordnete', 'aw')
										->condition('aw.term_parliament', 'Bundestag', '=')
									 	->fields('aw', array('id', 'abg_vorname', 'abg_nachname'));

        $this->source = new MigrateSourceSQL($query);
        $this->map = new MigrateSQLMap($this->machineName,
                        array(
                            'id' => array(
                                'type' => 'int',
                                'not null' => TRUE,
                            )
                        ),
                        MigrateDestinationUser::getKeySchema()
        );

        $this->destination = new MigrateDestinationUser();
        #$this->addFieldMapping('title', 'partei');
	}
}

