#ifndef GUERRIER_H
#define GUERRIER_H
#include <string>

class Guerrier
{
public:
    Guerrier();
    Guerrier(QString,QString,int,int);
    Guerrier(const Guerrier&);
    ~Guerrier;
    Guerrier & operator=(const Guerrier&);
    ~Guerrier();
    //  Getters  //
    int getvita();
    int getad();
    int getlevel();
    QString getnom();
    QString getarme();
    //   Setters //
    void setvita(int);
    void setad(int);
    void setlevel(int);
    void setnom(QString);
    void setarme(QString);

    // Actions //
   void Attaque(Guerrier&,Guerrier&);
friend class mage;
friend class healer;
private:
    int vita;
        int ad;
        int level;
    std::string nom;
    std::string arme;
};

#endif // GUERRIER_H
