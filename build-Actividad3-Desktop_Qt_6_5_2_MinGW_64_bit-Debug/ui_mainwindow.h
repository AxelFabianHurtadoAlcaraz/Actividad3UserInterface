/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *confirmacion;
    QPushButton *guardar;
    QLineEdit *id;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *voltaje;
    QLabel *label_5;
    QLineEdit *posicionX;
    QLabel *label_6;
    QLineEdit *posicionY;
    QLabel *label_7;
    QLineEdit *red;
    QLabel *label_8;
    QLineEdit *green;
    QLabel *label_9;
    QLineEdit *blue;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 10, 191, 31));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        confirmacion = new QLabel(centralwidget);
        confirmacion->setObjectName("confirmacion");
        confirmacion->setGeometry(QRect(310, 260, 191, 20));
        confirmacion->setFont(font);
        guardar = new QPushButton(centralwidget);
        guardar->setObjectName("guardar");
        guardar->setGeometry(QRect(350, 220, 101, 24));
        id = new QLineEdit(centralwidget);
        id->setObjectName("id");
        id->setGeometry(QRect(10, 60, 141, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 40, 151, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 100, 171, 16));
        voltaje = new QLineEdit(centralwidget);
        voltaje->setObjectName("voltaje");
        voltaje->setGeometry(QRect(10, 120, 161, 24));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 160, 211, 16));
        posicionX = new QLineEdit(centralwidget);
        posicionX->setObjectName("posicionX");
        posicionX->setGeometry(QRect(10, 180, 201, 24));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 220, 211, 16));
        posicionY = new QLineEdit(centralwidget);
        posicionY->setObjectName("posicionY");
        posicionY->setGeometry(QRect(10, 240, 201, 24));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 280, 151, 16));
        red = new QLineEdit(centralwidget);
        red->setObjectName("red");
        red->setGeometry(QRect(10, 300, 141, 24));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 340, 161, 16));
        green = new QLineEdit(centralwidget);
        green->setObjectName("green");
        green->setGeometry(QRect(10, 360, 161, 24));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 400, 151, 16));
        blue = new QLineEdit(centralwidget);
        blue->setObjectName("blue");
        blue->setGeometry(QRect(10, 420, 151, 24));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CAPTURAR DATOS DE NEURONA", nullptr));
        confirmacion->setText(QString());
        guardar->setText(QCoreApplication::translate("MainWindow", "Guardar neurona", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Ingrese el id de la neurona:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Ingrese el voltaje de la neurona", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Ingrese la posicion en X de la neurona:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Ingrese la posicion en Y de la neurona:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Ingrese RED de la neurona:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Ingrese GREEN de la neurona:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Ingrese BLUE de la neurona:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
