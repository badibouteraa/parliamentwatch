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
									 	->select('aw_wahlkreise', 'aw')
										->condition('aw.is_liste', 0, '=')
										->condition('aw.term_parliament', 'Bundestag', '=')
									 	->fields('aw', array('id', 'wahlkreis','term_parliament'));

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
        $this->addFieldMapping('title', 'wahlkreis');
		$this->addFieldMapping('uid')->defaultValue(1);
		$this->addFieldMapping('field_parliament', 'term_parliament')->arguments(array('create_term' => TRUE));
    }
}

