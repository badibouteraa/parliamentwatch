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

    foreach ($this->model as $row) {
      fputcsv($buffer, (array)$row);
    }

    rewind($buffer);
    $csv = stream_get_contents($buffer);
    fclose($buffer);

    return $csv;
  }
}
