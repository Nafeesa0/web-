<?php
$players = array("Virat Kohli",
	"Abhishek Sharma",
	"Harshit Rana",
	"Prasidh Krishna",
	"Rahul",
	"Khaleel Ahmed",
	"Suryakumar Yadav",
	"Washington Sundar",
	"Mukesh Kumar",
	"Rishabh Pant",
	"Jitesh Sharma",
	"Varun Chakravarthy",
	"Shardul Thakur"
);
?>

<html>
<body>
	<center><h2>List Of Cricket Players</h2></center>
	<center><table border="1">
	<tr>
		
	<th>Sl. No.</th>
		
	<th>Players Name</th>
	</tr>

	
	<?php
		$slNo = 1;

		foreach($players as $player)
		{
			echo"<tr><td>$slNo</td><td>$player</td></tr>";
			$slNo++;
		}
	?>
	
	</table></center>
</body>
</html>