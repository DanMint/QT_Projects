#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_calculator_clicked();

    void on_notepad_clicked();

    void on_financial_clicked();

    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_zero_clicked();

    void on_doubleZero_clicked();

    void on_clear_clicked();

    void on_plus_clicked();

    void on_minus_clicked();

    void on_mult_clicked();

    void on_divide_clicked();

    void on_equals_clicked();

    void on_notepad_2_clicked();

    void on_transfer_clicked();

private:
    Ui::MainWindow *ui;

    QString currentFile = "";
};
#endif // MAINWINDOW_H
