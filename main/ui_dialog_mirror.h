/********************************************************************************
** Form generated from reading UI file 'dialog_mirror.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_MIRROR_H
#define UI_DIALOG_MIRROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Dialog_mirror
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog_mirror)
    {
        if (Dialog_mirror->objectName().isEmpty())
            Dialog_mirror->setObjectName(QStringLiteral("Dialog_mirror"));
        Dialog_mirror->resize(400, 300);
        buttonBox = new QDialogButtonBox(Dialog_mirror);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Dialog_mirror);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_mirror, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_mirror, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_mirror);
    } // setupUi

    void retranslateUi(QDialog *Dialog_mirror)
    {
        Dialog_mirror->setWindowTitle(QApplication::translate("Dialog_mirror", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_mirror: public Ui_Dialog_mirror {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_MIRROR_H
