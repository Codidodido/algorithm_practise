<?php

$date = readline();
$splitted = explode("/",$date);
$current_m = $splitted[1];
$current_d = $splitted[2];
$remain_d = 0;
for($i = $current_m; $i <= 12;$i++){
    if($i < 7){
        $remain_d += 31;
    }elseif($i != 12){
        $remain_d += 30;
    }else{
        $remain_d += 29;
    }
}
echo $remain_d - $current_d+1;
?>