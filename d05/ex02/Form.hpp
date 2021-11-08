#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _name;
        const int _sign_grade;
        const int _execute_grade;
        bool _is_signed;

    public:
        Form();
        Form(std::string name, int sign_grade, int execute_grade);
        virtual ~Form();
        Form & operator=(Form const & src);
        Form(Form const & src);
        std::string getName() const;
        int getSignGrade() const;
        int getExecuteGrade() const;
        bool getIsSigned() const;
        void beSigned(Bureaucrat bureaucrat);
        bool validateExecution(Bureaucrat const & executor) const;
        virtual void execute(Bureaucrat const & executor) const = 0;

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char * what() const throw()
                {
                    return ("The grade is too high");
                }
        };
                class GradeTooLowException : public std::exception
        {
            public:
                virtual const char * what() const throw()
                {
                    return ("The grade is too low");
                }
        };
};

std::ostream & operator<<( std::ostream & o, Form const & src);
