#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <string>
#include <iostream>
using namespace std;
class etudiant
{
public:
    etudiant();
    int getMatricule();
    string getNom();
    int getNbnotes();
    int getSexe();
    void setMatricule(int);
    void setNom(string);
    void setNbnotes(int);
    void setSexe(int);
    void saisie();
    void affichage();
    float moyenne();
     int grand();
     int petit();
  //  bool admis();

private:
    int m_matricule;
    string m_nom;
    int Nbnotes;
    int *tabnotes;
    int m_sexe;
};

#endif // ETUDIANT_H
