#include "guerrier.h"
#include <stdlib.h>
#include <time.h>
 // Coplians //
Guerrier::Guerrier()
{
vita=250;
ad=500;
nom="Guerrier Sans Nom";
arme="hache basique";
level=1;
}
Guerrier::Guerrier(QString a, QString b , int c, int d){
    this -> nom=a;
    this -> arme=b;
    this -> vita=c;
    this -> ad=d;
    level=1;
}

Guerrier::Guerrier(const Guerrier& classe){
    this -> vita=classe.getvita();
    this -> ad=classe.getad();
    this ->  nom=classe.getnom();
    this -> arme=classe.getarme();
    this -> level=classe.getlevel();
}

Guerrier & Guerrier::operator =(const guerrier & copie){
    vita=copie.getvita();
     ad=copie.getad();
    arme=copie.getarme();
    nom=copie.getnom();
    arme=copie.getarme();
    level=copie.getlevel();
    return *this;

}
 // Getters //
std::string  Guerrier::getnom(){
    return nom;
    }
std::string Guerrier::getarme(){
    return arme;
}
int Guerrier::getvita(){
    return vita;
}
int Guerrier::getad(){
    return ad;
}
int Guerrier::getlevel(){
    return level;
}
 // Setters //
void Guerrier::setnom(QString name){
    nom=name;
}
void Guerrier::setarme(QString weapon){
    arme=weapon;
}
void Guerrier::setad(int dammage){
    ad=dammage;
}
void Guerrier::setvita(int pv){
    vita=pv;
}
void Guerrier::setlevel(int lv){
    level=lv;
}
 // Actions //
void Guerrier::attaque(Guerrier & attaquant,Guerrier & receveur){

        srand(time(NULL));
        int crit=(rand()%100);
        if(crit>80){
        i=(attaquant.getad()*0.5+2)*2;
        }
        else{
            i=attaquant.getad()*0.5+2;
        }
       receveur.setvita(receveur.getvita-i);
}

