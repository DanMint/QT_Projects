#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

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


QString current = "";
QString next = "";
QString oper = "";
int sum = 0;

void MainWindow::on_calculator_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_notepad_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_financial_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_one_clicked()
{
    if (current == "" || oper == "") {
        current.push_back("1");
        ui->textEdit->setText(current);
    }
    else {
        next.push_back("1");
        ui->textEdit->setText(next);
    }
}


void MainWindow::on_two_clicked()
{
    if (current == "" || oper == "") {
        current.push_back("2");
        ui->textEdit->setText(current);
    }
    else {
        next.push_back("2");
        ui->textEdit->setText(next);
    }
}


void MainWindow::on_three_clicked()
{
    if (current == "" || oper == "") {
        current.push_back("3");
        ui->textEdit->setText(current);
    }
    else {
        next.push_back("3");
        ui->textEdit->setText(next);
    }
}


void MainWindow::on_four_clicked()
{
    if (current == "" || oper == "") {
        current.push_back("4");
        ui->textEdit->setText(current);
    }
    else {
        next.push_back("4");
        ui->textEdit->setText(next);
    }
}


void MainWindow::on_five_clicked()
{
    if (current == "" || oper == "") {
        current.push_back("5");
        ui->textEdit->setText(current);
    }
    else {
        next.push_back("5");
        ui->textEdit->setText(next);
    }
}


void MainWindow::on_six_clicked()
{
    if (current == "" || oper == "") {
        current.push_back("6");
        ui->textEdit->setText(current);
    }
    else {
        next.push_back("6");
        ui->textEdit->setText(next);
    }
}


void MainWindow::on_seven_clicked()
{
    if (current == "" || oper == "") {
        current.push_back("7");
        ui->textEdit->setText(current);
    }
    else {
        next.push_back("7");
        ui->textEdit->setText(next);
    }
}


void MainWindow::on_eight_clicked()
{
    if (current == "" || oper == "") {
        current.push_back("8");
        ui->textEdit->setText(current);
    }
    else {
        next.push_back("8");
        ui->textEdit->setText(next);
    }
}


void MainWindow::on_nine_clicked()
{
    if (current == "" || oper == "") {
        current.push_back("9");
        ui->textEdit->setText(current);
    }
    else {
        next.push_back("9");
        ui->textEdit->setText(next);
    }
}


void MainWindow::on_zero_clicked()
{
    if (current == "" || oper == "") {
        current.push_back("0");
        ui->textEdit->setText(current);
    }
    else {
        next.push_back("0");
        ui->textEdit->setText(next);
    }
}


void MainWindow::on_doubleZero_clicked()
{
    if (current == "" || oper == "") {
        current.push_back("00");
        ui->textEdit->setText(current);
    }
    else {
        next.push_back("00");
        ui->textEdit->setText(next);
    }
}


void MainWindow::on_clear_clicked()
{
    current = "";
    next = "";
    oper = "";
    ui->textEdit->setText("");
}


void MainWindow::on_plus_clicked()
{
    if (oper == "") {
        oper = "+";
        ui->textEdit->setText("");
    }
    else {
        if (oper == "+") {
            sum = current.toInt() + next.toInt();
            current = QString::number(sum);
            next = "";
            oper = "+";
            ui->textEdit->setText(current);
        }
        else if (oper == "-") {
            sum = current.toInt() - next.toInt();
            current = QString::number(sum);
            next = "";
            oper = "+";
            ui->textEdit->setText(current);
        }
        else if (oper == "*") {
            sum = current.toInt() * next.toInt();
            current = QString::number(sum);
            next = "";
            oper = "+";
            ui->textEdit->setText(current);
        }
        else if (oper == "/") {
            sum = current.toInt() / next.toInt();
            current = QString::number(sum);
            next = "";
            oper = "+";
            ui->textEdit->setText(current);
        }

    }
}


