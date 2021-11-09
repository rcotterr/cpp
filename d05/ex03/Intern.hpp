#include <iostream>
#include <string>
#include "PresidentialPardonForm.hpp"

class Form;

class Intern
{

    public:
        Intern();
        ~Intern();
        Intern & operator=(Intern const & src);
        Intern(Intern const & src);
        Form* makeForm(std::string form_name, std::string form_target) const;
};
