#ifndef JOB_H
#define JOB_H
#include <iostream>
#include <string>
using namespace std;

class job
{
public:
    job();
    ~job();
    void setNom(string);
    string getNom();
    void setpv(int);
    int getpv();
    void setmp(int);
    int getmp();
    void setdps(int);
    int getdps();
    void setmagie(int);
    int getmagie();



private:

    string nom;
    int pv;
    int mp;
    int dps;
    int magie;


};

#endif // JOB_H
