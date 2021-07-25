#include <iostream>
#include <string>
#include "Pony.hpp"


Pony::Pony(std::string name) {
	this->_name = name;
	std::cout << "The pony was created!" << std::endl;
}


Pony::~Pony(void) {
	std::cout << "The pony " << this->_name << " gone to another Universe!" << std::endl;
}


void Pony::output_info(void) const {
	std::cout << "My name is " << this->_name << ". Nice to meet you!" << std::endl;
}