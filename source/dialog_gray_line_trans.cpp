#include<dialog_gray_line_trans.h>
#include<ui_dialog_gray_line_trans.h>
double a,b,c,d;
Dialog_gray_line_trans::Dialog_gray_line_trans(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Dialog_gray_line_trans){
    ui->setupUi(this);
    QRegExp rx("1|([0-0]{1}[\.][0-9]{1,4})");//对所有输入框限制输入范围[0,1]内的4位及以下小数
    QRegExpValidator *limit=new QRegExpValidator(rx,this);
    ui->lineEdit->setValidator(limit);
    ui->lineEdit_2->setValidator(limit);
    ui->lineEdit_3->setValidator(limit);
    ui->lineEdit_4->setValidator(limit);
    ui->lineEdit->setText("0.3");
    ui->lineEdit_2->setText("0.7");
    ui->lineEdit_3->setText("0.2");
    ui->lineEdit_4->setText("0.8");
}
Dialog_gray_line_trans::~Dialog_gray_line_trans(){
    delete ui;
}
void Dialog_gray_line_trans::on_buttonBox_accepted(){
    a=ui->lineEdit->text().toDouble();
    b=ui->lineEdit_2->text().toDouble();
    c=ui->lineEdit_3->text().toDouble();
    d=ui->lineEdit_4->text().toDouble();
    if(a>=b){
        QMessageBox::information(this,tr("Error"),tr("Parameter error"));
        return;
    }
    emit send_parameter();
    return;
}
void Dialog_gray_line_trans::on_buttonBox_rejected(){
    return;
}
