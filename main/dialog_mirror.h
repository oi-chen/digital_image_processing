#ifndef DIALOG_MIRROR_H
#define DIALOG_MIRROR_H
#include<all.h>
namespace Ui{
class Dialog_mirror;
}
class Dialog_mirror:public QDialog{
    Q_OBJECT
public:
    explicit Dialog_mirror(QWidget *parent = 0);
    ~Dialog_mirror();
private:
    Ui::Dialog_mirror *ui;
};
#endif//DIALOG_MIRROR_H
