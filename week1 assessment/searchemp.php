<?php
$data=$_POST['data'];
$s=json_decode($data);
$empid=$s->empid;
$sql="SELECT * FROM employee WHERE empid='$empid'";
$cn=mysqli_connect("localhost","root","","demodb");
$result=mysqli_query($cn,$sql);
$count=mysqli_num_rows($result);
if($count==0)
{
    echo"Sorry! invalid Employee no.";
}
else{
    $row=mysqli_fetch_array($result);
    $d=json_encode($row);
    echo "$d";
}
?>