#include "job.h"

job::job()
{


}
job::~job(){


}

int job::getpv(){
    return pv;
}
int job::getmp(){
    return mp;
}
int job::getdps(){
    return dps;
}
string job::getNom(){
    return nom;
}

int job::getmagie(){
    return magie;
}
void job::setpv(int vita) {
    this -> pv=vita;
}
void job::setmagie(int ap){
    this -> magie=ap;
}
void job::setmp(int mana){
    this -> mp=mana;
}
void job::setdps(int degats){
    this -> dps=degats;
}

