#include <QString>
#include "mage.h"

class healer
{
public:

    healer();
    healer(QString,QString,int,int,int);
    healer(const healer&);
    healer& operator=(const healer&);
    // Getters //
    friend class Guerrier;
    friend class mage;
    int getvita();
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
    void soins(Guerrier&);



private:
    int vita;
    int mana;
    int ap;
    int level;
    QString nom;
    QString arme;
};
