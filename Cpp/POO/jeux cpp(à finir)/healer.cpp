#include "healer.h"

healer::healer()//constructeur par défaut
{
    vita=50;
    mana=500;
    ap=250;
    level=1;
    nom="Guérisseur sans nom";
    arme="Bâton curatif";
}
healer::healer(QString a, QString b, int c, int d, int e){//constructeur avec paramètres
    this -> nom=a;
    this -> arme=b;
    this -> vita=c;
    this -> mana=d;
    this -> ap=e;
    this -> level=1;
}
healer::healer(const healer &classe){//constructeur de recopie
    this -> vita=classe.vita;
    this ->  nom=classe.nom;
    this -> arme=classe.arme;
    this -> level=classe.level;
    this -> mana=classe.mana;
    this -> ap=classe.ap;
}
healer& healer::operator=(const healer&copie){//operateur d'affectation
    vita=copie.vita;
    ap=copie.ap;
    arme=copie.arme;
    nom=copie.nom;
    mana=copie.mana;
    level=copie.level;
    return *this;
}
// Getters //
QString healer::getnom(){
    return nom;
}
QString healer::getarme(){
    return arme;

}
int healer::getap(){
    return ap;
}
int healer::getvita(){
    return vita;
}
int healer::getmana(){
    return mana;
}
int healer::getlevel(){
    return level;
}
// Setters //
void healer::setnom(QString name){
    nom=name;
}
void healer::setarme(QString weapon){
    arme=weapon;
}
void healer::setap(int puissance){
    ap=puissance;
}
void healer::setmana(int mp){
    mana=mp;
}
void healer::setvita(int pv){
    vita=pv;
}
void healer::setlevel(int lv){
    level=lv;
}

// Actions //
void healer::soins(Guerrier &receive){
    int i;
    srand(time(NULL));
    int crit=(rand()%100);
    if (crit>80){
        i=(ap*0.8+30)*2;
    }
    else{
        i=ap*0.8+30;
    }
    mana -=15;
    receive.vita+=i;
}


