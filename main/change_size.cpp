#include<mainwindow.h>
#include<ui_mainwindow.h>
extern Mat image,image_changed;
extern QImage img,img2;
extern QString filename;
void MainWindow::change_size(double size_value){
    if((!img.width())&&(!img.height())){
        QMessageBox::information(this,tr("Error"),tr("No image can be transformed"));
        return;
    }
    cv::resize(image,image_changed,Size(image.cols*size_value,image.rows*size_value),0,0,INTER_LINEAR);
    int channel=image.channels();//根据图像类型选择输出方式
    if(channel==3){
        cvtColor(image_changed,image_changed,COLOR_BGR2RGB);//opencv中mat类型颜色数据存储顺序为bgr
        img2=QImage(static_cast<uchar*>(image_changed.data),image_changed.cols,image_changed.rows,QImage::Format_RGB888);
    }
    else if(channel==4){//argb
        img2=QImage(static_cast<uchar*>(image_changed.data),image_changed.cols,image_changed.rows,QImage::Format_ARGB32);
    }
    else{//灰度图像
        img2=QImage(image_changed.cols,image_changed.rows,QImage::Format_Indexed8);
        uchar* matdata=image_changed.data;
        for(int row=0;row<image_changed.rows;row++){
            uchar* rowdata=img2.scanLine(row);
            memcpy(rowdata,matdata,image.cols);
            matdata+=image.cols;
        }
    }
    label_2=new QLabel();
    label_2->setPixmap(QPixmap::fromImage(img2));
    label_2->resize(QSize(img2.width(),img2.height()));
    ui->scrollArea_2->setWidget(label_2);
}
