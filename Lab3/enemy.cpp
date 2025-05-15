#include "enemy.h"

Enemy::Enemy(const EnemyTemplate& tmpl) : templateData(tmpl) {
    currentHealth = BigNumber(QString::number(tmpl.getBaseLife()));
    rewardGold = BigNumber(QString::number(tmpl.getBaseGold()));
}

void Enemy::takeDamage(const BigNumber& damage) {
    currentHealth.subtract(damage);
}

bool Enemy::isDead() const {
    return currentHealth.toString().toInt() <= 0;
}

BigNumber Enemy::getCurrentHealth() const { return currentHealth; }
BigNumber Enemy::getReward() const { return rewardGold; }
QString Enemy::getName() const { return templateData.getName(); }
