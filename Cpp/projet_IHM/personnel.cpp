#include "personnel.h"
#include <QString>
using namespace std;
int personnel::nombre =0;

personnel::personnel(){
    nombre=nombre+1;
}
personnel::~personnel(){




}

int personnel::getAge(){
    return this->age;

}
int personnel::getAncienne(){
    return this ->ancienne;
}
int personnel::getSalaire(){
    return this ->salaire;
}
QString personnel::getNom(){
    return this ->nom;
}
QString personnel::getprenom(){
    return this -> prenom;
}



void personnel::setAge(int sonage){
    age=sonage;
}
void personnel::setAncienne(int ancien){
    ancienne=ancien;
}
void personnel::setSalaire(int sal){
    salaire=sal;
}
void personnel::setNom(QString name){
    nom=name;
}
void personnel::setPrenom(QString fname){
    prenom=fname;
}
/*void personnel::setsexe(bool S){
    this->sexe=S;
}
bool personnel::getsexe(){
    return this -> sexe;
}
*/
/*int personnel::getnombre(){
    return nombre;
}

void personnel::setnombre(){
    this -> nombre++;
}
*/
