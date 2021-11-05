#include <iostream>
#include <string>
#include "OneMoreEnemy.hpp"

int enemy_hp = 1050;
std::string enemy_type = "OneMoreEnemy";

OneMoreEnemy::OneMoreEnemy() : Enemy(enemy_hp, enemy_type) {
    std::cout <<  "* la-la-la-la-la *" << std::endl;
    return;
}

OneMoreEnemy::OneMoreEnemy(OneMoreEnemy const &src) : Enemy(src) {
    *this = src;
    return;
}

OneMoreEnemy::~OneMoreEnemy() {
    std::cout << "* oups *" << std::endl;
    return;
}

OneMoreEnemy & OneMoreEnemy::operator=(OneMoreEnemy const &src) {
    this->_type = src.getType();
    this->_hp = src.getHP();
    return *this;
}

