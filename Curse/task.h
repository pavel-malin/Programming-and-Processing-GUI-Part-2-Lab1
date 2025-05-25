#ifndef TASK_H
#define TASK_H

#include <QString>
#include <QDateTime>
#include <QDataStream>

struct Task {
    QString name;
    QString description;
    QDateTime dateTime;

    friend QDataStream &operator<<(QDataStream &out, const Task &task) {
        out << task.name << task.description << task.dateTime;
        return out;
    }

    friend QDataStream &operator>>(QDataStream &in, Task &task) {
        in >> task.name >> task.description >> task.dateTime;
        return in;
    }
};

#endif // TASK_H
