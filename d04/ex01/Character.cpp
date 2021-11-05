#include <iostream>
#include <string>
#include "Character.hpp"

bool QUIET = true;
int MAX_AP = 40;
int RECOVER_AP = 10;


Character::Character(std::string const & name) {
    if (!QUIET) {
        std::cout << "A character " << name << " has been created!" <<std::endl;
    }
    this->_name = name;
    this->_ap = MAX_AP;
    return;
}

Character::~Character() {
    if (!QUIET) {
        std::cout << "A character " << this->_name << " has been disappeared!" <<std::endl;
    }
    return;
}

Character::Character(Character const &src) {
    if (!QUIET) {
        std::cout << "A character " << src.getName() << " has been copy constructed!" <<std::endl;
    }
   *this = src;
    return;
}

Character & Character::operator=(Character const &src) {
    if (!QUIET) {
        std::cout << "Character operator = call for " << src.getName() << std::endl;
    }
    this->_name = src.getName();
    this->_ap = src.getAp();
    this->_weapon = src.getWeapon();
    return *this;
}

void Character::recoverAP() {
    this->_ap += RECOVER_AP;
    if (this->_ap > MAX_AP) {
        this->_ap = MAX_AP;
    }
    return;
}

void Character::equip(AWeapon* weapon) {
    this->_weapon = weapon;
    return;
}

void Character::attack(Enemy* enemy) {
    std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
    if (this->_weapon != NULL) {
        this->_ap -= this->_weapon->getAPCost();
        if (this->_ap < 0) {
            this->_ap = 0;
            return;
        }
        this->_weapon->attack();
        enemy->takeDamage(this->_weapon->getDamage());
        if (enemy->getHP() <= 0) {
            delete enemy;
        }
    }
    return;
}

std::string const Character::getName() const {
    return this->_name;
}

int Character::getAp() const {
    return this->_ap;
}

AWeapon* Character::getWeapon() const {
    return this->_weapon;
}


std::ostream & operator<<( std::ostream & o, Character const & src) {
    if (!QUIET) {
        std::cout << "<< operator called" << std::endl;
    }
    if (src.getWeapon() != NULL) {
        std::cout << src.getName() << " has " << src.getAp() << " and wields a " << src.getWeapon()->getName() <<std::endl;
    }
    else {
        std::cout << src.getName() << " has " << src.getAp() << " and is unarmed" <<std::endl;
    }
    return o;
}
