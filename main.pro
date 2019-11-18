QT+=core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG+=c++11
# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES+=QT_DEPRECATED_WARNINGS
# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES+=QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
SOURCES+=\
    source/change_size.cpp\
    source/getrgb.cpp\
    source/main.cpp\
    source/mainwindow.cpp\
    source/openimg.cpp\
    source/save_image.cpp\
    source/dialog.cpp\
    source/dialog_getrgb.cpp\
    source/get_histogram.cpp\
    source/dialog_three_point.cpp\
    source/dialog_ang_and_sca.cpp\
    source/dialog_smooth.cpp\
    source/affine_transformation.cpp\
    source/image_enhancement.cpp\
    source/dialog_gray_line_trans.cpp\
    source/gray_line_trans.cpp\
    source/image_identification.cpp
HEADERS+=\
    header/all.h\
    header/mainwindow.h\
    header/dialog.h\
    header/dialog_getrgb.h\
    header/dialog_three_point.h\
    header/dialog_ang_and_sca.h\
    header/dialog_smooth.h\
    header/dialog_gray_line_trans.h
INCLUDEPATH+=./header
FORMS+=\
    form/mainwindow.ui\
    form/dialog.ui\
    form/dialog_getrgb.ui\
    form/dialog_three_point.ui\
    form/dialog_ang_and_sca.ui\
    form/dialog_smooth.ui\
    form/dialog_gray_line_trans.ui
# Default rules for deployment.
qnx: target.path=/tmp/$${TARGET}/bin
else: unix:!android: target.path=/opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS+=target
# for_opencv
INCLUDEPATH+=/usr/local/include\
            /usr/local/include/opencv4\
            /usr/local/include/opencv4/opencv2
LIBS+=-L /usr/local/lib/lib*
# app图标
RC_ICONS=icon/icon.ico
# 初学配置
QMAKE_CXXFLAGS+=-std=c++0x
TARGET=main
TEMPLATE=app
RESOURCES+=\
    main.qrc
# 设置各种中间文件及可执行文件生成目录
DESTDIR=build
OBJECTS_DIR=build/obj
MOC_DIR=build/moc
RCC_DIR=build/rcc
UI_DIR=build/ui
