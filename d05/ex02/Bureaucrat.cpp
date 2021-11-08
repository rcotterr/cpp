#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
    if (grade < MAX_GRADE) {
        throw Bureaucrat::GradeTooHighException();
    }
    if (grade > MIN_GRADE) {
        throw Bureaucrat::GradeTooLowException();
    }
    this->_grade = grade;
    return;
}

Bureaucrat::~Bureaucrat() {
    return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src) {
    this->_grade = src.getGrade();
    return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName()){
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

void Bureaucrat::signForm(bool success, std::string form_name, std::string reason) {
    if (success == true) {
        std::cout << this->_name <<" signs " << form_name << std::endl;
    }
    else {
        std::cout << this->_name <<" cannot sign " << form_name << " because " << reason << std::endl;
    }
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & src) {
    std::cout << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
    return o;
}