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
    src.battleCry(); //TODO operator=
    return *this;
}

ISpaceMarine * TacticalMarine::clone() const {
    //TODO make copy of object
    TacticalMarine * copy = new TacticalMarine();
    return copy;
}

void TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT!" << std::endl;
    return;
}

void TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with a chainsword *" << std::endl;
}