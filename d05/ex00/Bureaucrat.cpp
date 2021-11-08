#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) {
    this->_name = name;
    this->_grade = grade;
    return;
}

Bureaucrat::~Bureaucrat() {
    return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src) {
    this->_name = src.getName();
    this->_grade = src.getGrade();
    return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
    *this = src;
    return;
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::incrementGrade() {
    this->_grade -= 1;
}

void Bureaucrat::decrementGrade() {
    this->_grade += 1;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & src) {
    std::cout << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
    return o;
}