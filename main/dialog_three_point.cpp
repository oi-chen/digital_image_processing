#include<dialog_three_point.h>
#include<ui_dialog_three_point.h>
double three_coor[6];
Dialog_three_point::Dialog_three_point(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_three_point){
    ui->setupUi(this);
    QRegExp rx("1|([0-0]{1}[\.][0-9]{1,4})");
    QRegExpValidator *pReg=new QRegExpValidator(rx,this);
    ui->lineEdit->setText("0");
    ui->lineEdit_2->setText("0");
    ui->lineEdit_3->setText("0");
    ui->lineEdit_4->setText("1");
    ui->lineEdit_5->setText("1");
    ui->lineEdit_6->setText("0");
    ui->lineEdit->setValidator(pReg);
    ui->lineEdit_2->setValidator(pReg);
    ui->lineEdit_3->setValidator(pReg);
    ui->lineEdit_4->setValidator(pReg);
    ui->lineEdit_5->setValidator(pReg);
    ui->lineEdit_6->setValidator(pReg);
}
void Dialog_three_point::on_buttonBox_accepted(){
    three_coor[0]=ui->lineEdit->text().toDouble();
    three_coor[1]=ui->lineEdit_2->text().toDouble();
    three_coor[2]=ui->lineEdit_3->text().toDouble();
    three_coor[3]=ui->lineEdit_4->text().toDouble();
    three_coor[4]=ui->lineEdit_5->text().toDouble();
    three_coor[5]=ui->lineEdit_6->text().toDouble();
    send_three_coor();
    return;
}
void Dialog_three_point::on_buttonBox_rejected(){
    return;
}
Dialog_three_point::~Dialog_three_point(){
    delete ui;
}
