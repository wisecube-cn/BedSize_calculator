#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_count_clicked()
{
    bed_h = myAbs(this->ui->edt_bed_h_1->text().toDouble() - this->ui->edt_bed_h_2->text().toDouble());
    bed_w = abs(this->ui->edt_bed_w_1->text().toDouble() - this->ui->edt_bed_w_2->text().toDouble());

    ref_h = myAbs(this->ui->edt_ref_h_1->text().toDouble() - this->ui->edt_ref_h_2->text().toDouble());
    ref_w = myAbs(this->ui->edt_ref_w_1->text().toDouble() - this->ui->edt_ref_w_2->text().toDouble());

    ref_h_t = this->ui->edt_ref_h->text().toDouble();
    ref_w_t = this->ui->edt_ref_w->text().toDouble();
    qDebug()<<bed_h;
    qDebug()<<bed_w;
    qDebug()<<ref_h;
    qDebug()<<ref_w;
    qDebug()<<ref_h_t;
    qDebug()<<ref_w_t;

    double x = ref_h_t/ref_h*bed_h;
    double y = ref_w_t/ref_w*bed_w;
    qDebug()<<"x cal:"<<x;
    qDebug()<<"y cal:"<<y;

    this->ui->result_x->setText(QString::number(x));
    this->ui->result_y->setText(QString::number(y));
}
double MainWindow::myAbs(double x){
    return x>0 ? x : -x;
}
