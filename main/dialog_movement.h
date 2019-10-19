#ifndef DIALOG_MOVEMENT_H
#define DIALOG_MOVEMENT_H
#include<all.h>
namespace Ui{
class Dialog_movement;
}
class Dialog_movement:public QDialog{
    Q_OBJECT
public:
    explicit Dialog_movement(QWidget *parent = 0);
    ~Dialog_movement();
private:
    Ui::Dialog_movement *ui;
};
#endif//DIALOG_MOVEMENT_H
