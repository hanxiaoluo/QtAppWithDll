QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = lib #表示生成的是库
CONFIG += widget-buildlib #关于库的配置信息
include(libwidget.pri)
TARGET =  $$LIBWIDGET_NAME   #表示生成的库的名字
DESTDIR = $$PROJECT_LIBDIR #指定编译后库的位置

#平台相关性处理
win32{
    DLLDESTDIR = $$PROJECT_BINDIR
    QMAKE_DISTCLEAN += $$PROJECT_BINDIR/$${LIBWIDGET_NAME}.dll
}
CONFIG += debug_and_release build_all

DEFINES += LIBWIDGET_BUILD

