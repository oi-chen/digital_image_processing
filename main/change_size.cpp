#include<mainwindow.h>
#include<ui_mainwindow.h>
extern Mat image,image_changed;
extern QImage img;
extern QString filename;
void MainWindow::change_size(double size_value){
    if((!img.width())&&(!img.height())){
        QMessageBox::information(this,tr("Error"),tr("No image can be transformed"));
        return;
    }
    cv::resize(image,image_changed,Size(image.cols*size_value,image.rows*size_value),0,0,INTER_LINEAR);//双线性插值，为resize函数默认参数
    imshow("changed image",image_changed);
    int button=QMessageBox::question(this,tr("save file"),QString(tr("Do you need to save this image?")),QMessageBox::Yes|QMessageBox::No);//提示是否保存变换后图片
    if(button==QMessageBox::Yes)
        save_image();
}
