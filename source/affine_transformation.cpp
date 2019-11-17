#include<mainwindow.h>
#include<ui_mainwindow.h>
extern double three_coor[6];
extern Mat image,image_changed;
void MainWindow::get_three_point(){//三点法
    Point2f origin_points[3];//原图三点
    Point2f changed_points[3];//目标图三点
    origin_points[0]=Point2f(0,0);//原图三个点位置
    origin_points[1]=Point2f(0,image.rows);
    origin_points[2]=Point2f(image.cols,0);
    changed_points[0]=Point2f(image.cols*three_coor[0],image.rows*three_coor[1]);//映射后三个点位
    changed_points[1]=Point2f(image.cols*three_coor[2],image.rows*three_coor[3]);
    changed_points[2]=Point2f(image.cols*three_coor[4],image.rows*three_coor[5]);
    Mat M=getAffineTransform(origin_points,changed_points);//由三个点位计算变换矩阵
    warpAffine(image,image_changed,M,image.size());//仿射变换
    imshow("Three-point method",image_changed);
    remind_save();
}
void MainWindow::get_ang_and_sca(double zoom,double ang){//指定角度和比例
    Point2f center(image.cols/2,image.rows/2);//旋转中心
    Mat M=getRotationMatrix2D(center,ang,zoom);//计算变换矩阵
    warpAffine(image,image_changed,M,Size(image.cols,image.rows),INTER_LINEAR);//仿射变换
    imshow("Specify angle and scale",image_changed);
    remind_save();
}
void MainWindow::mirror_flip(){//镜像变换
    Point2f origin_points[3];
    Point2f changed_points[3];
    origin_points[0]=Point2i(0,0);
    origin_points[1]=Point2i(0,image.rows);
    origin_points[2]=Point2i(image.cols,0);
    changed_points[0]=Point2i(image.cols,0);//镜像变换后三点位置
    changed_points[1]=Point2i(image.cols,image.rows);
    changed_points[2]=Point2i(0,0);
    Mat M=getAffineTransform(origin_points,changed_points);//计算变换矩阵
    warpAffine(image,image_changed,M,Size(image.cols,image.rows));//仿射变换
    imshow("Mirror flip",image_changed);
    remind_save();
}
