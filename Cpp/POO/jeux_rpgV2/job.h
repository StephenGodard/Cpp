#ifndef JOB_H
#define JOB_H
#include<QString>

class job
{
public:
    job();
    ~job();
    job(job&);
    job &operator=(job&);
    job & operator++(int);
       // Getters //
    QString getnom();
    QString getarme();
    int getvita();
    int getmana();
    int getad();
    int getap();
    int getlevel();
    // Setters //
    void setvita(int);
    void setmana(int);
    void setad(int);
    void setap(int);
    void setlevel(int);
    void setnom(QString);
    void setarme(QString);
    //  actions //
    void protect(job&,job&);

    void sort(job&,job&);
    void attaque(job&,job&);


private:
    int vita;
    int mana;
    int ad;
    int ap;
    int level;
    QString nom;
    QString arme;
};

#endif // JOB_H
