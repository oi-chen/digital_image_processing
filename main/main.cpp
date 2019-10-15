#include<mainwindow.h>
int main(int argc,char *argv[]){
    QApplication app(argc,argv);
    MainWindow win;
    win.setWindowTitle("Image_Processing_Software_V1.0.1");
    win.show();
    return app.exec();
}
