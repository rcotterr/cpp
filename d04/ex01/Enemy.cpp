#include <iostream>
#include <string>
#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) {
    std::cout << "Enemy constructor call for " << hp << std::endl;
    this->_type = type;
    this->_hp = hp;
    return;
}

Enemy::Enemy(Enemy const &src) {
    std::cout << "Enemy copy constructor call for " << src.getType() << std::endl;
    *this = src;
    return;
}

Enemy::~Enemy() {
    std::cout << "Enemy destructor call for " << this->_type << std::endl;
    return;
}

Enemy & Enemy::operator=(Enemy const &src) {
//    std::cout << "Enemy operator = call for " << src.getName() << std::endl;
    this->_type = src.getType();
    this->_hp = src.getHP();
    return *this;
}


std::string Enemy::getType() const {
//    std::cout << "Enemy getName call for " << this->_name << std::endl;
    return this->_type;
}
int Enemy::getHP() const {
//    std::cout << "Enemy getAPCost call for " << this->_name << std::endl;
    return this->_hp;
}
void Enemy::takeDamage(int damage) {
    if (damage < 0) {
        return;
    }
    else {
        this->_hp -= damage;
    }
//    std::cout << "Enemy getDamage call for " << this->_name << std::endl;
    return;
}