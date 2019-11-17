#include<mainwindow.h>
#include<ui_mainwindow.h>
extern int templet[9];
extern double factor;
extern Mat image,image_changed;
void MainWindow::image_smooth(){
    Mat M=(Mat_<double>(3,3)<<templet[0],templet[1],templet[2],templet[3],templet[4],templet[5],templet[6],templet[7],templet[8])*factor;//模板
    filter2D(image,image_changed,-1,M);//卷积运算
    imshow("Image smooth",image_changed);
    remind_save();
}
