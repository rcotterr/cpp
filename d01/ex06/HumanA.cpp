#include <iostream>
#include <string>
#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon weapon) {
	this->_name = name;
	this->_weapon_ref = &weapon;
	return;
}


HumanA::~HumanA(void) {
	return;
}


void HumanA::attack() {
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_weapon_ref->getType() << std::endl;
}

