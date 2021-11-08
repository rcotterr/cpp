#include <iostream>
#include <string>
#include "Form.hpp"

Form::Form(std::string name, int sign_grade, int execute_grade) : _name(name), _sign_grade(sign_grade), _execute_grade(execute_grade) {
    this->_is_signed = false;
    return;
}

Form::~Form() {
    return;
}

Form & Form::operator=(Form const & src) {
    this->_is_signed = src.getIsSigned();
    return *this;
}

Form::Form(Form const & src) : _name(src.getName()), _sign_grade(src.getSignGrade()), _execute_grade(src.getExecuteGrade()) {
    *this = src;
    return;
}

std::string Form::getName() const {
    return this->_name;
}

int Form::getSignGrade() const {
    return this->_sign_grade;
}

int Form::getExecuteGrade() const {
    return this->_execute_grade;
}

bool Form::getIsSigned() const {
    return this->_is_signed;
}

std::ostream & operator<<( std::ostream & o, Form const & src) {
    std::cout << src.getName() << ", sign grade: " << src.getSignGrade() << ", execute grade: " << src.getExecuteGrade() << ", is signed: " << src.getIsSigned() << std::endl;
    return o;
}