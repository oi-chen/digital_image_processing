/********************************************************************************
** Form generated from reading UI file 'dialog_movement.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_MOVEMENT_H
#define UI_DIALOG_MOVEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Dialog_movement
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog_movement)
    {
        if (Dialog_movement->objectName().isEmpty())
            Dialog_movement->setObjectName(QStringLiteral("Dialog_movement"));
        Dialog_movement->resize(400, 300);
        buttonBox = new QDialogButtonBox(Dialog_movement);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Dialog_movement);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_movement, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_movement, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_movement);
    } // setupUi

    void retranslateUi(QDialog *Dialog_movement)
    {
        Dialog_movement->setWindowTitle(QApplication::translate("Dialog_movement", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_movement: public Ui_Dialog_movement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_MOVEMENT_H
