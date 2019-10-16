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
    connect(getrgb,SIGNAL(sendcoor(int,int,bool)),this,SLOT(getrgbclicked(int,int,bool)));
}
void MainWindow::on_actionopen_triggered(){
    OpenImg();
}
void MainWindow::on_actionsave_as_triggered(){
    save_image();
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
void MainWindow::on_actionGet_transformed_image_rgb_triggered(){
    if(image_changed.empty()){
        QMessageBox::information(this,tr("Error"),tr("Can't find image"));
        return;
    }
    flag=true;
    getrgb->setWindowTitle("get transformed_image rgb");
    getrgb->show();
}
MainWindow::~MainWindow(){
    delete ui;
}
