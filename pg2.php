<?php

$students = array("Aman", "Manu", "Zayan", "Linta", "Benn");


echo "Array of students: ";
print_r($students);


sort($students);
echo "<br>Sorted Array (ascending order): ";
print_r($students);


 

$students = array("Aman" => 4, "Manu" => 3, "Zayan" => 6, "Linta" => 1, "Benn" => 2);
asort($students);
echo "<br>After asort: ";
print_r($students);


arsort($students);
echo "<br>After arsort: ";
print_r($students);
?>
