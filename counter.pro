#-------------------------------------------------
#
# Project created by QtCreator 2017-11-27T10:56:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = counter
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui

RESOURCES += \
    asis.qrc
QMAKE_CXXFLAGS +=-std=gnu++14