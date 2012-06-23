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
    $query->fields('u', array('id', 'username', 'title', 'first_name', 'last_name', 'email', 'gender', 'birthday', 'childs', 'job', 'marriage'));
    $query->fields('p', array('project', 'startdate'));
    $query->condition('u.oldest', 1, '=');
    $query->condition('p.project_cmd', array(132, 360));

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

    // Map old to new data fields
    $this->addFieldMapping('name', 'username')->dedupe('users', 'name');
    $this->addFieldMapping('created', 'startdate');
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('field_user_title', 'title');
    $this->addFieldMapping('field_user_fname', 'first_name');
    $this->addFieldMapping('field_user_lname', 'last_name');
    $this->addFieldMapping('mail', 'email');
    $this->addFieldMapping('field_user_gender', 'gender');
    $this->addFieldMapping('field_user_birthday', 'birthday');
    $this->addFieldMapping('field_user_childs', 'childs');
    $this->addFieldMapping('field_user_job_skills', 'job');
    $this->addFieldMapping('field_user_marriage_status', 'marriage');
    $this->addFieldMapping('language')->defaultValue('de');
    $this->addFieldMapping('role_names')->defaultValue('politician');
    $this->addFieldMapping('field_user_parliament', 'project')->arguments(array('create_term' => TRUE));
  }

public function prepareRow($current_row) {
  if($current_row->birthday < 1){
    $current_row->birthday = NULL;
  }
  if($current_row->startdate < 1){
    $current_row->startdate = NULL;
  }
}


}
