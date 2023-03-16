/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *txtID;
    QLabel *label_4;
    QLineEdit *txtVoltaje;
    QLabel *label_5;
    QLineEdit *txtPx;
    QLabel *label_3;
    QLineEdit *txtPy;
    QLabel *label_7;
    QLineEdit *txtRed;
    QLabel *label_8;
    QLineEdit *txtGreen;
    QLabel *label_6;
    QLineEdit *txtBlue;
    QPushButton *btnAgregarFinal;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *btnAgregarInicio;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_9;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(762, 360);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 60, 197, 211));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        txtID = new QLineEdit(formLayoutWidget);
        txtID->setObjectName("txtID");
        txtID->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtID);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        txtVoltaje = new QLineEdit(formLayoutWidget);
        txtVoltaje->setObjectName("txtVoltaje");
        txtVoltaje->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtVoltaje);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        txtPx = new QLineEdit(formLayoutWidget);
        txtPx->setObjectName("txtPx");
        txtPx->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txtPx);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        txtPy = new QLineEdit(formLayoutWidget);
        txtPy->setObjectName("txtPy");
        txtPy->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(3, QFormLayout::FieldRole, txtPy);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        txtRed = new QLineEdit(formLayoutWidget);
        txtRed->setObjectName("txtRed");
        txtRed->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(4, QFormLayout::FieldRole, txtRed);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_8);

        txtGreen = new QLineEdit(formLayoutWidget);
        txtGreen->setObjectName("txtGreen");
        txtGreen->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(5, QFormLayout::FieldRole, txtGreen);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        txtBlue = new QLineEdit(formLayoutWidget);
        txtBlue->setObjectName("txtBlue");
        txtBlue->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(6, QFormLayout::FieldRole, txtBlue);

        btnAgregarFinal = new QPushButton(centralwidget);
        btnAgregarFinal->setObjectName("btnAgregarFinal");
        btnAgregarFinal->setGeometry(QRect(240, 120, 101, 31));
        btnAgregarFinal->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(250, 250, 75, 24));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 221, 20));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        btnAgregarInicio = new QPushButton(centralwidget);
        btnAgregarInicio->setObjectName("btnAgregarInicio");
        btnAgregarInicio->setGeometry(QRect(240, 80, 101, 31));
        btnAgregarInicio->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(360, 40, 381, 231));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(530, 10, 221, 20));
        label_9->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(520, 280, 75, 24));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 762, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Voltaje:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Posicion X:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Posicion Y:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Red:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Green:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Blue:", nullptr));
        btnAgregarFinal->setText(QCoreApplication::translate("MainWindow", "Agregar al final", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Cerrar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CAPTURAR NEURONAS", nullptr));
        btnAgregarInicio->setText(QCoreApplication::translate("MainWindow", "Agregar al inicio", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Lista:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Mostrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
