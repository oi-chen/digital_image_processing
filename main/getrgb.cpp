#include<mainwindow.h>
#include<ui_mainwindow.h>
extern Mat image,image_changed;
void MainWindow::getrgbclicked(int x,int y,bool flagnum){
    Mat imgxy=flagnum?image_changed:image;
    if((x>=(imgxy.cols))||(y>=(imgxy.rows))){
        QMessageBox::information(this,tr("Error"),tr("Numerical overflow"));
        return;
    }
    Scalar color=imgxy.at<Vec3b>(x,y);
    string str;
    if(!flagnum)
        str="R:"+to_string((int)color(2))+" G:"+to_string((int)color(1))+" B:"+to_string((int)color(0));
    else
        str="R:"+to_string((int)color(0))+" G:"+to_string((int)color(1))+" B:"+to_string((int)color(2));
    QString rgb=QString::fromStdString(str);
    QMessageBox::information(this,tr("Pixel Information"),rgb);
}
