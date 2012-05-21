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
									 	->select('aw_ausschuesse', 'aw')
										->condition('aw.term_parliament', 'Bundestag', '=')
									 	->fields('aw', array('id', 'ausschuss', 'txt','term_parliament'));

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

        $this->destination = new MigrateDestinationNode('committee');
        $this->addFieldMapping('title', 'ausschuss');
		$this->addFieldMapping('body', 'txt');
		$this->addFieldMapping('uid')->defaultValue(1);
		$this->addFieldMapping('field_parliament', 'term_parliament')->arguments(array('create_term' => TRUE));
    }
}


