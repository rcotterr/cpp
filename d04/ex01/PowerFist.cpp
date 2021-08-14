#include <iostream>
#include <string>
#include "PowerFist.hpp"

PowerFist::PowerFist() :  AWeapon("Power Fist", 50, 8) {
    std::cout << "PowerFist constructor call" << std::endl;
    return;
}

 PowerFist:: PowerFist( PowerFist const &src) : AWeapon(src) {
    std::cout << "PowerFist copy constructor call" << std::endl;
    *this = src;
    return;
}

 PowerFist::~ PowerFist() {
    std::cout << "PowerFist destructor call" << std::endl;
    return;
}

 PowerFist &  PowerFist::operator=( PowerFist const &src) {
    std::cout << "PowerFist operator = call for " << src.getName() << std::endl;
    return *this;
}


std::string  PowerFist::getName() const {
//    std::cout << " PowerFist getName call for " << this->getName() << std::endl;
    return AWeapon::getName();
}

void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
