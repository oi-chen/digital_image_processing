#include<dialog_smooth.h>
#include<ui_dialog_smooth.h>
int templet[9];
Dialog_smooth::Dialog_smooth(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Dialog_smooth){
    ui->setupUi(this);
    ui->lineEdit->setText("1");
    ui->lineEdit_2->setText("1");
    ui->lineEdit_3->setText("1");
    ui->lineEdit_4->setText("1");
    ui->lineEdit_5->setText("0");
    ui->lineEdit_6->setText("1");
    ui->lineEdit_7->setText("1");
    ui->lineEdit_8->setText("1");
    ui->lineEdit_9->setText("1");
    ui->lineEdit->setValidator(new QIntValidator(ui->lineEdit));//限制输入整数
    ui->lineEdit_2->setValidator(new QIntValidator(ui->lineEdit_2));
    ui->lineEdit_3->setValidator(new QIntValidator(ui->lineEdit_3));
    ui->lineEdit_4->setValidator(new QIntValidator(ui->lineEdit_4));
    ui->lineEdit_5->setValidator(new QIntValidator(ui->lineEdit_5));
    ui->lineEdit_6->setValidator(new QIntValidator(ui->lineEdit_6));
    ui->lineEdit_7->setValidator(new QIntValidator(ui->lineEdit_7));
    ui->lineEdit_8->setValidator(new QIntValidator(ui->lineEdit_8));
    ui->lineEdit_9->setValidator(new QIntValidator(ui->lineEdit_9));
}
void Dialog_smooth::on_buttonBox_accepted(){
    templet[0]=ui->lineEdit->text().toInt();
    templet[1]=ui->lineEdit_2->text().toInt();
    templet[2]=ui->lineEdit_3->text().toInt();
    templet[3]=ui->lineEdit_4->text().toInt();
    templet[4]=ui->lineEdit_5->text().toInt();
    templet[5]=ui->lineEdit_6->text().toInt();
    templet[6]=ui->lineEdit_7->text().toInt();
    templet[7]=ui->lineEdit_8->text().toInt();
    templet[8]=ui->lineEdit_9->text().toInt();
    emit send_parameter();
    return;
}
void Dialog_smooth::on_buttonBox_rejected(){
    return;
}
Dialog_smooth::~Dialog_smooth(){
    delete ui;
}
