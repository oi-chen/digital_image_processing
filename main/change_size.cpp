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
    cv::resize(image,image_changed,Size(image.cols*size_value,image.rows*size_value),0,0,INTER_LINEAR);
    if(image.channels()==3)
        cvtColor(image_changed,image_changed,COLOR_BGR2RGB);//opencv中mat类型颜色数据存储顺序为bgr
    imshow("changed image",image_changed);
    int button=QMessageBox::question(this,tr("save file"),QString(tr("Do you need to save this image?")),QMessageBox::Yes|QMessageBox::No);
    if(button==QMessageBox::Yes)
        save_image();
}
