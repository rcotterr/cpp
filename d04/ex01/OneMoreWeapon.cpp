#include <iostream>
#include <string>
#include "OneMoreWeapon.hpp"

OneMoreWeapon::OneMoreWeapon() :  AWeapon("OneMoreWeapon", 7, 15) {
    return;
}

OneMoreWeapon::OneMoreWeapon( OneMoreWeapon const &src) : AWeapon(src) {
    *this = src;
    return;
}

OneMoreWeapon::~OneMoreWeapon() {
    return;
}

OneMoreWeapon & OneMoreWeapon::operator=( OneMoreWeapon const &src) {
    this->_name = src.getName();
    this->_apcost = src.getAPCost();
    this->_damage = src.getDamage();
    return *this;
}

std::string OneMoreWeapon::getName() const {
    return AWeapon::getName();
}

void OneMoreWeapon::attack() const {
    std::cout << "* puph puph puph *" << std::endl;
}
