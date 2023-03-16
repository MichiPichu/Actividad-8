#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

using namespace std;

class Neurona
{
    private: // Atributos


    public://Constructor
    QString id;
    QString voltaje;
    QString posicion_x;
    QString posicion_y;
    QString red;
    QString green;
    QString blue;

        Neurona(){};
        Neurona(const Neurona& n){
            id = n.id;
            voltaje = n.voltaje;
            posicion_x = n.posicion_x;
            posicion_y = n.posicion_y;
            red = n.red;
            green = n.green;
            blue = n.blue;
        };


};

///Implementacion

// Constructores de la clase Neurona //

//Neurona::Neurona(){}
/*
Neurona::Neurona(const Neurona& n)
{
    id = n.id;
    voltaje = n.voltaje;
    posicion_x = n.posicion_x;
    posicion_y = n.posicion_y;
    red = n.red;
    green = n.green;
    blue = n.blue;
};
*/

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAgregarInicio_clicked();

private:
    Ui::MainWindow *ui;
    QList<Neurona> milista;
    Neurona miobjeto;
    int tam = 0;

};

#endif // MAINWINDOW_H
