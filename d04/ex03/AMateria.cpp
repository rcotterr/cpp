#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"


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
    return *this;
}

std::string const & AMateria::getType() const {
    return this->_type;
}

unsigned int AMateria::getXP() const {
    return this->_xp;

}

void AMateria::use(ICharacter& target) {
    this->_xp += 10;
    target.getName();
}