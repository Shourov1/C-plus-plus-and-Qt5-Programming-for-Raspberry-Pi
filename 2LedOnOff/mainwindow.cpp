#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "wiringPi.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    wiringPiSetup();
    pinMode(LedPin_1, OUTPUT);
    pinMode(LedPin_2, OUTPUT);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_On_clicked()
{
    digitalWrite(LedPin_1, HIGH);
    delay(500);
}

void MainWindow::on_Off_clicked()
{
    digitalWrite(LedPin_1, LOW);
    delay(500);
}


void MainWindow::on_On_2_clicked()
{
    digitalWrite(LedPin_2, HIGH);
    delay(500);
}

void MainWindow::on_Off_2_clicked()
{
    digitalWrite(LedPin_2, LOW);
    delay(500);
}


void MainWindow::on_Quit_clicked()
{
    close();
}
