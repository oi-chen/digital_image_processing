#include<dialog_ang_and_sca.h>
#include<ui_dialog_ang_and_sca.h>
Dialog_ang_and_sca::Dialog_ang_and_sca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_ang_and_sca){
    ui->setupUi(this);
    ui->doubleSpinBox->setMinimum(0.10);//限制缩放倍率为0.1~10
    ui->doubleSpinBox->setMaximum(10.00);
    ui->doubleSpinBox->setSingleStep(0.01);
    ui->lineEdit->setValidator(new QDoubleValidator(ui->lineEdit));//限制旋转角度为浮点数
    ui->lineEdit->setText("45");
}
void Dialog_ang_and_sca::on_buttonBox_accepted(){
    emit send_parameter(ui->doubleSpinBox->value(),ui->lineEdit->text().toDouble());
    return;
}
void Dialog_ang_and_sca::on_buttonBox_rejected(){
    return;
}
Dialog_ang_and_sca::~Dialog_ang_and_sca(){
    delete ui;
}
