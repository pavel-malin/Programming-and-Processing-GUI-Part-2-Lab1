#ifndef TASKSCHEDULER_H
#define TASKSCHEDULER_H

#include <QWidget>
#include <QTableWidget>
#include <QLineEdit>
#include <QDateTimeEdit>
#include "task.h"

class TaskScheduler : public QWidget {
    Q_OBJECT

public:
    explicit TaskScheduler(QWidget *parent = nullptr);

private slots:
    void addTask();
    void deleteTask();
    void updateCalendarDate(const QDate &date);

private:
    void setupUI();
    void setupConnections();
    void updateTaskList();
    void clearInputs();

    QLineEdit *nameEdit;
    QLineEdit *descEdit;
    QDateTimeEdit *dateTimeEdit;
    QTableWidget *taskTable;
    QList<Task> tasks;
};

#endif // TASKSCHEDULER_H
