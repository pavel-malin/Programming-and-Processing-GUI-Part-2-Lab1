#ifndef ENEMYTEMPLATE_H
#define ENEMYTEMPLATE_H

#include <QString>
#include <QJsonObject>

class EnemyTemplate {
public:
    EnemyTemplate(QString name, QString iconName, int baseline,
                  double lifeModifier, int baseGold, double goldModifier,
                  double spawnChance);

    // Геттеры
    QString getName() const;
    QString getIconName() const;
    int getBaseLife() const;
    double getLifeModifier() const;
    int getBaseGold() const;
    double getGoldModifier() const;
    double getSpawnChance() const;

    // JSON
    QJsonObject toJson() const;
    static EnemyTemplate fromJson(const QJsonObject &json);

private:
    QString name;
    QString iconName;
    int baseline;
    double lifeModifier;
    int baseGold;
    double goldModifier;
    double spawnChance;
};

#endif // ENEMYTEMPLATE_H
