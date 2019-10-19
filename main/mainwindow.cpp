#include<mainwindow.h>
#include<dialog.h>
#include<ui_mainwindow.h>
Mat image,image_changed;
QImage img,img2;
QString filename;
bool flag;
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    ang=new Dialog_ang_and_sca;
    dia=new Dialog;
    getrgb=new Dialog_getrgb;
    mirror=new Dialog_mirror;
    movement=new Dialog_movement;
    smooth=new Dialog_smooth;
    three_point=new Dialog_three_point;
    connect(dia,SIGNAL(sendsignal(double)),this,SLOT(change_size(double)));
    connect(getrgb,SIGNAL(sendcoor(int,int)),this,SLOT(getrgbclicked(int,int)));
    connect(three_point,SIGNAL(send_three_coor()),this,SLOT(get_three_point()));
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
void MainWindow::on_actionParallel_movement_triggered(){
    if(image.empty()){
        QMessageBox::information(this,tr("Error"),tr("Can't find image"));
        return;
    }
    movement->setWindowTitle("Fill in the parameters");
    movement->show();
}
void MainWindow::on_actionMirror_flip_triggered(){
    if(image.empty()){
        QMessageBox::information(this,tr("Error"),tr("Can't find image"));
        return;
    }
    mirror->setWindowTitle("Fill in the parameters");
    mirror->show();
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
