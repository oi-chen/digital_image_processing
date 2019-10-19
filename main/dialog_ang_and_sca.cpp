#include<dialog_ang_and_sca.h>
#include<ui_dialog_ang_and_sca.h>
Dialog_ang_and_sca::Dialog_ang_and_sca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_ang_and_sca){
    ui->setupUi(this);
}
Dialog_ang_and_sca::~Dialog_ang_and_sca(){
    delete ui;
}
