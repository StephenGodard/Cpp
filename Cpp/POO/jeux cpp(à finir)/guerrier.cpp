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
    this -> vita=classe.vita;
    this -> ad=classe.ad;
    this ->  nom=classe.nom;
    this -> arme=classe.arme;
    this -> level=classe.level;



}

Guerrier & Guerrier::operator =(const Guerrier & copie){
    vita=copie.vita;
     ad=copie.ad;
    arme=copie.arme;
    nom=copie.nom;
    level=copie.level;
    return *this;

}
 // Getters //
QString  Guerrier::getnom(){
    return nom;
    }
QString Guerrier::getarme(){
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
void Guerrier::Attaque(Guerrier &receveur){
    int i= 0;
    srand(time(NULL));
        int crit=(rand()%100);
        if(crit>80){
        i=(ad*0.5+2)*2;
        }
        else{
            i=ad*0.5+2;
        }
       receveur.vita;
}

