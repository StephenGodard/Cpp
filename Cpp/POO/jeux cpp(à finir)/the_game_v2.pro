#-------------------------------------------------
#
# Project created by QtCreator 2017-12-08T19:21:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = the_game_v2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    guerrier.cpp \
    mage.cpp \
    healer.cpp \
    debutant.cpp

HEADERS  += mainwindow.h \
    guerrier.h \
    mage.h \
    healer.h

FORMS    += mainwindow.ui
