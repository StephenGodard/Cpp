#include "rpg.h"

rpg::rpg()
{
   _nom="unnamed";
   _job="vagabond";
   _pv=20;
   _mp=20;
   _ad=20;
   _ap=20;
   level=1;
}
rpg::rpg(string name, string classe,int vie, int mana, int adc, int apc){
    this ->name=_nom;
    this ->classe=_job;
    this->vie=_pv;
    this -> mana=_mp;
    this -> adc=_ad;
    this ->apc=_ap;
    level=30;
    }
rpg::rpg(const rpg &job){
    _nom=job.getname();
    _job=job.getjob();
    _pv=job.getpv();
    _mp=job.getmp();
    _ad=job.getad();
    ap=job.getap();
   level=30;
}


