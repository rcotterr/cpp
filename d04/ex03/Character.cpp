#include <iostream>
#include <string>
#include "Character.hpp"
#include "AMateria.hpp"


Character::Character(std::string const & name) {
    this->_name = name;
    this->_materia_num = 0;
    for(int i=0; i < SIZE; i++) {
        (this->_container)[i] = NULL;
    }
    return;
}

Character::Character(Character const &src) {
    *this = src;
    return;
}

Character::~Character() {
//TODO The old Materia of a Character must be deleted.
    return;
}

Character & Character::operator=(Character const &src) {
//TODO operator=
//    AMateria* _container[SIZE] = src.
//    for(i=0; i < SIZE; i++) {
//        (this->_container)[i] = sr;
//    }
//TODO The old Materia of a Character must be deleted.
    std::cout << src.getName() << std::endl;
    return *this;
}

std::string const & Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria* m) {
    for(int i=0; i < SIZE; i++) {
        if ((this->_container)[i] == NULL) {
            (this->_container)[i] = m;
        }
    }
}

void Character::unequip(int idx) {
    if (idx < SIZE && idx >= 0) {
        AMateria * materia = (this->_container)[idx];
        if (materia != NULL) {
            (this->_container)[idx] = NULL;
        }
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx < SIZE && idx >= 0) {
        AMateria *materia = (this->_container)[idx];
        if (materia != NULL) {
            materia->use(target);
        }
    }
}