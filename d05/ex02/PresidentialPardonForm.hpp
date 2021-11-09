#include <iostream>
#include <string>
#include "RobotomyRequestForm.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string _target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm & operator=(PresidentialPardonForm const & src);
        PresidentialPardonForm(PresidentialPardonForm const & src);
        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;

};
