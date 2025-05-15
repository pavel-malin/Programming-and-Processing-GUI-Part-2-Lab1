#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    connect(ui->btnAttack, &QPushButton::clicked, this, &MainWindow::onAttackClicked);
    connect(ui->btnUpgrade, &QPushButton::clicked, this, &MainWindow::onUpgradeClicked);

    // Загрузка шаблонов противников
    enemyTemplates.append(EnemyTemplate("Goblin", "goblin.png", 100, 1.2, 50, 1.5, 0.3));
    enemyTemplates.append(EnemyTemplate("Orc", "orc.png", 200, 1.5, 100, 1.8, 0.2));

    spawnNewEnemy();
    updateUI();
}

void MainWindow::spawnNewEnemy() {
    if (!enemyTemplates.isEmpty()) {
        currentEnemy = new Enemy(enemyTemplates[0]); // Упрощенный выбор противника
    }
}

void MainWindow::onAttackClicked() {
    currentEnemy->takeDamage(player.getDamage());
    if (currentEnemy->isDead()) {
        player.gainGold(currentEnemy->getReward());
        spawnNewEnemy();
    }
    updateUI();
}

void MainWindow::onUpgradeClicked() {
    if (player.upgrade()) {
        updateUI();
    } else {
        QMessageBox::warning(this, "Error", "Not enough gold!");
    }
}

void MainWindow::updateUI() {
    ui->lblEnemy->setText("Enemy: " + currentEnemy->getName());
    ui->lblHealth->setText("Health: " + currentEnemy->getCurrentHealth().toString());
    ui->lblGold->setText("Gold: " + player.getGold().toString());
    ui->btnUpgrade->setText("Upgrade (Cost: " + player.getUpgradeCost().toString() + ")");
}

MainWindow::~MainWindow() {
    delete ui;
    delete currentEnemy;
}
