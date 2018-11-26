#ifndef RPG_H
#define RPG_H
#include<string>
using namespace std;
class rpg
{
public:
    rpg();//constructeur par défaut
    rpg(string,string,int,int,int,int);//constructeur avec paramètres
    rpg(const rpg&);//constucteur de recopie
    rpg &operator=(const guerrier&);
    ~rpg;
    string getnom();
    string getjob();
    int getpv();
    int getmp();
    int getad();
    int getap();
    int getlevel();
    void setnom(string);
    void setjob(string);
    void setpv(int);
    void setmp(int);
    void setad(int);
    void setap(int);
    attaquer();
    magie();
private:
    string _nom;
    string _job;
    int _pv;
    int _mp;
    int _ad;
    int _ap;
    int level;
};

#endif // RPG_H
