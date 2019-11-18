#include<mainwindow.h>
#include<ui_mainwindow.h>
extern Mat image;
extern QImage img;
extern QString filename;
void MainWindow::OpenImg(){
    filename=QFileDialog::getOpenFileName(this,tr("choose image"),".",tr("image file(*.png *.jpg *.bmp);;all(*)"));//选择指定路径打开图片
    if(filename=="")
        return;//返回，避免未选择文件时opencv发生assertion failed导致程序非正常退出
    image=imread(filename.toLocal8Bit().data());
    int channel=image.channels();
    //依据通道数不同，改变不同的转换方式
    if(channel==3){
        //调整通道次序
        cv::cvtColor(image,image,COLOR_BGR2RGB);
        img=QImage(static_cast<uchar*>(image.data),image.cols,image.rows,QImage::Format_RGB888);
    }else if(channel==4){
        //argb
        img=QImage(static_cast<uchar*>(image.data),image.cols,image.rows,QImage::Format_ARGB32);
    }else{
        //单通道，灰度图
        img=QImage(image.cols,image.rows,QImage::Format_Indexed8);
        uchar*imagedata=image.data;
        for(int row=0;row<image.rows;++row){
            uchar*rowdata=img.scanLine(row);
            memcpy(rowdata,imagedata,image.cols);
            imagedata+=image.cols;
        }
    }
    label=new QLabel();
    label->setPixmap(QPixmap::fromImage(img));
    label->resize(QSize(img.width(),img.height()));
    ui->scrollArea->setWidget(label);
    cv::cvtColor(image,image,COLOR_RGB2BGR);
    return;
}
