#include<all.h>
#include<dialog_getrgb.h>
#include<ui_dialog_getrgb.h>
extern bool flag;
Dialog_getrgb::Dialog_getrgb(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Dialog_getrgb){
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator(ui->lineEdit));
    ui->lineEdit_2->setValidator(new QIntValidator(ui->lineEdit_2));
}
Dialog_getrgb::~Dialog_getrgb(){
    delete ui;
}
void Dialog_getrgb::on_buttonBox_accepted(){
    sendcoor(ui->lineEdit->text().toInt(),ui->lineEdit_2->text().toInt(),flag);
    return;
}
void Dialog_getrgb::on_buttonBox_rejected(){
    return;
}
