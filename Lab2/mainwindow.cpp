#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QGraphicsPixmapItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), icons(QSize(64, 64)) {
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    // Загрузка иконок
    icons.loadFromFolder(":/icons");
    displayIcons();

    // Подключение кнопок
    connect(ui->btnAdd, &QPushButton::clicked, this, &MainWindow::onAddClicked);
    connect(ui->btnRemove, &QPushButton::clicked, this, &MainWindow::onRemoveClicked);
    connect(ui->btnSave, &QPushButton::clicked, this, &MainWindow::onSaveClicked);
    connect(ui->btnLoad, &QPushButton::clicked, this, &MainWindow::onLoadClicked);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::onAddClicked() {
    // Пример добавления (реализуйте диалог)
    EnemyTemplate enemy("Goblin", "goblin.png", 100, 1.2, 50, 1.5, 0.3);
    enemies.addEnemy(enemy);
    updateEnemyList();
}

void MainWindow::onRemoveClicked() {
    auto selected = ui->listEnemies->currentItem();
    if (selected) {
        enemies.deleteEnemyByName(selected->text());
        updateEnemyList();
    }
}

void MainWindow::onSaveClicked() {
    QString path = QFileDialog::getSaveFileName(this, "Save JSON", "", "*.json");
    if (!path.isEmpty()) enemies.saveToJson(path);
}

void MainWindow::onLoadClicked() {
    QString path = QFileDialog::getOpenFileName(this, "Load JSON", "", "*.json");
    if (!path.isEmpty()) {
        enemies.loadFromJson(path);
        updateEnemyList();
    }
}

void MainWindow::updateEnemyList() {
    ui->listEnemies->clear();
    for (const auto &name : enemies.getEnemyNames()) {
        ui->listEnemies->addItem(name);
    }
}

void MainWindow::displayIcons() {
    int x = 0;
    for (const auto &icon : icons.getIcons()) {
        QGraphicsPixmapItem *item = scene->addPixmap(icon.getImage());
        item->setPos(x, 0);
        x += 70;
    }
}
