#include <personnel.cpp>
#include <QString>
#include <iostream>

using namespace std;

int main(){

    personnel employer;

    int age;
    int ancienne;
    int salaire;
    QString  nom;

    cout << "quel age avez vous ?" << endl;
    cin >> age;

    cout << "quel est votre salaire?" << endl;
    cin >> salaire;

    cout << "a partir de quel année avez vous commencé à travailler dans notre entreprise? "<< endl;
    cin >> ancienne;

    ancienne=2017-ancienne;

    cout << "quel est votre nom ?" << endl;
    cin >> nom;


    employer.setAge(age);
    employer.setAncienne(ancienne);
    employer.setNom(nom);
    employer.setSalaire(salaire);

    cout << "vous etes"<< employer.getNom() << "vous avez " << employer.getAge() <<
            "vous etes dans notre dans notre entreprise depuis" << employer.getAncienne() << "et vous etes payé" <<
            employer.getSalaire() << endl;

    return 0;





}
