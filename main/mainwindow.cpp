#include<mainwindow.h>
#include<dialog.h>
#include<ui_mainwindow.h>
Mat image,image_changed;
QImage img;
QString filename;
bool flag;
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    ang=new Dialog_ang_and_sca;
    dia=new Dialog;
    getrgb=new Dialog_getrgb;
    smooth=new Dialog_smooth;
    three_point=new Dialog_three_point;
    connect(dia,SIGNAL(sendsignal(double)),this,SLOT(change_size(double)));
    connect(getrgb,SIGNAL(sendcoor(int,int)),this,SLOT(getrgbclicked(int,int)));
    connect(three_point,SIGNAL(send_parameter()),this,SLOT(get_three_point()));
    connect(ang,SIGNAL(send_parameter(double,double)),this,SLOT(get_ang_and_sca(double,double)));
    connect(smooth,SIGNAL(send_parameter()),this,SLOT(image_smooth()));
}
void MainWindow::closeEvent(QCloseEvent *event){
    int button=QMessageBox::question(this,tr("Attention"),QString(tr("Mainwindow is closing, do you need to close all child windows?")),QMessageBox::Yes|QMessageBox::No);//提示是否关闭所有子窗口
    if(button==QMessageBox::Yes)
        exit(0);
}
void MainWindow::remind_save(){
    int button=QMessageBox::question(this,tr("save file"),QString(tr("Do you need to save this image?")),QMessageBox::Yes|QMessageBox::No);//提示是否保存生成图像
    if(button==QMessageBox::Yes)
        save_image();
}
void MainWindow::on_actionopen_triggered(){
    OpenImg();
}
void MainWindow::on_actionSize_triggered(){
    if((!img.width())&&(!img.height())){
        QMessageBox::information(this,tr("Error"),tr("No image can be transformed"));
        return;
    }
    dia->setWindowTitle("Select change magnification");
    dia->show();
}
void MainWindow::on_actionThree_point_method_triggered(){
    if(image.empty()){
        QMessageBox::information(this,tr("Error"),tr("Can't find image"));
        return;
    }
    three_point->setWindowTitle("Fill in the parameters");
    three_point->show();
}
void MainWindow::on_actionSpecify_angle_and_scale_triggered(){
    if(image.empty()){
        QMessageBox::information(this,tr("Error"),tr("Can't find image"));
        return;
    }
    ang->setWindowTitle("Fill in the parameters");
    ang->show();
}
void MainWindow::on_actionMirror_flip_triggered(){
    if(image.empty()){
        QMessageBox::information(this,tr("Error"),tr("Can't find image"));
        return;
    }
    mirror_flip();
}
void MainWindow::on_actionImage_smoothing_triggered(){
    if(image.empty()){
        QMessageBox::information(this,tr("Error"),tr("Can't find image"));
        return;
    }
    smooth->setWindowTitle("Fill in the parameters");
    smooth->show();
}
void MainWindow::on_actionGet_Original_image_rgb_triggered(){
    if(image.empty()){
        QMessageBox::information(this,tr("Error"),tr("Can't find image"));
        return;
    }
    getrgb->setWindowTitle("get original_image rgb");
    getrgb->show();
}
void MainWindow::on_action_grayscale_distribution_histogram_triggered(){
    get_historgam(false);
}
void MainWindow::on_actionRgb_distribution_histogram_triggered(){
    get_historgam(true);
}
MainWindow::~MainWindow(){
    delete ui;
}
