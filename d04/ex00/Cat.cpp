#include <iostream>
#include <string>
#include "Cat.hpp"

Cat::Cat(std::string name) : Victim(name) {
    std::cout << "Cat appeared." << std::endl;
    return;
}

Cat::Cat(Cat const & src) : Victim(src) {
    std::cout << "Some random victim called " << src.getName() << " just popped! By copy constructor" << std::endl;
    *this = src;
    return;
}

Cat::~Cat() {
    std::cout << "oh meow..." << std::endl;
    return;
}

Cat & Cat::operator=(Cat const &src) {
    std::cout << "Victim " << this->_name << " operator = called" << std::endl;
    this->_name = src.getName();
    return *this;
}

void Cat::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}