#include <iostream>
#include <string>

const int MAX_GRADE = 1;
const int MIN_GRADE = 150;

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat & operator=(Bureaucrat const & src);
        Bureaucrat(Bureaucrat const & src);
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        //TODO check _name const

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

std::ostream & operator<<( std::ostream & o, Bureaucrat const & src);
