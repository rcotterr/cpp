#include <fstream>
#include <iostream>
#include <string>
#include "RobotomyRequestForm.hpp"

const int RobotomyRequest__exec_grade = 45;
const int RobotomyRequest__sign_grade = 72;
const std::string RobotomyRequest__name = "RobotomyRequestForm";

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(RobotomyRequest__name, RobotomyRequest__sign_grade, RobotomyRequest__exec_grade) {
    this->_target = target;
    return;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src) {
    this->_target = src.getTarget();
    Form::operator=(src);
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src) {
    *this = src;
    return;
}

std::string RobotomyRequestForm::getTarget() const {
    return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

    if (Form::validateExecution(executor)) {
        std::cout << "brrrrrrrrr" << std::endl;
        std::cout << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
    }
    else {
        std::cout << "It's failure" << std::endl;
    }
    return;
}
