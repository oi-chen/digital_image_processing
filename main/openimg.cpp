#include<mainwindow.h>
#include<ui_mainwindow.h>
extern Mat image;
extern QImage img;
extern QString filename;
void MainWindow::OpenImg(){
    filename=QFileDialog::getOpenFileName(this,tr("choose image"),".",tr("image file(*.png *.jpg *.bmp);;all(*)"));//ѡ��ָ��·����ͼƬ
    if(filename=="")
        return;//���أ�����δѡ���ļ�ʱopencv����assertion failed���³���������˳�
    img.load(filename);
    image=imread(filename.toLocal8Bit().data());
    label=new QLabel();
    label->setPixmap(QPixmap::fromImage(img));
    label->resize(QSize(img.width(),img.height()));
    ui->scrollArea->setWidget(label);
}
