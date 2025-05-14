#include "enemytemplatelist.h"
#include <QJsonDocument>

void EnemyTemplateList::addEnemy(const EnemyTemplate &enemy) {
    enemies.append(enemy);
}

void EnemyTemplateList::deleteEnemyByName(const QString &name) {
    for (auto it = enemies.begin(); it != enemies.end(); ++it) {
        if (it->getName() == name) {
            enemies.erase(it);
            break;
        }
    }
}

void EnemyTemplateList::saveToJson(const QString &path) const {
    QJsonArray arr;
    for (const auto &enemy : enemies) {
        arr.append(enemy.toJson());
    }

    QFile file(path);
    if (file.open(QIODevice::WriteOnly)) {
        file.write(QJsonDocument(arr).toJson());
    }
}

void EnemyTemplateList::loadFromJson(const QString &path) {
    QFile file(path);
    if (file.open(QIODevice::ReadOnly)) {
        QJsonArray arr = QJsonDocument::fromJson(file.readAll()).array();
        for (const auto &val : arr) {
            enemies.append(EnemyTemplate::fromJson(val.toObject()));
        }
    }
}

QList<QString> EnemyTemplateList::getEnemyNames() const {
    QList<QString> names;
    for (const auto &enemy : enemies) {
        names.append(enemy.getName());
    }
    return names;
}
