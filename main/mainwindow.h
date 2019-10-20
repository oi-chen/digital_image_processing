#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<all.h>
#include<dialog.h>
#include<dialog_ang_and_sca.h>
#include<dialog_getrgb.h>
#include<dialog_smooth.h>
#include<dialog_three_point.h>
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
protected:
    void closeEvent(QCloseEvent *event);
private slots:
    void OpenImg();
    void change_size(double);
    void save_image();
    void on_actionopen_triggered();
    void getrgbclicked(int,int);
    void on_actionSize_triggered();
    void on_actionGet_Original_image_rgb_triggered();
    void get_historgam(bool);
    void on_action_grayscale_distribution_histogram_triggered();
    void on_actionRgb_distribution_histogram_triggered();
    void on_actionThree_point_method_triggered();
    void on_actionMirror_flip_triggered();
    void on_actionSpecify_angle_and_scale_triggered();
    void on_actionImage_smoothing_triggered();
    void get_three_point();
    void get_ang_and_sca(double,double);
    void image_smooth();
private:
    void remind_save();
    void mirror_flip();
    Ui::MainWindow *ui;
    QLabel *label;
    Dialog *dia;
    Dialog_ang_and_sca *ang;
    Dialog_getrgb *getrgb;
    Dialog_smooth *smooth;
    Dialog_three_point *three_point;
};
#endif//MAINWINDOW_H
