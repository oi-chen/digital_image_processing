#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<all.h>
#include<dialog.h>
#include<dialog_getrgb.h>
QT_BEGIN_NAMESPACE
namespace Ui{
class MainWindow;
}
QT_END_NAMESPACE
class MainWindow:public QMainWindow{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent=0);
    ~MainWindow();
    static QImage save();
private slots:
    void OpenImg();
    void change_size(double);
    void save_image();
    void on_actionopen_triggered();
    void on_actionsave_as_triggered();
    void getrgbclicked(int,int,bool);
    void on_actionSize_triggered();
    void on_actionGet_Original_image_rgb_triggered();
    void on_actionGet_transformed_image_rgb_triggered();
private:
    Ui::MainWindow *ui;
    QLabel *label;
    QLabel *label_2;
    Dialog *dia;
    Dialog_getrgb *getrgb;
};
#endif // MAINWINDOW_H
