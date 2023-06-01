#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_button0_clicked();

    void on_buttonc_clicked();

    void on_buttondot_clicked();

    void on_buttonmult_clicked();

    void on_buttonmin_clicked();

    void on_buttonplus_clicked();

    void on_buttoneq_clicked();

    void on_buttondivrev_clicked();

    void on_buttonpow_clicked();

    void on_buttonsqrt_clicked();

    void on_buttondiv_clicked();

    void on_buttonlbrac_clicked();

    void on_buttonrbrac_clicked();

    void on_buttonpi_clicked();

    void on_buttonfact_clicked();

private:
    Ui::MainWindow *ui;
    double sum1=0;
    double sum2=0;
    double help=0.1;
    QString string1,st;
    int sign=0;
    int plus=0,min=0,mult=0,div=0;
    int point=0;
    int check=-1,check2=0;

    int kuohao=0;
    double temp=0;
};

#endif
