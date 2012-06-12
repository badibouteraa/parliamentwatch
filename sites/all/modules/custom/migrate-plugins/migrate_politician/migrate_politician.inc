<?php

abstract class BasicMigratePolitician extends Migration {

  public function __construct() {
    parent::__construct();
  }

}

class PoliticianMigration extends BasicMigratePolitician {

  public function __construct() {
    parent::__construct();

    // Connect to legacy database and select oldest profile of each politican (oldest=1)
    $query = Database::getConnection('default', 'parlamentwatch')
            ->select('legacy_user', 'u');
    $query->join('legacy_projects', 'p', 'u.cmd = p.cmd');
    $query->fields('u');
    $query->fields('p', array('project'));
    $query->condition('u.oldest', 1, '=');

    // Prepare mapping
    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationUser();
    $this->map = new MigrateSQLMap($this->machineName,
                    array(
                        'id' => array(
                            'type' => 'int',
                            'not null' => TRUE,
                        )
                    ),
                    MigrateDestinationUser::getKeySchema()
    );
    
    // 
    $query_role = db_select('{role}', 'r');
    $query_role->fields('r', array('rid'));
    $query_role->condition('r.name', 'politician', '=');
    $role_id_politician = $query_role->execute()->fetchField();

    // Map old to new data fields
    $this->addFieldMapping('name', 'username')->dedupe('users', 'name');
    $this->addFieldMapping('field_user_fname', 'first_name');
    $this->addFieldMapping('field_user_lname', 'last_name');
    $this->addFieldMapping('mail', 'email');
    $this->addFieldMapping('field_user_gender', 'gender');
    $this->addFieldMapping('field_user_childs', 'childs');
    $this->addFieldMapping('field_user_job_skills', 'job');
    $this->addFieldMapping('field_user_marriage_status', 'marriage');
    $this->addFieldMapping('language')->defaultValue('de');
    $this->addFieldMapping('roles')->defaultValue($role_id_politician);
    
    $this->addFieldMapping('field_user_parliament', 'project')->arguments(array('create_term' => TRUE));
  }

}

