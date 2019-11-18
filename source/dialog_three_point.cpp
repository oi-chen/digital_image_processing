#include<dialog_three_point.h>
#include<ui_dialog_three_point.h>
double three_coor[6];
Dialog_three_point::Dialog_three_point(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_three_point){
    ui->setupUi(this);
    QRegExp rx("1|([0-0]{1}[\\.][0-9]{1,4})");//对所有输入框限制输入范围[0,1]内的4位及以下小数
    QRegExpValidator *limit=new QRegExpValidator(rx,this);
    ui->lineEdit->setText("0");
    ui->lineEdit_2->setText("0");
    ui->lineEdit_3->setText("0");
    ui->lineEdit_4->setText("1");
    ui->lineEdit_5->setText("1");
    ui->lineEdit_6->setText("0");
    ui->lineEdit->setValidator(limit);
    ui->lineEdit_2->setValidator(limit);
    ui->lineEdit_3->setValidator(limit);
    ui->lineEdit_4->setValidator(limit);
    ui->lineEdit_5->setValidator(limit);
    ui->lineEdit_6->setValidator(limit);
}
void Dialog_three_point::on_buttonBox_accepted(){
    three_coor[0]=ui->lineEdit->text().toDouble();
    three_coor[1]=ui->lineEdit_2->text().toDouble();
    three_coor[2]=ui->lineEdit_3->text().toDouble();
    three_coor[3]=ui->lineEdit_4->text().toDouble();
    three_coor[4]=ui->lineEdit_5->text().toDouble();
    three_coor[5]=ui->lineEdit_6->text().toDouble();
    emit send_parameter();
    return;
}
void Dialog_three_point::on_buttonBox_rejected(){
    return;
}
Dialog_three_point::~Dialog_three_point(){
    delete ui;
}
