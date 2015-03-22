<?php

/* Author: Gianluca Giacometti */

$labels = array();
$labels['forward'] = 'Weiterleitung';
$labels['forwardforwards'] = 'Weiterleitungs-Empfänger\n(getrennt durch Komma,\nSemikolon oder Umbruch)';
$labels['forwardkeepcopies'] = 'Original Nachricht behalten';

$messages = array();
$messages['forwardinvalidforwards'] = 'E-Mail Addresse ist nicht gültig';
$messages['forwardnovalidforwards'] = 'Keine gültige Addresse zur Weiterleitung';
$messages['forwardsuccessfullysaved'] = 'Weiterleiungen erfolgreich gespeichert';
$messages['forwarddriverconnecterror'] = 'Keine Verbindung zum Treiber';
$messages['forwarddriverprocesserror'] = 'Ausführungsfehler im Treiber';
$messages['forwardinternalerror'] = 'Lesefehler im Treiber';

?>
