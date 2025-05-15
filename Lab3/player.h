#ifndef PLAYER_H
#define PLAYER_H

#include "bignumber.h"

class Player {
public:
    Player();
    bool upgrade();
    void gainGold(const BigNumber& amount);
    BigNumber getGold() const;
    BigNumber getDamage() const;
    BigNumber getUpgradeCost() const;

private:
    BigNumber gold;
    BigNumber damage;
    BigNumber upgradeCost;
    int level = 1;
    double damageModifier = 1.15;
    double costModifier = 1.3;
};

#endif // PLAYER_H
