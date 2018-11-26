#include "personnel.h"
#include <QString>
using namespace std;
personnel::personnel(){


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

