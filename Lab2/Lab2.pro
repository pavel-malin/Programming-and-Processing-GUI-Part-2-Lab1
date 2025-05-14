QT += core gui widgets
CONFIG += c++17

TARGET = EnemyEditor
TEMPLATE = app

SOURCES += main.cpp \
           mainwindow.cpp \
           enemytemplate.cpp \
           enemytemplatelist.cpp \
           icon.cpp \
           iconlist.cpp

HEADERS += mainwindow.h \
           enemytemplate.h \
           enemytemplatelist.h \
           icon.h \
           iconlist.h

FORMS += mainwindow.ui
