#ifndef DIALOG_ANG_AND_SCA_H
#define DIALOG_ANG_AND_SCA_H
#include<all.h>
namespace Ui{
class Dialog_ang_and_sca;
}
class Dialog_ang_and_sca:public QDialog{
    Q_OBJECT
public:
    explicit Dialog_ang_and_sca(QWidget *parent=0);
    ~Dialog_ang_and_sca();
signals:
    void send_parameter(double,double);
private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
private:
    Ui::Dialog_ang_and_sca *ui;
};
#endif//DIALOG_ANG_AND_SCA_H
