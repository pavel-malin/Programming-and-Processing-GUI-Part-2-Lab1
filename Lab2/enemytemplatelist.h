#ifndef ENEMYTEMPLATELIST_H
#define ENEMYTEMPLATELIST_H

#include <QList>
#include <QFile>
#include <QJsonArray>
#include "enemytemplate.h"

class EnemyTemplateList {
public:
    void addEnemy(const EnemyTemplate &enemy);
    void deleteEnemyByName(const QString &name);
    void saveToJson(const QString &path) const;
    void loadFromJson(const QString &path);
    QList<QString> getEnemyNames() const;

private:
    QList<EnemyTemplate> enemies;
};

#endif // ENEMYTEMPLATELIST_H
