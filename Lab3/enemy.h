#ifndef ENEMY_H
#define ENEMY_H

#include "enemytemplate.h"
#include "bignumber.h"

class Enemy {
public:
    Enemy(const EnemyTemplate& tmpl);
    void takeDamage(const BigNumber& damage);
    bool isDead() const;
    BigNumber getCurrentHealth() const;
    BigNumber getReward() const;
    QString getName() const;

private:
    EnemyTemplate templateData;
    BigNumber currentHealth;
    BigNumber rewardGold;
};

#endif // ENEMY_H
