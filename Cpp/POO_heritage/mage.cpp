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
    this -> vita=classe.getvita();
    this ->  nom=classe.getnom();
    this -> arme=classe.getarme();
    this -> level=classe.getlevel();
    this -> mana=classe.getmana();
    this -> ap=classe.getap();

}
mage & mage::operator =(const mage& copie){
    vita=copie.getvita();
    ap=copie.getap();
    arme=copie.getarme();
    nom=copie.getnom();
    arme=copie.getarme();
    level=copie.getlevel();
    mana=copie.getmana();
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
    pv=vita;
}
void mage::setmana(int mp){
    mana=pv;
}
void mage::setap(int magie){
    ap=magie;
}
void mage::setlevel(int lv){
    level=lv;
}
 // Actions //
 void magie(mage& attaquant,Guerrier& receveur){
     srand(time(NULL));
     int crit=(rand()%100);
     if (crit>80){
         i=(attaquant.getap()*0.8+2)*2;
                   }
 else{
         i=attaquant.getap()*0.8+2;
     }
 attaquant.setmana(attaquant.getmana-30);
 receveur.setvita(receveur.getvita-i);

 }


