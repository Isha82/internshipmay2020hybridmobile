<?php
$data=$_POST['data'];
$s=json_decode($data);
$empid=$s->empid;
$name=$s->name;
$des=$s->des;
$salary=$s->salary;
$sql="INSERT INTO employee VALUES('$empid','$name','$des','$salary')";
$cn=mysqli_connect("localhost","root","","demodb") or die("Unable to connect");
mysqli_query($cn,$sql) or die("Unable to update records");
mysqli_close($cn);
echo "done";
?>
