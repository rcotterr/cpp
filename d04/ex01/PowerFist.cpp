#include <iostream>
#include <string>
#include "PowerFist.hpp"

PowerFist::PowerFist() :  AWeapon("Power Fist", 8, 50) {
    return;
}

PowerFist:: PowerFist( PowerFist const &src) : AWeapon(src) {
    *this = src;
    return;
}

PowerFist::~ PowerFist() {
    return;
}

PowerFist &  PowerFist::operator=( PowerFist const &src) {
    this->_name = src.getName();
    this->_apcost = src.getAPCost();
    this->_damage = src.getDamage();
    return *this;
}

std::string  PowerFist::getName() const {
    return AWeapon::getName();
}

void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
