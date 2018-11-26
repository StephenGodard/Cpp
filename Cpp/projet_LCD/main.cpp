#include <a.out.h>
#include <fcntl.h>
#include <ctype.h>
#include <string>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <geniePi.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>

using namespace std;


string genieCommandNames [] =
{
    "Read Obj",
    "Write Obj",
    "Write Str",
    "Write StrU",
    "Write Contrast",
    "Report Obj",
    "Command #6",
    "Report Event",
} ;

string genieObjectNames [] =
{
    "DIP Switch",		// 0
    "Knob",		// 1
    "Rocker Switch",	// 2
    "Rotary Switch",
    "Slider",
    "Track Bar",
    "Win Button",
    "Angular Meter",
    "Cool Gauge",
    "Custom Digits",
    "Form",
    "Gauge",
    "Image",
    "Keyboard",
    "LED",
    "LED Digits",
    "Meter",
    "Strings",
    "Thermometer",
    "User LED",
    "Video",
    "Static Text",
    "Sound",
    "Timer",
} ;

int main()
{
    MYSQL mysql;
    if(mysql_real_connect(&conn,"192.168.2.37","root","MySQL","Jeux",0,NULL,0))
            {
                cout << "Ok !"<< endl;

            //Récuperation du paramètre passé à l'execution du programme afin de définir l'intervalle de mesure en secondes



            }
            else
            {
                cout << "Erreur de connexion à la base de données "<< endl;
                cout << mysql_error(&conn);
                exit(1);

            }

    struct genieReplyStruct reply ;

    char *objStr, *cmdStr ;
    FILE *p_fichierTemp;
    // Genie display setup
    //	Using the Raspberry Pi's on-board serial port.

    //Si vous utiliser le cable usb mettre /dev/ttyUSB0 -
    //Faites attention à la vitesse de transmission, elle doit être la même que dans le fichier Workshop (onglet "projet")
    
    if (genieSetup ("/dev/ttyAMA0", 11500) < 0)
    {
        cout << "Impossible d'intialiser l'écran LCD : " << strerror (errno) << endl;
        return 1 ;
    }
string row[10];
    string requette1=mysql_query("SELECT* FROM Score.ID ; ");
    row=mysql_fetch_row(requette1);
     
    cout <<  row[0]; // 
    cout <<row[1]; 
     genieWriteStr(0,row[0]);
        
      genieWriteObj(0,)
          
     
    // genieReplyAvail si un éenement c'est produit
                 
   //genieGetReply: récuperation de la réponse






}

