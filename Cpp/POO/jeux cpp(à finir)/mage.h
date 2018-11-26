#ifndef MAGE_H
#define MAGE_H


#include <QString>
#include <guerrier.h>

class mage
{
public:

    mage();
    mage(const mage&);
    mage(QString,QString,int,int,int);
    mage& operator=(const mage&);
    ~mage();

   // friend class Guerrier;
   // friend class healer;

    // Getters //
    int getvita() ;
    int getmana();
    int getap();
    int getlevel();
    QString getnom();
    QString getarme();
    // Setters //
    void setvita(int pv);
    void setmana(int);
    void setap(int);
    void setlevel(int);
    void setnom(QString);
    void setarme(QString);

    // Actions //
    void magie(Guerrier&);



private:
    int vita;
    int mana;
    int ap;
    int level;
    QString nom;
    QString arme;
};

#endif // MAGE_H

