#include<mainwindow.h>
extern QImage img2;
void MainWindow::save_image(){
    if((!img2.width())&&(!img2.height())){
        QMessageBox::information(this,tr("Error"),tr("No image can be saved"));
        return;//δ�任ʱ��ͼ�ɴ�
    }
    QString filename2=QFileDialog::getSaveFileName(this,tr("save image"),".",tr("image file(*.png);;image file(*.bmp);;image file(*.jpg);;all(*)")); //ѡ��·��
    if(filename2=="")
        return;
    img2.save(filename2);
}
