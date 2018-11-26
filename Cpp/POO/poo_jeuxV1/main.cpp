#include <iostream>
#include <job.h>
using namespace std;
int main(){
    int vita=500;
    int mana=100;
    int ap=0;
    int degat=50;
    job paladin;

    paladin.setpv(vita);
    paladin.setmp(mana);
    paladin.setmagie(ap);
    paladin.setdps(degat);

    cout << "stat de la classe paladin: "<< endl << "vitalité:" <<paladin.getpv() << endl;
}
