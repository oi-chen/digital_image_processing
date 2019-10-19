#include<mainwindow.h>
#include<ui_mainwindow.h>
extern Mat image,image_changed;
void MainWindow::get_historgam(bool flag){
    if(image.empty()){
        QMessageBox::information(this,tr("Error"),tr("Can't find image"));
        return;
    }
    if(!flag){//灰度直方图
        Mat hist,grayImage=image;//初始化
        int channels[]={0};
        const int histSize[]={256};
        float range[]={0,256};
        const float* ranges[]={range};
        cv::calcHist(&grayImage,1,channels,Mat(),hist,1,histSize,ranges,true,false);
        double maxValue=0;//找直方图统计数max，作为直方图纵坐标
        minMaxLoc(hist,0,&maxValue,0,0);
        int rows=cvRound(maxValue);
        Mat histImage=Mat::zeros(rows,256,CV_8UC1);//黑底，绘制白色
        for(int i=0;i<=255;i++){
            int temp=(int)(hist.at<float>(i,0));
            if(temp)//若图上有此灰度值，则此列对应统计个数的位置像素设为白色
                histImage.col(i).rowRange(Range(rows-temp,rows))=255;//图像(0,0)在左上角而直方图(0,0)在左下角
        }
        cv::resize(histImage,histImage,Size(1024,768));//将生成的直方图变换到合适的大小
        image_changed=histImage;
        imshow("historgam",histImage);
    }
    else{//rgb直方图
        Mat hist_b,hist_g,hist_r,srcImage=image;//初始化
        vector<Mat>rgb_channel;
        split(srcImage,rgb_channel);
        int bins=256,histsize[]={bins};
        float range[]={0,256};
        const float* histRange={range};
        calcHist(&rgb_channel[0],1,0,Mat(),hist_b,1,histsize,&histRange,true,false);//计算rgb直方图
        calcHist(&rgb_channel[1],1,0,Mat(),hist_g,1,histsize,&histRange,true,false);
        calcHist(&rgb_channel[2],1,0,Mat(),hist_r,1,histsize,&histRange,true,false);
        int hist_h=360,hist_w=bins*3,bin_w=cvRound((double)hist_w/bins);
        Mat histImage(hist_h, hist_w, CV_8UC3, Scalar(0, 0, 0));//创建黑底图像
        normalize(hist_b,hist_b,0,histImage.rows,NORM_MINMAX,-1,Mat());//直方图归一化
        normalize(hist_g,hist_g,0,histImage.rows,NORM_MINMAX,-1,Mat());
        normalize(hist_r,hist_r,0,histImage.rows,NORM_MINMAX,-1,Mat());
        for(int i=1;i<bins;i++){//绘制rgb直方图
            line(histImage,Point(bin_w*(i-1),hist_h-cvRound(hist_b.at<float>(i-1))),Point(bin_w*(i),hist_h-cvRound(hist_b.at<float>(i))),Scalar(255,0,0),2,8,0);
            line(histImage,Point(bin_w*(i-1),hist_h-cvRound(hist_g.at<float>(i-1))),Point(bin_w*(i),hist_h-cvRound(hist_g.at<float>(i))),Scalar(0,255,0),2,8,0);
            line(histImage,Point(bin_w*(i-1),hist_h-cvRound(hist_r.at<float>(i-1))),Point(bin_w*(i),hist_h-cvRound(hist_r.at<float>(i))),Scalar(0,0,255),2,8,0);
        }
        cv::resize(histImage,histImage,Size(1024,768));//将生成的直方图变换到合适的大小
        image_changed=histImage;
        imshow("historgam",histImage);
    }
    int button=QMessageBox::question(this,tr("save file"),QString(tr("Do you need to save this image?")),QMessageBox::Yes|QMessageBox::No);//提示是否保存生成直方图
    if(button==QMessageBox::Yes)
        save_image();
}
