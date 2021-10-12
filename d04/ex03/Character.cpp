#include <iostream>
#include <string>
#include "Character.hpp"
#include "AMateria.hpp"


Character::Character(std::string const & name) {
    this->_name = name;
    this->_materia_num = 0;
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
//TODO In case we try to equip a Materia in a full inventory, or use/uneqip a nonexistent Materia, don’t do a thing.
    //TODO check if some slot is NULL
    (this->_container)[this->_materia_num] = m;
    this->_materia_num++;
}

void Character::unequip(int idx) {
//TODO
    (this->_container)[idx] = NULL;
    //    this->_materia_num++;

}

void Character::use(int idx, ICharacter& target) {
//TODO check
    AMateria *materia = (this->_container)[idx];
    materia->use(target);
}