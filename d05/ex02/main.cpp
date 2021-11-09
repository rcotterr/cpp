#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"

int main() {
    std::cout << "   ***check Bureaucrat***" << std::endl;
    Bureaucrat bureaucrat = Bureaucrat("bureaucrat", 100);
    std::cout << "Name of bureaucrat is: " << bureaucrat.getName() << std::endl;
    std::cout << "Grade of bureaucrat is: " << bureaucrat.getGrade() << std::endl;
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
    std::cout << std::endl;


    std::cout << "   ***check ShrubberyCreationForm***" << std::endl;
    ShrubberyCreationForm shrubbery_creation_form = ShrubberyCreationForm("home");
    std::cout << "Target of shrubbery_creation_form is: " << shrubbery_creation_form.getTarget() << std::endl;
    std::cout << shrubbery_creation_form;

    shrubbery_creation_form.beSigned(bureaucrat);
    std::cout << "after signed: " << shrubbery_creation_form;

    ShrubberyCreationForm shrubbery_creation_form_copy = ShrubberyCreationForm(shrubbery_creation_form);
    std::cout << "shrubbery_creation_form_copy is : " << shrubbery_creation_form_copy;
    ShrubberyCreationForm shrubbery_creation_form_equal = shrubbery_creation_form;
    std::cout << "shrubbery_creation_form_equal is : " << shrubbery_creation_form_equal;
    ShrubberyCreationForm shrubbery_creation_form_const = ShrubberyCreationForm("some_target");
    std::cout << "shrubbery_creation_form_const is : " << shrubbery_creation_form_const;
    shrubbery_creation_form_const = shrubbery_creation_form;
    std::cout << "after equal shrubbery_creation_form_const is : " << shrubbery_creation_form_const;

    shrubbery_creation_form.execute(bureaucrat);
    Bureaucrat bureaucrat_low_grade = Bureaucrat("bureaucrat_low_grade", 150);
    try
    {
        shrubbery_creation_form.execute(bureaucrat_low_grade);
    }
    catch (std::exception & e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }

    ShrubberyCreationForm shrubbery_creation_form_not_signed = ShrubberyCreationForm("not_signed_smth");
    std::cout << shrubbery_creation_form_not_signed;
    shrubbery_creation_form_not_signed.execute(bureaucrat);

    std::cout << std::endl;

    return 0;
}