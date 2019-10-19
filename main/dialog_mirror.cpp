#include<dialog_mirror.h>
#include<ui_dialog_mirror.h>
Dialog_mirror::Dialog_mirror(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_mirror){
    ui->setupUi(this);
}
Dialog_mirror::~Dialog_mirror(){
    delete ui;
}
