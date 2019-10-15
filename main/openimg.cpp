#include<mainwindow.h>
#include<ui_mainwindow.h>
extern Mat image;
extern QImage img;
extern QString filename;
void MainWindow::OpenImg(){
    filename=QFileDialog::getOpenFileName(this,tr("choose image"),".",tr("image file(*.png *.jpg *.bmp);;all(*)"));//选择指定路径打开图片
    if(filename=="")
        return;//返回，避免未选择文件时opencv发生assertion failed导致程序非正常退出
    img.load(filename);
    image=imread(filename.toLocal8Bit().data());
    label=new QLabel();
    label->setPixmap(QPixmap::fromImage(img));
    label->resize(QSize(img.width(),img.height()));
    ui->scrollArea->setWidget(label);
}
