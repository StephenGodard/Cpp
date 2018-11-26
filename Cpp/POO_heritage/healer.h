#ifndef HEALER_H
#define HEALER_H
#include <string>
#include <guerrier.h>

class healer
{
public:
    healer();
    healer(QString,QString,int,int,int);
    healer(const healer&);
    healer & operator=(healer&);
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
void setnom(QString);
void setarme(QString);
 // Actions //
void soins (healer&,Guerrier&);



private:
   int vita;
   int mana;
   int ap;
   int level;
   std::string nom;
   std::string arme;
};

#endif // HEALER_H
