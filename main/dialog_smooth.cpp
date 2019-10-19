#include<dialog_smooth.h>
#include<ui_dialog_smooth.h>
Dialog_smooth::Dialog_smooth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_smooth){
    ui->setupUi(this);
}
Dialog_smooth::~Dialog_smooth(){
    delete ui;
}
