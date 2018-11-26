#include <iostream>
#include "etudiant.h"
using namespace std;

int main()
{
    etudiant etudiant1;
    etudiant1.saisie();
    etudiant1.affichage();
    cout << "la moyenne de " << etudiant1.getNom() << "est de " << etudiant1.moyenne() << endl;
    cout << "note la plus haute:" << etudiant1.grand() << "\n note la plus basse:" << etudiant1.petit() << endl;
/*if (etudiant1.admis()){
    cout << "vous etes admis ! " << endl;
}

            else {
            cout << "vous etes recaler....." << endl;
}*/
            return 0;
}

