#ifndef DIALOG_H
#define DIALOG_H
#include<all.h>
namespace Ui{
class Dialog;
}
class Dialog: public QDialog{
    Q_OBJECT
public:
    explicit Dialog(QWidget *parent=0);
    ~Dialog();
private slots:
    void on_doubleSpinBox2_valueChanged(double);
    void on_horizontalSlider2_valueChanged(int);
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
signals:
    void sendsignal(double);
private:
    Ui::Dialog *ui;
};
#endif//DIALOG_H
