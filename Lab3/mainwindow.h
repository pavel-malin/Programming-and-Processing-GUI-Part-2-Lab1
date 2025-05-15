#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "player.h"
#include "enemy.h"
#include "enemytemplate.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onAttackClicked();
    void onUpgradeClicked();

private:
    Ui::MainWindow *ui;
    Player player;
    Enemy* currentEnemy;
    QList<EnemyTemplate> enemyTemplates;

    void spawnNewEnemy();
    void updateUI();
};

#endif // MAINWINDOW_H
