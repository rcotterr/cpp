#include <iostream>
#include <string>
#include "AMateria.hpp"


AMateria::AMateria(std::string const & type) {
    this->_xp = 0;
    this->_type = type;
    return;
}

AMateria::AMateria(AMateria const &src) {
    *this = src;
    return;
}

AMateria::~AMateria() {
    return;
}

AMateria & AMateria::operator=(AMateria const &src) {
    this->_xp = src.getXP();
    this->_type = src.getType();
    return *this;
}

std::string const & AMateria::getType() const {
//    std::string const & type = this->_type;
    return this->_type;
}

unsigned int AMateria::getXP() const {
    return this->_xp;

}

void AMateria::use(ICharacter& target) {
    this->_xp += 10;
    std::cout << target.getName(); //TODO delete

}