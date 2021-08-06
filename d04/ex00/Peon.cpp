#include <iostream>
#include <string>
#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
    std::cout << "Zog zog." << std::endl;
    return;
}

Peon::Peon(Peon const & src) : Victim(src) {
    std::cout << "Some random victim called " << src.getName() << " just popped! By copy constructor" << std::endl;
    *this = src;
    return;
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
    return;
}

Peon & Peon::operator=(Peon const &src) {
    std::cout << "Victim " << this->_name << " operator = called" << std::endl;
    this->_name = src.getName();
    return *this;
}

void Peon::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}