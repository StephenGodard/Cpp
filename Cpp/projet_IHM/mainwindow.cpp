#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include"personnel.h"
#include <QFile>
#include <QDebug>
#include <QStandardItem>
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Ajout_clicked()
{
    if (ui -> Nom -> text() ==" "|| ui -> age -> value()==0 || ui -> prenom -> text()==" " || ui -> Salaire -> value()==0){
                QString erreur;
        erreur+="information incorrecte !";
        ui -> textBrowser -> setTextColor(QColor(255,0,0,255));
        ui -> textBrowser -> append(erreur);

        return;
    }

    personnel Personne; // Instanciation d’un objet de type Personnel
    Personne.setNom(ui->Nom->text());
    Personne.setAge(ui->age->value());
    Personne.setSalaire(ui->Salaire->value());
    Personne.setPrenom(ui->prenom->text());
    ui -> nbEmploye -> display(Personne.nombre);
QStandardItemModel(1,5);

        QStandardItem (Personne.getNom());
        QStandardItem (Personne.getprenom());
        QStandardItem(Personne.getAge());
        QStandardItem(Personne.getSalaire());
   QList <QStandardItem>;
ui -> table -> QTableView()  ;

        QString phraseRecap;
        phraseRecap = "Nous souhaitons la bienvenue a ";
        phraseRecap += Personne.getNom();
        phraseRecap += " ";
        phraseRecap +=Personne.getprenom();
        if (ui -> genre -> currentText()=="Homme"){
        phraseRecap += ",  il est age de ";








        }

        else {
            phraseRecap += ",  elle est agee de ";
        }
        phraseRecap += QString::number(Personne.getAge());
        phraseRecap += " ans et gagnera : ";
        phraseRecap += QString::number(Personne.getSalaire());
        phraseRecap += " euros  par mois";
        if(Personne.getSalaire()>2000){
            phraseRecap+= ", je suis jaloux";
            ui->textBrowser->setTextColor(QColor(255,0,0,255));
        }
        else{
            phraseRecap+= ", ah ah  !";
            ui->textBrowser->setTextColor(QColor(0,0,255,255));
        }
        ui->textBrowser->append(phraseRecap);
        qDebug() <<  phraseRecap; // Pour que cette ligne fonctionne vous devez inclure <qDebug> à votre code.cpp
        ui->textBrowser->show();

        // Création d'un objet QFile
        QFile file("Qt.txt");
        // On ouvre notre fichier en lecture seule et on vérifie l'ouverture
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return;

        // Création d'un objet QTextStream à partir de notre objet QFile
        QTextStream flux(&file);
        // On choisit le codec correspondant au jeu de caractères que l'on souhaite ; ici, UTF-8
        flux.setCodec("UTF-8");
        // Écriture des différentes lignes dans le fichier
        flux << phraseRecap << endl;

    }



void MainWindow::on_Delete_clicked()
{


    ui->Nom->clear();  // Efface le contenu du widget « lineEditNom »
    ui-> age ->setValue(0);  //Remet à 0 le chiffre affiché dans le widget « spinBoxAge »
    ui->Salaire->setValue(0); //Remet à 0 le chiffre dans le widget « spinBoxSalaire »
    ui->prenom->clear();
}




void MainWindow::on_Effacer_clicked()
{
    ui -> textBrowser -> clear() ;
}

