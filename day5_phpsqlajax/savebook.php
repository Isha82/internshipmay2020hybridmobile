<?php
$bookno=$_POST['bookno'];
$title=$_POST['title'];
$author=$_POST['author'];
$price=$_POST['price'];
$sql="INSERT INTO book VALUES('$bookno','$title','$author','$price')";
$cn=mysqli_connect("localhost","root","","library") or die("Unable to connect");
mysqli_query($cn,$sql) or die("Unable to update records");
mysqli_close($cn);
echo "done";
?>
