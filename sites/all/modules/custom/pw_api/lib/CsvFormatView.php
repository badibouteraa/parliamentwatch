<?php

/**
 * @file
 * Definition of CsvFormatView.
 */

/**
 * Renders data as comma separated values.
 */
class CsvFormatView extends RESTServerView {

  public function render() {
    $buffer = fopen('php://temp', 'r+');

    // Decide if the resultset is a numerically keyed set of entities or
    // a single entity and prepare the header row accordingly.
    $keys = array_keys($this->model);
    if (!is_numeric(reset($keys))) {
      $rows = array($this->model);
    }
    else {
      $keys = array_keys(reset($this->model));
      $rows = $this->model;
    }

    // Write the header row to the buffer.
    fputcsv($buffer, $keys);

    // Write the resultset to the buffer.
    foreach ($rows as $row) {
      fputcsv($buffer, $row);
    }

    // Read the buffer into a string.
    rewind($buffer);
    $csv = stream_get_contents($buffer);
    fclose($buffer);

    return $csv;
  }
}
