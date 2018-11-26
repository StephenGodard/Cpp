#ifndef _PERSONNEL_H
#define _PERSONNEL_H


#include <string>
using namespace std;

class Personnel {
  public:
    Personnel();

    int getAge();

    void setAge(int age);

    int getSalaire();

    void setSalaire(int salaire);

    int getAnciennete();

    void setAnciennete(int anciennete);

    string getNom();

    void setNom(string nom);


  private:
    string sonNom;

    int sonAge;

    int sonSalaire;

    int sonAnciennete;

};

#endif
