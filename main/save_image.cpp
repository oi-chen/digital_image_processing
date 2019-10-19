#include<mainwindow.h>
extern Mat image,image_changed;
void MainWindow::save_image(){
    QMessageBox::information(this,tr("Warning"),tr("If you use this app in a linux system,you need to actively add the file suffix, otherwise the program will crash."));
    QString filename2=QFileDialog::getSaveFileName(this,tr("save image"),".",tr("image file(*.png);;image file(*.bmp);;image file(*.jpg);;all(*)")); //选择路径
    qDebug()<<filename2;
    if(filename2=="")
        return;
    imwrite(filename2.toStdString(),image_changed);
}
