#include "etudiant.h"
#include <iostream>
#include <string>
using namespace std;
etudiant::etudiant()
{
        m_matricule=5;
        m_nom="stephen";
        Nbnotes=6;
        m_sexe=0;
}

/*etudiant::etudiant(string name,int note,int sexe){
    m_matricule++;
    this -> name=m_nom;
    this -> note=Nbnotes;
    this -> sexe=m_sexe;
}*/

int etudiant::getMatricule(){
    return m_matricule;
}
int etudiant::getNbnotes(){
    return Nbnotes;

}
int etudiant::getSexe(){
    return m_sexe;
    }
void etudiant::setMatricule(int mat){
    this ->m_matricule=mat;
}
void etudiant::setNbnotes(int note){
    this -> Nbnotes=note;
}
string etudiant::getNom(){
    return m_nom;
}
void etudiant::setNom(string name){
    this -> m_nom=name;
}
void etudiant::setSexe(int sexe){
    this -> m_sexe=sexe;
}

void etudiant::saisie(){
    int i=0;
    for (i;i<Nbnotes;i++){
        cout << "veuillez rentrer la " << i << "notes" << endl;
        cin >> tabnotes[i];
    }
}

void etudiant::affichage(){
    int i=0;
    for (i;i<Nbnotes;i++){
        cout << tabnotes[i] << endl;
    }
}
float etudiant::moyenne(){
    int i=0;
    int notes=0;
    float moyenne=0;
    for (i;i<Nbnotes;i++){
         notes+=tabnotes[i];
    }
    moyenne=(float)notes/i;
return moyenne;
}
int etudiant::grand(){
    int i=0;
    int maxi=0;
    for (i;i<Nbnotes;i++){
        if (maxi<tabnotes[i]){

            maxi=tabnotes[i];
        }
    }
return maxi;
}

int etudiant::petit(){
    int i=0;
    int mini=1000;
    for(i;i<Nbnotes;i++){
        if(mini>tabnotes[i]){
            mini=tabnotes[i];
        }
    }
    return mini;
}
/*bool etudiant::admis(){
    if(<10){
        return false;
    }
    else{
     return true;
    }
}*/
