#include<dialog_movement.h>
#include<ui_dialog_movement.h>
Dialog_movement::Dialog_movement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_movement){
    ui->setupUi(this);
}
Dialog_movement::~Dialog_movement(){
    delete ui;
}
