#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "task.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addButton_clicked();
    void on_deleteButton_clicked();

private:
    Ui::MainWindow *ui;
    QList<Task> tasks;

    void loadTasks();
    void saveTasks();
    void updateTaskList();
};

#endif // MAINWINDOW_H
