#include <iostream>
#include "TacticalMarine.hpp"


TacticalMarine::TacticalMarine() {
    std::cout <<  "Tactical Marine ready for battle!" << std::endl;
    return;
}

TacticalMarine::~TacticalMarine() {
    std::cout <<  "Aaargh..." << std::endl;
    return;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src) {
   *this = src;
    return;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const &src) {
    return *this;
}

TacticalMarine & TacticalMarine::clone() {
    //TODO make copy of object
    TacticalMarine * copy = new TacticalMarine();
    return copy;
}

void TacticalMarine::battleCry() {
    std::cout << "For the holy PLOT!" << std::endl;
    return;
}

void TacticalMarine::rangedAttack() {
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() {
    std::cout << "* attacks with a chainsword *" << std::endl;
}