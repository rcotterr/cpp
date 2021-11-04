#include <iostream>
#include <string>
#include "Cure.hpp"
#include "ICharacter.hpp"


std::string const & type_cure = "cure";

Cure::Cure() : AMateria(type_cure) {
    return;
}

Cure::~Cure() {
    return;
}

Cure::Cure(Cure const &src) : AMateria(src) {
    *this = src;
    return;
}

void Cure::use(ICharacter& target) {
    this->_xp += 10; //TODO delete here (the same in AMateria class)
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    return;
}

Cure* Cure::clone() const {
    Cure * cure_new = new Cure();
    return cure_new;
}
