#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_guardar_clicked()
 {
    int Id,posicion_X,posicion_Y,Red,Green,Blue;
    float Voltaje;

    QString ID=ui->id->text();
    Id = ID.toInt();

    QString POSICIONX=ui->posicionX->text();
    posicion_X = POSICIONX.toInt();

    QString POSICIONY=ui->posicionY->text();
    posicion_Y = POSICIONY.toInt();

    QString RED=ui->red->text();
    Red = RED.toInt();

    QString GREEN=ui->green->text();
    Green = GREEN.toInt();

    QString BLUE=ui->blue->text();
    Blue = BLUE.toInt();

    QString VOLTAJE=ui->voltaje->text();
    Voltaje = VOLTAJE.toFloat();

    ui->confirmacion->setText("Neurona guardada con exito");
 }

