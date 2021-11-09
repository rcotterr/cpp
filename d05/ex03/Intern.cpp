#include <iostream>
#include <string>
#include "Intern.hpp"

Intern::Intern(){
    return;
}

Intern::~Intern() {
    return;
}

Intern & Intern::operator=(Intern const & src) {
    (void)src;
    return *this;
}

Intern::Intern(Intern const & src){
    *this = src;
    return;
}

Form * Intern::createShrubberyCreationForm(std::string form_target) const {
    Form * form = new ShrubberyCreationForm(form_target);
    return form;
}

Form * Intern::createRobotomyRequestForm(std::string form_target) const {
    Form * form = new RobotomyRequestForm(form_target);
    return form;
}

Form * Intern::createPresidentialPardonForm(std::string form_target) const {
    Form * form = new PresidentialPardonForm(form_target);
    return form;
}


Form * Intern::makeForm(std::string form_name, std::string form_target) const {
    std::string form_names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    typedef Form* (Intern::*Forms)(std::string form_target) const;
    Forms forms[3] = {&Intern::createShrubberyCreationForm, &Intern::createRobotomyRequestForm, &Intern::createPresidentialPardonForm};
    for (int i = 2; i >= 0; i--) {
        if (form_names[i] == form_name) {
            Form * form = (this->*(forms[i]))(form_target);
            return form;
        }
    }
    std::cout << "requested form in unknown" << std::endl;
    return NULL;
}
