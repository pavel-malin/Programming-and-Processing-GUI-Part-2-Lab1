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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lblEnemy;
    QLabel *lblHealth;
    QPushButton *btnAttack;
    QLabel *lblGold;
    QPushButton *btnUpgrade;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setObjectName("verticalLayout");
        lblEnemy = new QLabel(centralWidget);
        lblEnemy->setObjectName("lblEnemy");

        verticalLayout->addWidget(lblEnemy);

        lblHealth = new QLabel(centralWidget);
        lblHealth->setObjectName("lblHealth");

        verticalLayout->addWidget(lblHealth);

        btnAttack = new QPushButton(centralWidget);
        btnAttack->setObjectName("btnAttack");

        verticalLayout->addWidget(btnAttack);

        lblGold = new QLabel(centralWidget);
        lblGold->setObjectName("lblGold");

        verticalLayout->addWidget(lblGold);

        btnUpgrade = new QPushButton(centralWidget);
        btnUpgrade->setObjectName("btnUpgrade");

        verticalLayout->addWidget(btnUpgrade);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Clicker Game", nullptr));
        lblEnemy->setText(QCoreApplication::translate("MainWindow", "Enemy: Goblin", nullptr));
        lblHealth->setText(QCoreApplication::translate("MainWindow", "Health: 100", nullptr));
        btnAttack->setText(QCoreApplication::translate("MainWindow", "Attack!", nullptr));
        lblGold->setText(QCoreApplication::translate("MainWindow", "Gold: 0", nullptr));
        btnUpgrade->setText(QCoreApplication::translate("MainWindow", "Upgrade (Cost: 100)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
