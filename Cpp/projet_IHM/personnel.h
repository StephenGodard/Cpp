#ifndef _PERSONNEL_H
#define _PERSONNEL_H

//#endif // PERSONNEL

#include <QString>
using namespace std;
class personnel{

public:
    void setAge(int);//accesseur permettant de modifier l'age
    void setNom(QString);//accesseur permettant de modifier le nom
    void setAncienne(int);//accesseur permettant de modifier l'ancienneté
    void setSalaire(int);//accesseur permettant de modifier le salaire
    void setPrenom(QString);
    int getAge();//accesseur permettant de lire l'age
    int getAncienne();
    int getSalaire();
    QString getNom();
    QString getprenom();
    ~personnel();
    personnel();

  static int nombre;



private:
    QString nom;
    int age;
    int ancienne;
    int salaire;

    QString prenom;

};

#endif
