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
    std::cout << std::endl;


//try
//{
///* do some stuff with bureaucrats */
//}
//catch (std::exception & e)
//{
///* handle exception */
//}

    return 0;
}