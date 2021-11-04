#include <iostream>
#include <string>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) {
    std::cout << name << ", " << title << ", is born!" << std::endl;
    this->_name = name;
    this->_title = title;
    return;
}

Sorcerer::Sorcerer(Sorcerer const & src) {
    std::cout << src.getName() << ", " << src.getTitle() << ", is born! By copy constructor" << std::endl;
    *this = src;
    return;
}

Sorcerer::~Sorcerer() {
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
    return;
}

Sorcerer & Sorcerer::operator=(Sorcerer const &src) {
    std::cout << src.getName() << ", " << src.getTitle() << ", operator = call" << std::endl;
    this->_name = src.getName();
    this->_title = src.getTitle();
    return *this;
}

std::string Sorcerer::getName(void) const {
   return this->_name;
}

std::string Sorcerer::getTitle(void) const {
   return this->_title;
}

void Sorcerer::setName(std::string name) {
    this->_name = name;
}

void Sorcerer::setTitle(std::string title) {
    this->_title = title;
}


void Sorcerer::polymorph(Victim const & victim) const {
   victim.getPolymorphed();
   return ;
}

std::ostream & operator<<( std::ostream & o, Sorcerer const & src) {
    std::cout << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies!" << std::endl;
    return o;
}