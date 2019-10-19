QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    change_size.cpp \
    getrgb.cpp \
    main.cpp \
    mainwindow.cpp \
    openimg.cpp \
    save_image.cpp \
    dialog.cpp \
    dialog_getrgb.cpp \
    get_histogram.cpp \
    dialog_three_point.cpp \
    dialog_ang_and_sca.cpp \
    dialog_movement.cpp \
    dialog_mirror.cpp \
    dialog_smooth.cpp \
    affine_transformation.cpp

HEADERS += \
    all.h \
    mainwindow.h \
    dialog.h \
    dialog_getrgb.h \
    dialog_three_point.h \
    dialog_ang_and_sca.h \
    dialog_movement.h \
    dialog_mirror.h \
    dialog_smooth.h

FORMS += \
    mainwindow.ui \
    dialog.ui \
    dialog_getrgb.ui \
    dialog_three_point.ui \
    dialog_ang_and_sca.ui \
    dialog_movement.ui \
    dialog_mirror.ui \
    dialog_smooth.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# for_opencv
INCLUDEPATH+= /usr/local/include\
              /usr/local/include/opencv4\
              /usr/local/include/opencv4/opencv2
LIBS += -L /usr/local/lib/lib*

#appͼ��
RC_ICONS = icon.ico

# ��ѧ����
QMAKE_CXXFLAGS += -std=c++0x
TARGET = main
TEMPLATE = app

RESOURCES += \
    main.qrc

#??ui_xxx.h????????????#include<ui_xxx.h>???????????????????ui_xxx.h
UI_DIR=.
