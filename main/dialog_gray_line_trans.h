#ifndef DIALOG_GRAY_LINE_TRANS_H
#define DIALOG_GRAY_LINE_TRANS_H
#include<all.h>
namespace Ui{
class Dialog_gray_line_trans;
}
class Dialog_gray_line_trans:public QDialog{
    Q_OBJECT
public:
    explicit Dialog_gray_line_trans(QWidget *parent=0);
    ~Dialog_gray_line_trans();
signals:
    void send_parameter();
private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
private:
    Ui::Dialog_gray_line_trans *ui;
};
#endif // DIALOG_GRAY_LINE_TRANS_H
