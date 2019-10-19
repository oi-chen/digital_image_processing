#ifndef DIALOG_THREE_POINT_H
#define DIALOG_THREE_POINT_H
#include<all.h>
namespace Ui{
class Dialog_three_point;
}
class Dialog_three_point:public QDialog{
    Q_OBJECT
public:
    explicit Dialog_three_point(QWidget *parent = 0);
    ~Dialog_three_point();
signals:
    void send_three_coor();
private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
private:
    Ui::Dialog_three_point *ui;
};
#endif//DIALOG_THREE_POINT_H
