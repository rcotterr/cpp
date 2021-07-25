#include <iostream>
#include <string>
#include "HumanB.hpp"


HumanB::HumanB(std::string name) {
	this->_name = name;
	return;
}


HumanB::~HumanB(void) {
	return;
}


void HumanB::setWeapon(Weapon weapon) {
	this->_weapon_ref = &weapon;
}


void HumanB::attack() {
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_weapon_ref->getType() << std::endl;
}
