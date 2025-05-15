#ifndef ENEMYTEMPLATE_H
#define ENEMYTEMPLATE_H

#include <QString>
#include "bignumber.h"

class EnemyTemplate {
public:
    EnemyTemplate(QString name, QString iconName, int baseLife, double lifeMod, int baseGold, double goldMod, double spawnChance);
    QString getName() const;
    int getBaseLife() const;
    int getBaseGold() const;
    double getLifeModifier() const;
    double getGoldModifier() const;
    double getSpawnChance() const;

private:
    QString name;
    QString iconName;
    int baseLife;
    double lifeModifier;
    int baseGold;
    double goldModifier;
    double spawnChance;
};

#endif // ENEMYTEMPLATE_H
