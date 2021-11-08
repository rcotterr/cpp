#include <iostream>
#include <string>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        std::string _target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        std::string getTarget() const;
        //TODO execute

};
