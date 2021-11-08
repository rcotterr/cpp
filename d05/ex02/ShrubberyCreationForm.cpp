#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"

const int ShrubberyCreation__exec_grade = 137;
const int ShrubberyCreation__sign_grade = 145;
const std::string ShrubberyCreation__name = "ShrubberyCreationForm";

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(ShrubberyCreation__name, ShrubberyCreation__sign_grade, ShrubberyCreation__exec_grade) {
    this->_target = target;
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src) {
    this->_target = src.getTarget();
    Form::operator=(src);
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src) {
    *this = src;
    return;
}

std::string ShrubberyCreationForm::getTarget() const {
    return this->_target;
}

