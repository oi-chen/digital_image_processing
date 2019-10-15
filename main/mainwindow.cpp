#include<mainwindow.h>
#include<ui_mainwindow.h>
Mat image,image_changed;
QImage img,img2;
QString filename;
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(OpenImg()));
    connect(ui->doubleSpinBox, SIGNAL(valueChanged(double)), this, SLOT(slotDoubleSpinbox_slider()));
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(slotslider_DoubleSpinBox()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(change_size()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(save_image()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(fun1()));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(fun2()));
    ui->doubleSpinBox->setMinimum(0.10);
    ui->doubleSpinBox->setMaximum(10.00);
    ui->doubleSpinBox->setSingleStep(0.01);
    ui->horizontalSlider->setMinimum(10);
    ui->horizontalSlider->setMaximum(1000);
    ui->horizontalSlider->setSingleStep(1);
    ui->lineEdit->setValidator(new QIntValidator(ui->lineEdit));
    ui->lineEdit_2->setValidator(new QIntValidator(ui->lineEdit_2));
}
void MainWindow::on_actionopen_triggered(){
    OpenImg();
}
void MainWindow::on_actionsave_as_triggered(){
    save_image();
}
int doubleToInt(double d){
    double intPart=floor(d);
    if((d-intPart)>=(double)0.5)
        return (int)(intPart+1);
    else
        return (int)intPart;
}
void MainWindow::slotDoubleSpinbox_slider(){
    ui->horizontalSlider->setValue(doubleToInt((ui->doubleSpinBox->value())*100));
}
void MainWindow::slotslider_DoubleSpinBox(){
    ui->doubleSpinBox->setValue((double)(ui->horizontalSlider->value())/100);
}
MainWindow::~MainWindow(){
    delete ui;
}
