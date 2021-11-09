#include <fstream>
#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"

const int ShrubberyCreation__exec_grade = 137;
const int ShrubberyCreation__sign_grade = 145;
const std::string ShrubberyCreation__name = "ShrubberyCreationForm";
const std::string trees =
"               ,@@@@@@@,\n"
"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
"   %&&%/ %&%%&&@@\\ V /@@' '88\\8 `/88'\n"
"   `&%\\ ` /%&'    |.|         | |8'\n"
"       |o|        | |         | |\n"
"       |.|        | |         | |\n"
"    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";

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

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

    if (Form::validateExecution(executor)) {
        std::ofstream out(this->_target + "_shrubbery");
        out << trees;
        out.close();
    }
    return;
}
