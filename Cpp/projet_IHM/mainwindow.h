#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "personnel.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Ajout_clicked();

    void on_Delete_clicked();

    void on_Effacer_clicked();

    void on_homme_clicked();

    void on_femme_clicked();

    void on_lcdNumber_overflow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
