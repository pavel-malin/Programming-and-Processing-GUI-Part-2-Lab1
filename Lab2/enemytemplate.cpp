#include "enemytemplate.h"

EnemyTemplate::EnemyTemplate(QString name, QString iconName, int baseline,
                             double lifeModifier, int baseGold, double goldModifier,
                             double spawnChance) :
    name(name),
    iconName(iconName),
    baseline(baseline),
    lifeModifier(lifeModifier),
    baseGold(baseGold),
    goldModifier(goldModifier),
    spawnChance(spawnChance) {}

// Геттеры
QString EnemyTemplate::getName() const { return name; }
QString EnemyTemplate::getIconName() const { return iconName; }
int EnemyTemplate::getBaseLife() const { return baseline; }
double EnemyTemplate::getLifeModifier() const { return lifeModifier; }
int EnemyTemplate::getBaseGold() const { return baseGold; }
double EnemyTemplate::getGoldModifier() const { return goldModifier; }
double EnemyTemplate::getSpawnChance() const { return spawnChance; }

// Сериализация в JSON
QJsonObject EnemyTemplate::toJson() const {
    QJsonObject obj;
    obj["name"] = name;
    obj["iconName"] = iconName;
    obj["baseline"] = baseline;
    obj["lifeModifier"] = lifeModifier;
    obj["baseGold"] = baseGold;
    obj["goldModifier"] = goldModifier;
    obj["spawnChance"] = spawnChance;
    return obj;
}

// Десериализация
EnemyTemplate EnemyTemplate::fromJson(const QJsonObject &json) {
    return EnemyTemplate(
        json["name"].toString(),
        json["iconName"].toString(),
        json["baseline"].toInt(),
        json["lifeModifier"].toDouble(),
        json["baseGold"].toInt(),
        json["goldModifier"].toDouble(),
        json["spawnChance"].toDouble()
        );
}
