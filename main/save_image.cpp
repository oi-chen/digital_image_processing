#include<mainwindow.h>
extern QImage img2;
void MainWindow::save_image(){
    if((!img2.width())&&(!img2.height())){
        QMessageBox::information(this,tr("Error"),tr("No image can be saved"));
        return;//未变换时无图可存
    }
    QString filename2=QFileDialog::getSaveFileName(this,tr("save image"),".",tr("image file(*.png);;image file(*.bmp);;image file(*.jpg);;all(*)")); //选择路径
    if(filename2=="")
        return;
    img2.save(filename2);
}
