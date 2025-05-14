#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include "enemytemplatelist.h"
#include "iconlist.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onAddClicked();
    void onRemoveClicked();
    void onSaveClicked();
    void onLoadClicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    EnemyTemplateList enemies;
    IconList icons;

    void updateEnemyList();
    void displayIcons();
};

#endif // MAINWINDOW_H