void MainWindow::on_minus_clicked()
{
    if (oper == "") {
        oper = "-";
        ui->textEdit->setText("");
    }
    else {
        if (oper == "+") {
            sum = current.toInt() + next.toInt();
            current = QString::number(sum);
            next = "";
            oper = "-";
            ui->textEdit->setText(current);
        }
        else if (oper == "-") {
            sum = current.toInt() - next.toInt();
            current = QString::number(sum);
            next = "";
            oper = "-";
            ui->textEdit->setText(current);
        }
        else if (oper == "*") {
            sum = current.toInt() * next.toInt();
            current = QString::number(sum);
            next = "";
            oper = "-";
            ui->textEdit->setText(current);
        }
        else if (oper == "/") {
            sum = current.toInt() / next.toInt();
            current = QString::number(sum);
            next = "";
            oper = "-";
            ui->textEdit->setText(current);
        }

    }
}


void MainWindow::on_mult_clicked()
{
    if (oper == "") {
        oper = "*";
        ui->textEdit->setText("");
    }
    else {
        if (oper == "+") {
            sum = current.toInt() + next.toInt();
            current = QString::number(sum);
            next = "";
            oper = "*";
            ui->textEdit->setText(current);
        }
        else if (oper == "-") {
            sum = current.toInt() - next.toInt();
            current = QString::number(sum);
            next = "";
            oper = "*";
            ui->textEdit->setText(current);
        }
        else if (oper == "*") {
            sum = current.toInt() * next.toInt();
            current = QString::number(sum);
            next = "";
            oper = "*";
            ui->textEdit->setText(current);
        }
        else if (oper == "/") {
            sum = current.toInt() / next.toInt();
            current = QString::number(sum);
            next = "";
            oper = "*";
            ui->textEdit->setText(current);
        }

    }
}


void MainWindow::on_divide_clicked()
{
    if (oper == "") {
        oper = "/";
        ui->textEdit->setText("");
    }
    else {
        if (oper == "+") {
            sum = current.toInt() + next.toInt();
            current = QString::number(sum);
            next = "";
            oper = "/";
            ui->textEdit->setText(current);
        }
        else if (oper == "-") {
            sum = current.toInt() - next.toInt();
            current = QString::number(sum);
            next = "";
            oper = "/";
            ui->textEdit->setText(current);
        }
        else if (oper == "*") {
            sum = current.toInt() * next.toInt();
            current = QString::number(sum);
            next = "";
            oper = "/";
            ui->textEdit->setText(current);
        }
        else if (oper == "/") {
            sum = current.toInt() / next.toInt();
            current = QString::number(sum);
            next = "";
            oper = "/";
            ui->textEdit->setText(current);
        }

    }
}


void MainWindow::on_equals_clicked()
{
    if (current != "" && next != "") {
        if (oper == "+") {
            sum = current.toInt() + next.toInt();
            ui->textEdit->setText(QString::number(sum));
            sum = 0;
            current = 0;
            next = 0;
        }
        else if (oper == "-") {
            sum = current.toInt() - next.toInt();
            ui->textEdit->setText(QString::number(sum));
            sum = 0;
            current = 0;
            next = 0;
        }
        else if (oper == "*") {
            sum = current.toInt() * next.toInt();
            ui->textEdit->setText(QString::number(sum));
            sum = 0;
            current = 0;
            next = 0;
        }
        else if (oper == "/") {
            sum = current.toInt() / next.toInt();
            ui->textEdit->setText(QString::number(sum));
            sum = 0;
            current = 0;
            next = 0;
        }
        else
            ui->textEdit->setText("ERROR");
    }
    else
        ui->textEdit->setText("ERROR");
}

void MainWindow::on_notepad_2_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save as");

    QFile file(fileName);

    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }

    QTextStream out(&file);

    ///Here we transfrom the writen data in the text box and save it into a file
    QString text = ui->textEdit_2->toPlainText();
    out << text;
    file.close();
}

bool transferClicked = false;

void MainWindow::on_transfer_clicked()
{
    transferClicked = true;
    ui->transferText->setText(current);
}


