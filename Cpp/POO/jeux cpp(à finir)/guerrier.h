#include <QString>

class Guerrier
{
public:
    friend class healer;
    friend class mage;
    Guerrier();
    Guerrier(QString,QString,int,int);
    Guerrier(const Guerrier&);

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
    void Attaque(Guerrier&);
    friend class mage;
    friend class healer;
private:
    int vita;
    int ad;
    int level;
    QString nom;
    QString arme;
    //debutant *start;
};


