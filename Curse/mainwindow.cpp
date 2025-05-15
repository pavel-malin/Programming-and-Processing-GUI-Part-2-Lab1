#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    loadTasks();

    // Настройка формата даты
    ui->dateTimeEdit->setDisplayFormat("dd.MM.yyyy HH:mm");
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
}

MainWindow::~MainWindow() {
    saveTasks();
    delete ui;
}

void MainWindow::on_addButton_clicked() {
    QString name = ui->nameEdit->text().trimmed();
    if(name.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Введите название задачи");
        return;
    }

    Task task;
    task.name = name;
    task.description = ui->descEdit->text().trimmed();
    task.dateTime = ui->dateTimeEdit->dateTime();
    tasks.append(task);

    updateTaskList();
    ui->nameEdit->clear();
    ui->descEdit->clear();
}

void MainWindow::on_deleteButton_clicked() {
    int row = ui->taskTable->currentRow();
    if(row >= 0 && row < tasks.size()) {
        tasks.removeAt(row);
        updateTaskList();
    }
}

void MainWindow::updateTaskList() {
    ui->taskTable->setRowCount(0);
    for(const Task &task : tasks) {
        int row = ui->taskTable->rowCount();
        ui->taskTable->insertRow(row);
        ui->taskTable->setItem(row, 0, new QTableWidgetItem(task.name));
        ui->taskTable->setItem(row, 1, new QTableWidgetItem(task.description));
        ui->taskTable->setItem(row, 2, new QTableWidgetItem(task.dateTime.toString("dd.MM.yyyy HH:mm")));
    }
}

void MainWindow::loadTasks() {
    QFile file("tasks.dat");
    if(file.open(QIODevice::ReadOnly)) {
        QDataStream in(&file);
        in >> tasks;
        file.close();
        updateTaskList();
    }
}

void MainWindow::saveTasks() {
    QFile file("tasks.dat");
    if(file.open(QIODevice::WriteOnly)) {
        QDataStream out(&file);
        out << tasks;
        file.close();
    }
}
