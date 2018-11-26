#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "job.h"
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

/*void MainWindow::on_pv_valueChanged(int value,job job)
{
    value=job.getv();
}*/
