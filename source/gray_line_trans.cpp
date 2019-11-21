#include<mainwindow.h>
extern double a,b,c,d;
extern Mat image,image_changed;
void MainWindow::gray_line_trans(){
    image_changed=image.clone();
    int L=255;
    unsigned char list[256];
    for(int i=0;i<=255;i++){
        if(i<a)
            list[i]=(int)(c/a)*i;
        else if(i<b)
            list[i]=(int)(((d-c)/(b-a))*((double)i-a*L)+c*L);
        else
            list[i]=(int)((L*(1-d))/(L*(1-b))*((double)i-b*L)+d*L);
    }
    for(int i=0;i<image.rows;i++)
        for(int j=0;j<image.cols;j++)
            for(int k=0;k<3;k++)
                image_changed.at<Vec3b>(i,j)[k]=list[image_changed.at<Vec3b>(i,j)[k]];
    imshow("Gray scale linear transformation",image_changed);
    remind_save();
    return;
}