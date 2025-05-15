#include "player.h"

Player::Player() {
    gold = BigNumber("0");
    damage = BigNumber("5");
    upgradeCost = BigNumber("100");
}

bool Player::upgrade() {
    if (gold.toString().toInt() >= upgradeCost.toString().toInt()) {
        gold.subtract(upgradeCost);
        damage.multiply(damageModifier);
        upgradeCost.multiply(costModifier);
        level++;
        return true;
    }
    return false;
}

void Player::gainGold(const BigNumber& amount) {
    gold.add(amount);
}

BigNumber Player::getGold() const { return gold; }
BigNumber Player::getDamage() const { return damage; }
BigNumber Player::getUpgradeCost() const { return upgradeCost; }
