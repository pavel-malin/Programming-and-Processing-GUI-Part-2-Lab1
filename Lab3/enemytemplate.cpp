#include "enemytemplate.h"

EnemyTemplate::EnemyTemplate(QString name, QString iconName, int baseLife, double lifeMod, int baseGold, double goldMod, double spawnChance)
    : name(name), iconName(iconName), baseLife(baseLife), lifeModifier(lifeMod),
    baseGold(baseGold), goldModifier(goldMod), spawnChance(spawnChance) {}

QString EnemyTemplate::getName() const { return name; }
int EnemyTemplate::getBaseLife() const { return baseLife; }
int EnemyTemplate::getBaseGold() const { return baseGold; }
double EnemyTemplate::getLifeModifier() const { return lifeModifier; }
double EnemyTemplate::getGoldModifier() const { return goldModifier; }
double EnemyTemplate::getSpawnChance() const { return spawnChance; }
