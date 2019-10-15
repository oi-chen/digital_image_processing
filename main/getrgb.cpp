#include<mainwindow.h>
#include<ui_mainwindow.h>
extern Mat image,image_changed;
extern QImage img,img2;
void MainWindow::fun1(){
    getrgbclicked(image,1);
}
void MainWindow::fun2(){
    getrgbclicked(image_changed,2);
}
void MainWindow::getrgbclicked(Mat imgxy,int num){
    if(imgxy.empty()){
        QMessageBox::information(this,tr("Error"),tr("Can't find image"));
        return;
    }
    QString coorx=ui->lineEdit->text(),coory=ui->lineEdit_2->text();
    int x=coorx.toInt(),y=coory.toInt();
    if((x>=(imgxy.cols))||(y>=(imgxy.rows))){
        QMessageBox::information(this,tr("Error"),tr("Numerical overflow"));
        return;
    }
    Scalar color=imgxy.at<Vec3b>(x,y);
    string str;
    if(num==1)
        str="R:"+to_string((int)color(2))+" G:"+to_string((int)color(1))+" B:"+to_string((int)color(0));
    else
        str="R:"+to_string((int)color(0))+" G:"+to_string((int)color(1))+" B:"+to_string((int)color(2));
    QString rgb=QString::fromStdString(str);
    QMessageBox::information(this,tr("Pixel Information"),rgb);
}
