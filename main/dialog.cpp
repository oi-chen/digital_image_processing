#include<dialog.h>
#include<ui_dialog.h>
Dialog::Dialog(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Dialog){
    ui->setupUi(this);
    ui->doubleSpinBox2->setMinimum(0.10);
    ui->doubleSpinBox2->setMaximum(10.00);
    ui->doubleSpinBox2->setSingleStep(0.01);
    ui->horizontalSlider2->setMinimum(10);
    ui->horizontalSlider2->setMaximum(1000);
    ui->horizontalSlider2->setSingleStep(1);
}
int doubleToInt(double d){
    double intPart=floor(d);
    if((d-intPart)>=(double)0.5)
        return (int)(intPart+1);
    else
        return (int)intPart;
}
void Dialog::on_doubleSpinBox2_valueChanged(double arg1){
    ui->horizontalSlider2->setValue(doubleToInt((ui->doubleSpinBox2->value())*100));
}
void Dialog::on_horizontalSlider2_valueChanged(int value){
    ui->doubleSpinBox2->setValue((double)(ui->horizontalSlider2->value())/100);
}
//用此写法也可，但拖动条只能拖动至整数，做不到无级拖动
/*
void Dialog::on_doubleSpinBox2_valueChanged(double arg1){
    ui->horizontalSlider2->setValue(doubleToInt2(arg1)*100);
}
void Dialog::on_horizontalSlider2_valueChanged(int value){
    ui->doubleSpinBox2->setValue((double)(value)/100);
}
*/
void Dialog::on_buttonBox_accepted(){
    double size_value=ui->doubleSpinBox2->value();
    emit sendsignal(size_value);
    return;
}
void Dialog::on_buttonBox_rejected(){
    return;
}
Dialog::~Dialog(){
    delete ui;
}
