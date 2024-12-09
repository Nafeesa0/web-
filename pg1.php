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
	<th>Players Name</th>
	</tr>

	
	<?php
		foreach($players as $player)
		{
			echo"<tr><td>$player</td></tr>";
		}
	?>
	
	</table></center>
</body>
</html>