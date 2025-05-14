/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *listEnemies;
    QGraphicsView *graphicsView;
    QWidget *controlPanel;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAdd;
    QPushButton *btnRemove;
    QPushButton *btnSave;
    QPushButton *btnLoad;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        listEnemies = new QListWidget(centralWidget);
        listEnemies->setObjectName("listEnemies");

        horizontalLayout->addWidget(listEnemies);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName("graphicsView");

        horizontalLayout->addWidget(graphicsView);

        controlPanel = new QWidget(centralWidget);
        controlPanel->setObjectName("controlPanel");
        verticalLayout = new QVBoxLayout(controlPanel);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QPushButton(controlPanel);
        btnAdd->setObjectName("btnAdd");

        verticalLayout->addWidget(btnAdd);

        btnRemove = new QPushButton(controlPanel);
        btnRemove->setObjectName("btnRemove");

        verticalLayout->addWidget(btnRemove);

        btnSave = new QPushButton(controlPanel);
        btnSave->setObjectName("btnSave");

        verticalLayout->addWidget(btnSave);

        btnLoad = new QPushButton(controlPanel);
        btnLoad->setObjectName("btnLoad");

        verticalLayout->addWidget(btnLoad);


        horizontalLayout->addWidget(controlPanel);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Enemy Editor", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "Add Enemy", nullptr));
        btnRemove->setText(QCoreApplication::translate("MainWindow", "Remove Enemy", nullptr));
        btnSave->setText(QCoreApplication::translate("MainWindow", "Save to JSON", nullptr));
        btnLoad->setText(QCoreApplication::translate("MainWindow", "Load from JSON", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
