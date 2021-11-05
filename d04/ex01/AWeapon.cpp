#include <iostream>
#include <string>
#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
    this->_name = name;
    this->_apcost = apcost;
    this->_damage = damage;
    return;
}

AWeapon::AWeapon(AWeapon const &src) {
    *this = src;
    return;
}

AWeapon::~AWeapon() {
    return;
}

AWeapon & AWeapon::operator=(AWeapon const &src) {
    this->_name = src.getName();
    this->_apcost = src.getAPCost();
    this->_damage = src.getDamage();
    return *this;
}

std::string AWeapon::getName() const {
    return this->_name;
}

int AWeapon::getAPCost() const {
    return this->_apcost;
}

int AWeapon::getDamage() const {
    return this->_damage;
}