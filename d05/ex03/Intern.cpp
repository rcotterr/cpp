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

Form * Intern::makeForm(std::string form_name, std::string form_target) const {
    //TODO
    (void)form_name;
    Form * form = new RobotomyRequestForm(form_target);

    return form;
}
