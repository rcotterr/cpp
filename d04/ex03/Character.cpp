#include <iostream>
#include <string>
#include "Character.hpp"
#include "AMateria.hpp"


Character::Character(std::string const & name) {
    this->_name = name;
    for(int i=0; i < SIZE; i++) {
        (this->_container)[i] = NULL;
        std::cout <<this->_name << (this->_container)[i]<< std::endl;
    }
    return;
}

Character::Character(Character const &src) {
    *this = src;
    return;
}

Character::~Character() {
std::cout <<"lala"<< std::endl;
    for(int i=0; i < SIZE; i++) {
    std::cout <<"lala"<< std::endl;
    std::cout <<i<< std::endl;
        if ((this->_container)[i] != NULL) {
            std::cout <<((this->_container)[i])->getType()<< std::endl;
            delete (this->_container)[i];
        }
    }
    std::cout <<"lala_"<< std::endl;
    return;
}

Character & Character::operator=(Character const &src) {
    this->_name = src.getName();
    for(int i=0; i < SIZE; i++) {
        AMateria * materia = (this->_container)[i];
        std::cout <<materia<< std::endl;
        if (materia != NULL) {
            std::cout <<"before"<< std::endl;
            delete (this->_container)[i];
//            delete materia;
        }
        std::cout <<"lala_"<< std::endl;
        (this->_container)[i] = src.getMateria(i);
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
            std::cout <<this->_name << i << std::endl;
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