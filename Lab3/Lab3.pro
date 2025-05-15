QT += core gui widgets
CONFIG += c++17
TARGET = ClickerGame
TEMPLATE = app

SOURCES += main.cpp \
           mainwindow.cpp \
           bignumber.cpp \
           player.cpp \
           enemy.cpp \
           enemytemplate.cpp

HEADERS += mainwindow.h \
           bignumber.h \
           player.h \
           enemy.h \
           enemytemplate.h

FORMS += mainwindow.ui
