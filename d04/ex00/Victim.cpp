#include <iostream>
#include <string>
#include "Victim.hpp"

Victim::Victim(std::string name) {
    std::cout << "Some random victim called " << name << " just popped !" << std::endl;
    this->_name = name;
    return;
}

Victim::Victim(Victim const & src) {
    std::cout << "Some random victim called " << src.getName() << " just popped ! By copy constructor" << std::endl;
    *this = src;
    return;
}

Victim::~Victim() {
    std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
    return;
}

Victim & Victim::operator=(Victim const &src) {
    std::cout << "Victim " << this->_name << " operator = called" << std::endl;
    this->_name = src.getName();
    return *this;
}

std::string Victim::getName(void) const {
   return this->_name;
}

void Victim::setName(std::string name) {
    this->_name = name;
}

void Victim::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator<<( std::ostream & o, Victim const & src) {
    std::cout << "I am " << src.getName() << " and I like otters !" << std::endl;
    return o;
}