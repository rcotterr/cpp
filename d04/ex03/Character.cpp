#include <iostream>
#include <string>
#include "Character.hpp"
#include "AMateria.hpp"


Character::Character(std::string const & name) {
    this->_name = name;
    for(int i=0; i < SIZE; i++) {
        (this->_container)[i] = NULL;
    }
    return;
}

Character::Character(Character const &src) {
    for(int i=0; i < SIZE; i++) {
        (this->_container)[i] = NULL;
    }
    *this = src;
    return;
}

Character::~Character() {
    for(int i=0; i < SIZE; i++) {
        if ((this->_container)[i] != NULL) {
            delete (this->_container)[i];
        }
    }
    return;
}

Character & Character::operator=(Character const &src) {
    this->_name = src.getName();
    for(int i=0; i < SIZE; i++) {
        AMateria * materia = (this->_container)[i];
        if (materia != NULL) {
            delete materia;
        }
        AMateria * target_materia = src.getMateria(i);
        if (target_materia != NULL) {
            (this->_container)[i] = target_materia->clone();
        }
    }
    return *this;
}

std::string const & Character::getName() const {
    return this->_name;
}

AMateria * Character::getMateria(int idx) const {
    return (this->_container)[idx];
}

void Character::equip(AMateria* m) {
    for(int i=0; i < SIZE; i++) {
        if ((this->_container)[i] == NULL) {
            (this->_container)[i] = m;
            return;
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