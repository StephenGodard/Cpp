#ifndef MAGE_H
#define MAGE_H
#include <string>

class mage
{
public:
    mage();
    mage(const mage&);
    mage(QString,QString,int,int,int);
    mage & operator=(mage&);
  ~mage();
 // Getters //
    int getvita();
    int getmana();
    int getap();
    int getlevel();
    QString getnom();
    QString getarme();
 // Setters //
 void setvita(int);
 void setmana(int);
 void setap(int);
 void setlevel(int);
 std::tring setnom(QString);
 std::string setarme(QString);

  // Actions //
 void magie(mage&,Guerrier&);
 friend class Guerrier;


private:
int vita;
int mana;
int ap;
int level;
std::string nom;
std::string arme;
};

#endif // MAGE_H
