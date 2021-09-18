#include <iostream>
#include <string>
#include "AMateria.hpp"


Ice::Ice() {
    return;
}

Ice::~Ice() {
    return;
}

Ice::Ice(Ice const &src) {
    *this = src;
    return;
}

Ice & Ice::operator=(Ice const &src) {
    this->_xp = src.getXP(); //TODO delete here (the same in AMateria class)
    this->_type = src.getType(); //TODO While assigning a Materia to another, copying the type doesn’t make sense...
    return *this;
}


void Ice::use(ICharacter& target) {
    this->_xp += 10; //TODO delete here (the same in AMateria class)
    "* shoots an ice bolt at NAME *"
    return;
}