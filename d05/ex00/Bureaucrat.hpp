#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        std::string _name;
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
        //TODO exceptions
        //TODO limits 1-150

        //TODO make _name const
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & src);
