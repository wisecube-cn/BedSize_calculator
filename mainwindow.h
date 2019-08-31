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
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    double myAbs(double x);

private slots:
    void on_btn_count_clicked();

private:
    Ui::MainWindow *ui;
    double bed_h_1=0;
    double bed_h_2=0;
    double bed_w_1=0;
    double bed_w_2=0;

    double ref_h_1=0;
    double ref_h_2=0;
    double ref_w_1=0;
    double ref_w_2=0;

    double ref_h_t=0;
    double ref_w_t=0;

    double bed_h=0;
    double bed_w=0;
    double ref_h=0;
    double ref_w=0;
};

#endif // MAINWINDOW_H
