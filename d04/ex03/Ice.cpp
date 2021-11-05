#include <iostream>
#include <string>
#include "Ice.hpp"
#include "ICharacter.hpp"


std::string const & type = "ice";

Ice::Ice() : AMateria(type) {
    return;
}

Ice::~Ice() {
    return;
}

Ice::Ice(Ice const &src) : AMateria(src) {
    *this = src;
    return;
}

Ice & Ice::operator=(Ice const &src) {
    this->_xp = src.getXP();
    return *this;
}

void Ice::use(ICharacter& target) {
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return;
}

Ice* Ice::clone() const {
    Ice *ice_new = new Ice();
    return ice_new;
}