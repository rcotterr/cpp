#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm & operator=(RobotomyRequestForm const & src);
        RobotomyRequestForm(RobotomyRequestForm const & src);
        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;

};
