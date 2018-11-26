#include "job.h"
#include <stdlib.h>
#include <time.h>
job::job()
{

}
job::~job(){

}
job::job(job &classe){
    this -> vita=classe.getvita();
    this -> mana=classe.getmana();
    this -> ap=classe.getap();
    this -> ad=classe.getad();
    this ->  nom=classe.getnom();
    this -> arme=classe.getarme();
    this -> level=classe.getlevel();
}
job & job::operator=(job&copie){
    vita=copie.getvita();
    mana=copie.getmana();
    ap=copie.getap();
    ad=copie.getad();
    arme=copie.getarme();
    nom=copie.getnom();
    arme=copie.getarme();
    level=copie.getlevel();
    return *this;
}
job & job::operator ++(int a){
 vita=vita+a;
}


        //  Getters //
QString job::getnom(){
    return nom;
}
QString job::getarme(){
    return arme;
}
int job::getvita(){
    return vita;
}
int job::getmana(){
    return mana;
}
int job::getad(){
    return ad;
}
int job::getap(){
    return ap;
}
int job::getlevel(){
    return level;
}
        // Setters //
void job::setnom(QString name){
    nom=name;
}
void job::setarme(QString weapon){
    arme=weapon;
}
void job::setvita(int pv){
    vita=pv;
}
void job::setmana(int mp){
    mana=mp;
}
void job::setad(int degats){
    ad=degats;
}
void job::setap(int magie){
    ap=magie;
}

        // actions //
void job::attaque(job & attaquant, job & receveur){
        int i=0;
        srand(time(NULL));
        int crit=(rand()%100);
        if(crit>80){
        i=(attaquant.getad()*0.5+2)*2;
        }
        else{
            i=attaquant.getad()*0.5+2;
        }
       receveur.setvita(receveur.getvita()-i);
}
/*void job::sort(job attaquant, job receveur){
    srand(time(NULL));
    int i=0;
    int crit=(rand()%100);
    if (crit>80){
        i=(attaquant.getad()*0.8+2)*2;
                  }
else{
        i=attaquant.getad()*0.8+2;
    }
attaquant.setmana(attaquant.getmana-30);
receveur.setvita(receveur.getvita-i);

}

*/
