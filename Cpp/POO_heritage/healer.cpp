#include "healer.h"

healer::healer()
{
    vita=50;
    mana=500;
    ap=250;
    level=1;
    nom="Guérisseur sans nom";
    arme="Bâton curatif";
}
healer::healer(QString a, QString b, int c, int d, int e){
    this -> nom=a;
    this -> arme=b;
    this -> vita=c;
    this -> mana=d;
    this -> ap=e;
   this -> level=1;
}
healer::healer(const healer &classe){
    this -> vita=classe.getvita();
    this ->  nom=classe.getnom();
    this -> arme=classe.getarme();
    this -> level=classe.getlevel();
    this -> mana=classe.getmana();
    this -> ap=classe.getap();
}
healer & healer::operator =(const healer&,healer& copie){
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
    srand(time(NULL));
    int crit=(rand()%100);
    if (crit>80){
        i=(heal.getap()*0.8+30)*2;
                  }
else{
        i=hel.getap()*0.8+30;
    }
heal.setmana(attaquant.getmana-15);
receive.setvita(receive.getvita+i);

}
