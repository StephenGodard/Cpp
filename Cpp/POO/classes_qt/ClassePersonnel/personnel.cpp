//Implémentation de la classe Personnel
//Dans le fichier "personnel.cpp"

#include <personnel.h>
/**
 * @brief Personnel::Personnel
 * Constructeur de la classe Personnel
 */
Personnel::Personnel()
{

}
/**
 * @brief Personnel::getAge
 * Accesseur (getter) de l'attribut monAge;
 * @return
 */
int Personnel::getAge(){
    return this->sonAge;
}
/**
 * @brief Personnel::setAge
 * Accesseur (seter) de l'attribut monAge;
 * @param age
 * Entier correspondant à l'age du salarié
 */
void Personnel::setAge(int age){
    sonAge=age;
}

int Personnel::getAnciennete(){
    return this->sonAnciennete;
}

void Personnel::setAnciennete(int anciennete){
    sonAnciennete=anciennete;
}

int Personnel::getSalaire(){
    return this->sonSalaire;
}

void Personnel::setSalaire(int salaire){
    sonSalaire=salaire;
}

string Personnel::getNom(){
    return this->sonNom;
}

void Personnel::setNom(string nom){
    sonNom=nom;
}
