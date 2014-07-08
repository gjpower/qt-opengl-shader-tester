#-------------------------------------------------
#
# Project created by QtCreator 2014-07-08T18:40:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = opengl_shader_debugger
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    glviewerwidget.cpp

HEADERS  += mainwindow.h \
    glviewerwidget.h

FORMS    += mainwindow.ui
