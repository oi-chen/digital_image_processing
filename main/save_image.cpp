#include<mainwindow.h>
extern Mat image,image_changed;
void MainWindow::save_image(){
    QString filename2=QFileDialog::getSaveFileName(this,tr("save image"),".",tr("image file(*.png);;image file(*.bmp);;image file(*.jpg);;all(*)")); //Ñ¡ÔñÂ·¾¶
    if(filename2=="")
        return;
    imwrite(filename2.toStdString(),image_changed);
}
