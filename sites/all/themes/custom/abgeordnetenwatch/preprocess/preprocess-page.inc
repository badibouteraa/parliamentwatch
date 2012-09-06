<?php

function abgeordnetenwatch_preprocess_page(&$vars) {
  if(isset($vars['page']['content']['system_main']['no_content'])) {
    unset($vars['page']['content']['system_main']['no_content']);
  }
}