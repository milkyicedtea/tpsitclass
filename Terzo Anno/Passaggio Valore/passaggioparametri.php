<!DOCTYPE HTML>
<html lang="it">
<link href="./passaggio.css" rel="stylesheet" type="text/css"/>
<body>
<?php
    if (isset($_POST['valore']))
    {
        $valore = intval($_POST['valore']);

        echo "<p> Valore passato = ".$valore."</p>";
    }
    else
    {

        echo '<form id = "prima" action = "passaggioparametri.php" method = "POST">';
        echo '<h1> Inserire il valore da passare </h1>';
        echo '<input id = "valore" name = "valore" type = "text" size = "20" maxlength = "20" autofocus required>';
        echo '<br>';
        echo '<br>';
        echo '<input type = "submit" id = "submit" value = "passo parametri">';

        //echo '</form>';
    }
?>
</body>
</html>