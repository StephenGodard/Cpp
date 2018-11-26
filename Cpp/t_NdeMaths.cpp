#include <iostream>
#include <string>
using namespace std;

struct t_NdeMaths{
string Prenom;
string Nom;
float Note;
};

struct t_NdePhy {
string Prenom;
string Nom;
float Note
};

int i;

void main(){
	//Déclare u tableau de 2 structures.
	//Ce tableau est de type t_NdeMaths.
	//Ce tableau NdeMaths
t_NdeMaths NdeMaths[2];
NdeMaths[0].Prenom = "Jean";
NdeMaths[0].Nom = "BAR";
NdeMaths[0].Note = 12; 

t_NdePhy NdePhy[2];
NdePhy[0].Prenom = "Jean";
NdePhy[0].Nom = "BAR";
NdePhy[0].Note = 12;

cout << "La moyenne generale de " << NdeMaths[0].Prenom
	<< " " << NdeMaths[0].Nom << " est = "
	<< (NdeMaths[0].Note + NdePhy[0].Note)/2 << endl << endl;

	system("pause");
}