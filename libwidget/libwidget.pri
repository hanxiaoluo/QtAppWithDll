INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD
TEMPLATE += fakelib
LIBWIDGET_NAME = $$qtLibraryTarget(WOCAOwidget)
TEMPLATE -= fakelib
include(../common.pri)
!widget-buildlib{
    LIBS += -L$$PROJECT_LIBDIR -l$$LIBWIDGET_NAME #-L指定库目录，-l指定库名
}else{
    SOURCES += mywidget.cpp
    HEADERS += mywidget.h
}

