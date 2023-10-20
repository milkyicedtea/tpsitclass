<html>
    <title>Lancio del dado PHP</title>
<head>
</head>

<link rel="stylesheet" href="style.css">

<body>
<div id=divbox>
    <form method = "POST" action="Lancio_dado.php">

    <?php
    // comment debug info
        // $ip=$_SERVER['REMOTE_ADDR'];  /* Indirizzo ip del'host */
        // echo $ip.'<br>';

        // $browser=$_SERVER['HTTP_USER_AGENT']; /* Informazioni sul browser utilizzato */
        // echo $browser.'<br>';

        // $server=$_SERVER['SERVER_SOFTWARE'];
        // echo $server.'<br>';

        // $data=date("d/m/Y h:i:s");  /* per il db formato Y/m/d */
        // echo $data.'<br>';

        /* phpinfo();   Visualizza i parametri di configurazione di php */

        session_start();

        if(isset($_SESSION["conta"]))
        {
            $contatore=$_SESSION["conta"];
            $contatore++;
            $_SESSION["conta"]= $contatore;
            $_SESSION["utente"]= 'Anselmi';
            echo 'Contatore = '.$_SESSION["conta"].'<br>';
            // echo 'Utente = '.$_SESSION["utente"].'<br>';
        }
        else
        {
            $contatore =0;
            $_SESSION["conta"]= $contatore;
            $contatore++;
            $_SESSION["conta"]= $contatore;
            // echo '<br> Sessione Definita = '.$_SESSION["conta"].'<br>';
            // echo '<br> Sessione Definita = '.$_SESSION["conta"].' <br>';

            // echo "<br> Session_name = ".session_name()."<br>";
            // echo "<br> Session_id   = ".session_id()."<br><br>";
        }


        
        $valore_dato = rand(1,6);

        if ($valore_dato==1)
        {
            echo '<img src="Alea_1.png" width="112" height="112" border="0">'; 
            echo "<br><br>";
        }
        elseif ($valore_dato==2)
        {
            echo '<img src="Alea_2.png" width="112" height="112" border="0">';   
            echo "<br><br>";
        }
        elseif ($valore_dato==3)
        {
            echo '<img src="Alea_3.png" width="112" height="112" border="0">';
            echo "<br><br>";
        }
        elseif ($valore_dato==4)
        {
            echo '<img src="Alea_4.png" width="112" height="112" border="0">';
            echo "<br><br>";
        }
        elseif ($valore_dato==5)
        {
            echo '<img src="Alea_5.png" width="112" height="112" border="0">';
            echo "<br><br>";
        }
        elseif ($valore_dato==6)
        {
            echo '<img src="Alea_6.png" width="112" height="112" border="0">';
            echo "<br><br>";
        }


    /* session_destroy(); distruggo tutte le sessioni*/
        
    ?>

    <input id='button' type="submit" name='Lancia' value=' Lancia Dado '/>
    </form>
</div>
</body>
</html>
