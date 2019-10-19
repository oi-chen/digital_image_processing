#include<mainwindow.h>
#include<ui_mainwindow.h>
extern double three_coor[6];
extern Mat image,image_changed;
void MainWindow::get_three_point(){//三点法
    Mat M;
    Point2f origin_points[3];//原图三点
    Point2f changed_points[3];//目标图三点
    origin_points[0]=Point2f(0,0);//原图三个点位置
    origin_points[1]=Point2f(0,image.rows);
    origin_points[2]=Point2f(image.cols,0);
    changed_points[0]=Point2f(image.cols*three_coor[0],image.rows*three_coor[1]);//映射后三个点位
    changed_points[1]=Point2f(image.cols*three_coor[2],image.rows*three_coor[3]);
    changed_points[2]=Point2f(image.cols*three_coor[4],image.rows*three_coor[5]);
    M=getAffineTransform(origin_points,changed_points);//由三个点位计算变换矩阵
    warpAffine(image,image_changed,M,image.size());//仿射变换
    imshow("Three-point method",image_changed);
    int button=QMessageBox::question(this,tr("save file"),QString(tr("Do you need to save this image?")),QMessageBox::Yes|QMessageBox::No);//提示是否保存生成图像
    if(button==QMessageBox::Yes)
        save_image();
}
