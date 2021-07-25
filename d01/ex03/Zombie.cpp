#include <iostream>
#include <string>
#include "Zombie.hpp"


Zombie::Zombie(std::string name, std::string type) {
	this->_name = name;
	this->_type = type;
	std::cout << "A new zombie " << this->_name << " was created!" << std::endl;
	return;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie " << this->_name << " was destructed!" << std::endl;
	return;
}

void Zombie::announce(void) const {
	std::cout << "<" << this->_name << " (" << this->_type << ") Braiiiiiiinnnssss..." << std::endl;
}
