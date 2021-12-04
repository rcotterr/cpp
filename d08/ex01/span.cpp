#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
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

std::vector<int> Span::getContainer() const {
    return this->_container;
}

unsigned int Span::getLength() const {
    return this->_len;
}

void Span::addNumber(int n) {
    if (this->_container.size() == this->_len) {
        throw std::exception();
    }
    std::vector<int>::iterator it;
    it =  std::lower_bound((this->_container).begin(), (this->_container).end(), n);
    (this->_container).insert(it, n);
    return;
}

int Span::shortestSpan() const {
//TODO
    return 0;
}

int Span::longestSpan() const {
    if (this->_container.size() < 2) {
        throw std::exception();
    }
    return this->_container.back() - this->_container.front();
}

std::ostream & operator<<( std::ostream & o, Span const & src) {
    std::vector<int> container = src.getContainer();
    std::cout << "Span has: [";
    for (unsigned int i=0; i < container.size(); ++i)
        std::cout << container[i] << ' ';
    std::cout << "], max length: " << src.getLength() << std::endl;
    return o;
}