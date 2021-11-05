#include <iostream>
#include <string>
#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) {
    this->_type = type;
    this->_hp = hp;
    return;
}

Enemy::Enemy(Enemy const &src) {
    *this = src;
    return;
}

Enemy::~Enemy() {
    return;
}

Enemy & Enemy::operator=(Enemy const &src) {
    this->_type = src.getType();
    this->_hp = src.getHP();
    return *this;
}

std::string Enemy::getType() const {
    return this->_type;
}

int Enemy::getHP() const {
    return this->_hp;
}

void Enemy::takeDamage(int damage) {
    if (damage < 0) {
        return;
    }
    else {
        this->_hp -= damage;
    }
    if (this->_hp < 0) {
        this->_hp = 0;
    }
    return;
}