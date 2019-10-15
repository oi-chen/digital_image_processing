/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionopen;
    QAction *actionsave_as;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_5;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menufile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(770, 518);
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName(QStringLiteral("actionopen"));
        actionsave_as = new QAction(MainWindow);
        actionsave_as->setObjectName(QStringLiteral("actionsave_as"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(9, 9, 141, 22));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setItalic(true);
        pushButton->setFont(font);
        pushButton->setMouseTracking(false);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 90, 351, 381));
        scrollArea->setMouseTracking(true);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 349, 379));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-1, -1, 351, 381));
        scrollArea->setWidget(scrollAreaWidgetContents);
        doubleSpinBox = new QDoubleSpinBox(centralwidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(100, 40, 58, 23));
        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(400, 90, 351, 381));
        scrollArea_2->setMouseTracking(true);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 349, 379));
        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-1, -1, 351, 381));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(170, 40, 160, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 70, 121, 20));
        pushButton_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 40, 81, 16));
        label_3->setFont(font);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(400, 70, 201, 20));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 10, 80, 20));
        pushButton_4->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(430, 10, 21, 16));
        label_4->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(430, 40, 21, 16));
        label_5->setFont(font);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(450, 10, 113, 20));
        lineEdit->setFont(font);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(450, 40, 113, 20));
        lineEdit_2->setFont(font);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(570, 40, 80, 20));
        pushButton_5->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 770, 19));
        menubar->setFont(font);
        menufile = new QMenu(menubar);
        menufile->setObjectName(QStringLiteral("menufile"));
        menufile->setFont(font);
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menufile->menuAction());
        menufile->addAction(actionopen);
        menufile->addAction(actionsave_as);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionopen->setText(QApplication::translate("MainWindow", "open", Q_NULLPTR));
        actionopen->setShortcut(QApplication::translate("MainWindow", "O", Q_NULLPTR));
        actionsave_as->setText(QApplication::translate("MainWindow", "save as", Q_NULLPTR));
        actionsave_as->setShortcut(QApplication::translate("MainWindow", "S", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "openimage(ctrl+o)", Q_NULLPTR));
        pushButton->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "transform(enter)", Q_NULLPTR));
        pushButton_2->setShortcut(QApplication::translate("MainWindow", "Return", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Zoom ratio", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "save changed image(ctrl+s)", Q_NULLPTR));
        pushButton_3->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "getrgb1", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "x=", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "y=", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "getrgb2", Q_NULLPTR));
        menufile->setTitle(QApplication::translate("MainWindow", "file", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
