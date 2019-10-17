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
    dia=new Dialog;
    getrgb=new Dialog_getrgb;
    connect(dia,SIGNAL(sendsignal(double)),this,SLOT(change_size(double)));
    connect(getrgb,SIGNAL(sendcoor(int,int)),this,SLOT(getrgbclicked(int,int)));
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
void MainWindow::on_actionGet_Original_image_rgb_triggered(){
    if(image.empty()){
        QMessageBox::information(this,tr("Error"),tr("Can't find image"));
        return;
    }
    flag=false;
    getrgb->setWindowTitle("get original_image rgb");
    getrgb->show();
}
void MainWindow::on_actionImage_left_triggered(){
    get_historgam(false);
}
void MainWindow::on_actionImage_left_2_triggered(){
    get_historgam(true);
}
MainWindow::~MainWindow(){
    delete ui;
}
