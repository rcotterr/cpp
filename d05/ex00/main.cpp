#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int main() {
    std::cout << "   ***check Bureaucrat***" << std::endl;
    Bureaucrat bureaucrat = Bureaucrat("bureaucrat", 100);
    std::cout << "Name of Bureaucrat is: " << bureaucrat.getName() << std::endl;
    std::cout << "Grade of Bureaucrat is: " << bureaucrat.getGrade() << std::endl;
    std::cout << bureaucrat;
    bureaucrat.incrementGrade();
    std::cout << "after increment: " << bureaucrat;
    bureaucrat.decrementGrade();
    std::cout << "after decrement: " << bureaucrat;


    Bureaucrat bureaucrat_copy = Bureaucrat(bureaucrat);
    std::cout << "bureaucrat_copy is : " << bureaucrat_copy;
    Bureaucrat bureaucrat_equal = bureaucrat;
    std::cout << "bureaucrat_equal is : " << bureaucrat_equal;
    Bureaucrat bureaucrat_const = Bureaucrat("some_const_name", 70);
    std::cout << "bureaucrat_const is : " << bureaucrat_const;
    bureaucrat_const = bureaucrat;
    std::cout << "after equal bureaucrat_const is : " << bureaucrat_const;
    std::cout << std::endl;


    try
    {
        Bureaucrat bureaucrat_big_grade = Bureaucrat("bureaucrat_big_grade", 0);
    }
    catch (std::exception & e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat bureaucrat_low_grade = Bureaucrat("bureaucrat_low_grade", 151);
    }
    catch (std::exception & e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }

    return 0;
}