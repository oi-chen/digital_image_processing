#include<mainwindow.h>
#include<ui_mainwindow.h>
extern Mat image,image_changed;
void MainWindow::getrgbclicked(int x,int y){
    Mat imgxy=image;
    if((x>=(imgxy.cols))||(y>=(imgxy.rows))){
        QMessageBox::information(this,tr("Error"),tr("Numerical overflow"));//避免给出坐标超出图像范围
        return;
    }
    Scalar color=imgxy.at<Vec3b>(x,y);//提取指定坐标颜色
    string str="R:"+to_string((int)color(2))+" G:"+to_string((int)color(1))+" B:"+to_string((int)color(0));
    QString rgb=QString::fromStdString(str);
    QMessageBox::information(this,tr("Pixel Information"),rgb);
    return;
}
