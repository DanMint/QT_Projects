#include "mainwindow.h"
#include "./ui_mainwindow.h"
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

QString valOne = "";
int valOneInt;

QString valTwo = "";
int valTwoInt;

char operation = '~';

void MainWindow::on_one_clicked()
{
    if (operation != '~') {
        qInfo() << "in the second one";
        qInfo() << ui->numberDisplay->toPlainText();
        valTwo.append("1");
        valTwoInt = valTwo.toInt();
        ui->numberDisplay->setText(valTwo);
    }
    else {
        valOne.append("1");
        valOneInt = valOne.toInt();
        ui->numberDisplay->setText(valOne);
    }
}


void MainWindow::on_two_clicked()
{
    if (operation != '~') {
        valTwo.append("2");
        valTwoInt = valTwo.toInt();
        ui->numberDisplay->setText(valTwo);
    }
    else {
        valOne.append("2");
        valOneInt = valOne.toInt();
        ui->numberDisplay->setText(valOne);
    }
}


void MainWindow::on_three_clicked()
{
    if (operation != '~') {
        valTwo.append("3");
        valTwoInt = valTwo.toInt();
        ui->numberDisplay->setText(valTwo);
    }

    else {
        valOne.append("3");
        valOneInt = valOne.toInt();
        ui->numberDisplay->setText(valOne);
    }
}

void MainWindow::on_four_clicked()
{
    if (operation != '~') {
        valTwo.append("4");
        valTwoInt = valTwo.toInt();
        ui->numberDisplay->setText(valTwo);
    }
    else {
        valOne.append("4");
        valOneInt = valOne.toInt();
        ui->numberDisplay->setText(valOne);
    }
}


void MainWindow::on_five_clicked()
{
    if (operation != '~') {
        valTwo.append("5");
        valTwoInt = valTwo.toInt();
        ui->numberDisplay->setText(valTwo);
    }
    else {
        valOne.append("5");
        valOneInt = valOne.toInt();
        ui->numberDisplay->setText(valOne);
    }
}

void MainWindow::on_six_clicked()
{
    if (operation != '~') {
        valTwo.append("6");
        valTwoInt = valTwo.toInt();
        ui->numberDisplay->setText(valTwo);
    }
    else {
        valOne.append("6");
        valOneInt = valOne.toInt();
        ui->numberDisplay->setText(valOne);
    }
}


void MainWindow::on_seven_clicked()
{
    if (operation != '~') {
        valTwo.append("7");
        valTwoInt = valTwo.toInt();
        ui->numberDisplay->setText(valTwo);
    }

    else {
        valOne.append("7");
        valOneInt = valOne.toInt();
        ui->numberDisplay->setText(valOne);
    }
}

void MainWindow::on_eight_clicked()
{
    if (operation != '~') {
        valTwo.append("8");
        valTwoInt = valTwo.toInt();
        ui->numberDisplay->setText(valTwo);
    }
    else {
        valOne.append("8");
        valOneInt = valOne.toInt();
        ui->numberDisplay->setText(valOne);
    }
}


void MainWindow::on_nine_clicked()
{
    if (operation != '~') {
        valTwo.append("9");
        valTwoInt = valTwo.toInt();
        ui->numberDisplay->setText(valTwo);
    }

    else {
        valOne.append("9");
        valOneInt = valOne.toInt();
        ui->numberDisplay->setText(valOne);
    }
}


void MainWindow::on_zero_clicked()
{
    if (operation != '~') {
        valTwo.append("0");
        valTwoInt = valTwo.toInt();
        ui->numberDisplay->setText(valTwo);
    }

    else {
        valOne.append("0");
        valOneInt = valOne.toInt();
        ui->numberDisplay->setText(valOne);
    }
}


void MainWindow::on_clear_clicked()
{
    operation = '~';
    valOne = "";
    valOneInt = 0;
    valTwo = "";
    valTwoInt = 0;
    ui->numberDisplay->clear();
}


void MainWindow::on_doubleZero_clicked()
{
    if (operation != '~') {
        valTwo.append("00");
        valTwoInt = valTwo.toInt();
        ui->numberDisplay->setText(valTwo);
    }
    else {
        valOne.append("00");
        valOneInt = valOne.toInt();
        ui->numberDisplay->setText(valOne);
    }
}


void MainWindow::on_plus_clicked()
{
    operation = '+';
    valTwo = "";
    valTwoInt = 0;
    ui->numberDisplay->clear();
}


void MainWindow::on_equals_clicked()
{
    int sum;
    if (operation == '+') {
        sum = valOneInt + valTwoInt;
        ui->numberDisplay->setText(QString::number(sum));
    }

    else if (operation == '-') {
        sum = valOneInt - valTwoInt;
        ui->numberDisplay->setText(QString::number(sum));
    }

    else if (operation == '*') {
        sum = valOneInt * valTwoInt;
        ui->numberDisplay->setText(QString::number(sum));
    }

    else if (operation == '/') {
        sum = valOneInt / valTwoInt;
        ui->numberDisplay->setText(QString::number(sum));
    }

    operation = '~';
    valOne = "";
    valOneInt = 0;
    valTwo = "";
    valTwoInt = 0;
}


void MainWindow::on_minus_clicked()
{
    operation = '-';
    valTwo = "";
    valTwoInt = 0;
    ui->numberDisplay->clear();
}


void MainWindow::on_multiply_clicked()
{
    operation = '*';
    valTwo = "";
    valTwoInt = 0;
    ui->numberDisplay->clear();
}


void MainWindow::on_divide_clicked()
{
    operation = '/';
    valTwo = "";
    valTwoInt = 0;
    ui->numberDisplay->clear();
}

