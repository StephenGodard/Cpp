#include "mage.h"


mage::mage()
{
    vita=75;
    mana=250;
    ap=500;
    level=1;
    nom="mage sans nom";
    arme="bâton abimé";
}
mage::mage(QString a, QString b, int c, int d, int e){
    this -> nom=a;
    this -> arme=b;
    this -> vita=c;
    this -> mana=d;
    this -> ap=e;
    this -> level=1;
}

mage::mage(const mage &classe){
    this -> vita=classe.vita;
    this ->  nom=classe.nom;
    this -> arme=classe.arme;
    this -> level=classe.level;
    this -> mana=classe.mana;
    this -> ap=classe.ap;

}
mage& mage::operator=(const mage &copie ){
        vita=copie.vita;
        ap=copie.ap;
        arme=copie.arme;
        nom=copie.nom;
        arme=copie.arme;
        level=copie.level;
        mana=copie.mana;
    return *this;
}
// Getters //
QString mage::getnom(){
    return nom;
}
QString mage::getarme(){
    return arme;
}
int mage::getvita(){
    return vita;
}
int mage::getmana(){
    return mana;
}
int mage::getap(){
    return ap;
}
int mage::getlevel(){
    return level;
}
// Setters //
void mage::setnom(QString name){
    nom=name;
}
void mage::setarme(QString weapon){
    arme=weapon;
}
void mage::setvita(int pv){
    vita = pv;
}
void mage::setmana(int mp){
    mana=mp;
}
void mage::setap(int magie){
    ap=magie;
}
void mage::setlevel(int lv){
    level=lv;
}
// Actions //
void mage::magie(Guerrier& receveur){
    int i;
    srand(time(NULL));
    int crit=(rand()%100);
    if (crit>80){
        i=(ap*0.8+2)*2;
    }
    else{
        i=ap*0.8+2;
    }
    mana-=30;
    receveur.vita-=i;
}



