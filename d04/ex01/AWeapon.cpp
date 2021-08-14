#include <iostream>
#include <string>
#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
    std::cout << "AWeapon constructor call for " << name << std::endl;
    this->_name = name;
    this->_apcost = apcost;
    this->_damage = damage;
    return;
}

AWeapon::AWeapon(AWeapon const &src) {
    std::cout << "AWeapon copy constructor call for " << src.getName() << std::endl;
    *this = src;
    return;
}

AWeapon::~AWeapon() {
    std::cout << "AWeapon destructor call for " << this->_name << std::endl;
    return;
}

AWeapon & AWeapon::operator=(AWeapon const &src) {
    std::cout << "AWeapon operator = call for " << src.getName() << std::endl;
    this->_name = src.getName();
    this->_apcost = src.getAPCost();
    this->_damage = src.getDamage();
    return *this;
}


std::string AWeapon::getName() const {
//    std::cout << "AWeapon getName call for " << this->_name << std::endl;
    return this->_name;
}
int AWeapon::getAPCost() const {
//    std::cout << "AWeapon getAPCost call for " << this->_name << std::endl;
    return this->_apcost;
}
int AWeapon::getDamage() const {
//    std::cout << "AWeapon getDamage call for " << this->_name << std::endl;
    return this->_damage;
}