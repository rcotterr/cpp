#include <iostream>
#include <string>
#include "Weapon.hpp"


Weapon::Weapon(std::string type) :  _type(this->str_type) {
	this->str_type = type;
	this->_type = this->str_type;
	return;
}


Weapon::~Weapon(void) {
	return;
}


void Weapon::setType(std::string type) {
	this->str_type = type;
}


const std::string & Weapon::getType() {
	return this->_type;
}