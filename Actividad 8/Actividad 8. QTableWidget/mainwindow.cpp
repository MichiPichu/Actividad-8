#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <QList>
#include <qdebug.h>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnAgregarInicio_clicked()
{

    miobjeto.id = ui->txtID->text();
    miobjeto.voltaje = ui->txtVoltaje->text();
    miobjeto.posicion_x = ui->txtPx->text();
    miobjeto.posicion_y = ui->txtPy->text();
    miobjeto.red = ui->txtRed->text();
    miobjeto.green = ui->txtGreen->text();
    miobjeto.blue = ui->txtBlue->text();
    milista.append(miobjeto);


    qDebug() << "La lista es";


}
