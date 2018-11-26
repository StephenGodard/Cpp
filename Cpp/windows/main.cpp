#include <iostream>
#include<QLineEdit>
#include<QPushButton>
#include <QApplication>
int main(int argc,char*argv[]){
    QApplication fen(argc,argv);
    QPushButton bouton("ma première fenetre");
    bouton.show();
    return fen.exec();


}
