QT += core gui widgets
TARGET = TaskScheduler
TEMPLATE = app
CONFIG += c++17

SOURCES += main.cpp \
           mainwindow.cpp

HEADERS += mainwindow.h \
           task.h

FORMS += mainwindow.ui
