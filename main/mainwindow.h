#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QMainWindow>
#include<all.h>
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
    void change_size();
    void save_image();
    void slotDoubleSpinbox_slider();
    void slotslider_DoubleSpinBox();
    void on_actionopen_triggered();
    void on_actionsave_as_triggered();
    void getrgbclicked(Mat,int);
    void fun1();
    void fun2();
    //void getrgbclicked2();
private:
    Ui::MainWindow *ui;
    QLabel *label;
    QLabel *label_2;
};

/*
QT_BEGIN_NAMESPACE

namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class MainWindow : public QMainWindow{
    Q_OBJECT
public:
    MainWindow(QWidget *parent=0);
    ~MainWindow();
private:
    void open();
    QAction *openAction;
};
*/
#endif // MAINWINDOW_H
