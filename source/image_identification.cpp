#include<mainwindow.h>
void MainWindow::image_identify_demo(){
    Mat demo[3]={imread("./image_demo/demo1.jpg"),imread("./image_demo/demo2.jpg"),imread("./image_demo/demo3.jpg")};
    /*
    for(int i=0;i<3;i++){
        Mat gray,edge,bin,demo_dst;
        cvtColor(demo[i],gray,COLOR_BGR2GRAY);
        blur(gray,edge,Size(3,3));
        //Canny(edge,edge,50,150,3);
        threshold(edge,bin,90,255,THRESH_BINARY_INV);
        demo[i].copyTo(demo_dst,edge);
    }
    */
    for(int i=0;i<3;i++){
        imshow("demo"+to_string(i+1),demo[i]);
        int button=QMessageBox::question(this,tr("save file"),QString::fromStdString("Do you need to save demo"+to_string(i+1)+'?'),QMessageBox::Yes|QMessageBox::No);//提示是否保存生成图像
        if(button==QMessageBox::Yes){
            QMessageBox::information(this,tr("Warning"),tr("If you use this app in a linux system, you need to actively add the suffix name when entering the file name, otherwise the program will crash."));
            QString path=QFileDialog::getSaveFileName(this,tr("save image"),".",tr("image file(*.png);;image file(*.jpg);;image file(*.bmp);;all(*)")); //选择路径
            if(path=="")
                continue;
            imwrite(path.toStdString(),demo[i]);
        }
    }
    return;
}
