#include "job.h"

job::job(){
     
    
    
    
}
job::~job(){
    
}
int job::getdps(){
    return dps;
}
int job::getpv(){
    return pv;
}
int job::getmagie(){
    return magie;
}
int job::getmp(){
    return mp;
    }
void job::setdps(int degat){
    this ->dps=degat;
}
void job::setmagie(int ap){
    this ->magie=ap;
}
void job::setmp(int mana){
    this ->mp=mana;
    
}
void job::setpv(int vita){
    this ->pv=vita;
}
