#include <iostream>
#include <string>
#include "span.hpp"

Span::Span(unsigned int n) {
    this->_len = n;
    return;
}

Span::~Span() {
    return;
}

Span & Span::operator=(Span const & src) {
    this->_len = src.getLength();
    this->_container = src.getContainer();
    return *this;
}

Span::Span(Span const & src) {
    *this = src;
    return;
}

std::list<int> Span::getContainer() const {
    return this->_container;
}

unsigned int Span::getLength() const {
    return this->_len;
}

void Span::addNumber() {
//TODO
    return;
}

int Span::shortestSpan() const {
//TODO
    return 0;
}

int Span::longestSpan() const {
//TODO
    return 0;
}

std::ostream & operator<<( std::ostream & o, Span const & src) {
//    std::cout << "Span has: " << src.getContainer() << ", max length: " << src.getLength() << std::endl;
    std::cout << "Span has: " << ", max length: " << src.getLength() << std::endl;
    return o;
}