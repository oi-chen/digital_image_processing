#include<mainwindow.h>
#include<ui_mainwindow.h>
extern double a,b,c,d;
extern Mat image,image_changed;
void MainWindow::gray_line_trans(){
    image_changed=image.clone();
    int L=255;
    for(int i=0;i<image.rows;i++)
        for(int j=0;j<image.cols;j++)
            for(int k=0;k<3;k++){
                unsigned char t=image_changed.at<Vec3b>(i,j)[k];
                if(t<a)
                    t=(int)(c/a)*t;
                else if(t<b)
                    t=(int)(((d-c)/(b-a))*((double)t-a*L)+c*L);
                else
                    t=(int)((L*(1-d))/(L*(1-b))*((double)t-b*L)+d*L);
                image_changed.at<Vec3b>(i,j)[k]=t;
            }
    imshow("Gray scale linear transformation",image_changed);
    remind_save();
}
