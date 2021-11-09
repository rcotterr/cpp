#include <fstream>
#include <iostream>
#include <string>
#include "PresidentialPardonForm.hpp"

const int PresidentialPardon__exec_grade = 5;
const int PresidentialPardon__sign_grade = 25;
const std::string PresidentialPardon__name = "PresidentialPardonForm";

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(PresidentialPardon__name, PresidentialPardon__sign_grade, PresidentialPardon__exec_grade) {
    this->_target = target;
    return;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src) {
    this->_target = src.getTarget();
    Form::operator=(src);
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src) {
    *this = src;
    return;
}

std::string PresidentialPardonForm::getTarget() const {
    return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (Form::validateExecution(executor)) {
        std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
    }
    return;
}
