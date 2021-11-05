#include <iostream>
#include <string>
#include "RadScorpion.hpp"

int red_scorpion_hp = 80;
std::string red_scorpion_type = "RadScorpion";

RadScorpion::RadScorpion() : Enemy(red_scorpion_hp, red_scorpion_type) {
    std::cout <<  "* click click click *" << std::endl;
    return;
}

RadScorpion::RadScorpion(RadScorpion const &src) : Enemy(src) {
    *this = src;
    return;
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
    return;
}

RadScorpion & RadScorpion::operator=(RadScorpion const &src) {
    this->_type = src.getType();
    this->_hp = src.getHP();
    return *this;
}

