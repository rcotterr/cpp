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
    *this = src;
    return;
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh..." << std::endl;
    return;
}

SuperMutant & SuperMutant::operator=(SuperMutant const &src) {
    this->_type = src.getType();
    this->_hp = src.getHP();
    return *this;
}


void SuperMutant::takeDamage(int damage) {
    if (damage < 0) {
        return;
    }
    else {
        this->_hp -= (damage / 3);
    }
    if (this->_hp < 0) {
        this->_hp = 0;
    }
    return;
}