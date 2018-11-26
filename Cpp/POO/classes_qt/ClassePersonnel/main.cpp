#include <iostream>
#include <string>
#include <personnel.h>
using namespace std;


int main()
{
    int ageMain, ancienneteMain, SalaireMain, nbSalarie = 0;
    string nomMain("");
    cout << "Combien de salariés comporte votre entreprise ? " << endl;
    cin >> nbSalarie;
    Personnel monTableauSalarie[nbSalarie];
    for (int i = 0; i< nbSalarie ; i++){
        cout << "Entrez le nom du salarié N°" << i+1 << endl;
        cin >> nomMain;
        monTableauSalarie[i].setNom(nomMain);
        cout << "Entrez l'âge de "<< monTableauSalarie[i].getNom() <<":" ;
        cin >> ageMain;
        monTableauSalarie[i].setAge(ageMain);
        cout << "Entrez l'ancienneté de "<< monTableauSalarie[i].getNom() <<":" ;
        cin >> ancienneteMain;
        monTableauSalarie[i].setAge(ancienneteMain);
        cout << "Entrez le salaire de "<< monTableauSalarie[i].getNom() <<":" ;
        cin >> SalaireMain;
        monTableauSalarie[i].setSalaire(SalaireMain);
        cout << "Salarié "<< i+1 << " ajouté !" << endl;

    }

    cout << "Fin de l'import de salarié" << endl;
    cout << "Récapitulatif :" << endl;

    for(int i =0;i<nbSalarie;i++){
        cout << "Salarié N°" << i+1 << " : " << monTableauSalarie[i].getNom() << endl;
        cout << "Age : " << monTableauSalarie[i].getAge()
             << "| Salaire: " << monTableauSalarie[i].getSalaire()
             << "| Ancienneté : " << monTableauSalarie[i].getAnciennete() << endl;
    }

    return 0;
}
