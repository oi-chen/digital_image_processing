#ifndef DIALOG_getrgb_H
#define DIALOG_getrgb_H
#include<all.h>
namespace Ui{
class Dialog_getrgb;
}
class Dialog_getrgb:public QDialog{
    Q_OBJECT
public:
    explicit Dialog_getrgb(QWidget *parent=0);
    ~Dialog_getrgb();
signals:
    void sendcoor(int,int);
private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
private:
    Ui::Dialog_getrgb *ui;
};
#endif//DIALOG_getrgb_H
