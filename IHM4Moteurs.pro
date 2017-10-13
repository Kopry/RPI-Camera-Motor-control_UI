#-------------------------------------------------
#
# Project created by QtCreator 2016-11-15T13:34:40
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IHM4Moteurs
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tcpclient.cpp

HEADERS  += mainwindow.h \
    tcpclient.h

FORMS    += mainwindow.ui

LIBS       += -lVLCQtCore -lVLCQtWidgets

RESOURCES += \
    assets.qrc

DISTFILES += ihm4moteur.qmodel
