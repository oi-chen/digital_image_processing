#include<mainwindow.h>
#include<ui_mainwindow.h>
void MainWindow::channel_judge(Mat imagejud){
    int channel=imagejud.channels();//依据通道数不同选择转换为QImage方式
    if(channel==3){
        cv::cvtColor(imagejud,imagejud,COLOR_BGR2RGB);//调整通道次序
        img2=QImage(static_cast<uchar*>(imagejud.data),imagejud.cols,imagejud.rows,QImage::Format_RGB888);
    }
    else if(channel==4){
        //argb
        img2=QImage(static_cast<uchar*>(imagejud.data),imagejud.cols,imagejud.rows,QImage::Format_ARGB32);
    }
    else{
        //单通道，灰度图
        img2=QImage(imagejud.cols,imagejud.rows,QImage::Format_Indexed8);
        uchar* matdata=imagejud.data;
        for(int row=0;row<imagejud.rows;row++){
            uchar* rowdata=img2.scanLine( row );
            memcpy(rowdata,matdata,image.cols);
            matdata+=image.cols;
        }
    }
}
