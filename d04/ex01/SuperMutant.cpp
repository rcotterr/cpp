#include <iostream>
#include <string>
#include "SuperMutant.hpp"

int super_mutant_hp = 170;
std::string super_mutant_type = "Super Mutant";

SuperMutant::SuperMutant() : Enemy(super_mutant_hp, super_mutant_type) {
    std::cout <<  "Gaaah. Me want smash heads!" << std::endl;
    return;
}

SuperMutant::SuperMutant(SuperMutant const &src) : Enemy(src) {
    std::cout << "SuperMutant copy constructor call for " << src.getType() << std::endl;
//    *this = src;
    return;
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh..." << std::endl;
    return;
}

//SuperMutant & SuperMutant::operator=(SuperMutant const &src) {
////    std::cout << "SuperMutant operator = call for " << src.getName() << std::endl;
////    this->_type = src.getType();
////    this->_hp = src.getHP();
//    return *this;
//}

//TODO check operator= and copy constructor


void SuperMutant::takeDamage(int damage) {
    if (damage < 0) {
        return;
    }
    else {
        this->_hp -= (damage / 3);
    }
//    std::cout << "SuperMutant getDamage call for " << this->_name << std::endl;
    return;
}