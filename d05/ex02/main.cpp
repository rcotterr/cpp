#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

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

    std::cout << "   ***check RobotomyRequestForm***" << std::endl;
    RobotomyRequestForm robotomy_request_form = RobotomyRequestForm("equip");
    std::cout << "Target of robotomy_request_form is: " << robotomy_request_form.getTarget() << std::endl;
    std::cout << robotomy_request_form;

    Bureaucrat bureaucrat_high_grade = Bureaucrat("bureaucrat_high_grade", 1);
    robotomy_request_form.beSigned(bureaucrat_high_grade);
    std::cout << "after signed: " << robotomy_request_form;

    RobotomyRequestForm robotomy_request_form_copy = RobotomyRequestForm(robotomy_request_form);
    std::cout << "robotomy_request_form_copy is : " << robotomy_request_form_copy;
    RobotomyRequestForm robotomy_request_form_equal = robotomy_request_form;
    std::cout << "robotomy_request_form_equal is : " << robotomy_request_form_equal;
    RobotomyRequestForm robotomy_request_form_const = RobotomyRequestForm("some_target");
    std::cout << "robotomy_request_form_const is : " << robotomy_request_form_const;
    robotomy_request_form_const = robotomy_request_form;
    std::cout << "after equal robotomy_request_form_const is : " << robotomy_request_form_const;

    robotomy_request_form.execute(bureaucrat_high_grade);
    try
    {
        robotomy_request_form.execute(bureaucrat_low_grade);
    }
    catch (std::exception & e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }

    RobotomyRequestForm robotomy_request_form_not_signed = RobotomyRequestForm("not_signed_smth");
    std::cout << robotomy_request_form_not_signed;
    robotomy_request_form_not_signed.execute(bureaucrat_high_grade);

    std::cout << std::endl;

    std::cout << "   ***check PresidentialPardonForm***" << std::endl;
    PresidentialPardonForm presidential_pardon_form = PresidentialPardonForm("equip");
    std::cout << "Target of presidential_pardon_form is: " << presidential_pardon_form.getTarget() << std::endl;
    std::cout << presidential_pardon_form;

    presidential_pardon_form.beSigned(bureaucrat_high_grade);
    std::cout << "after signed: " << presidential_pardon_form;

    PresidentialPardonForm presidential_pardon_form_copy = PresidentialPardonForm(presidential_pardon_form);
    std::cout << "presidential_pardon_form_copy is : " << presidential_pardon_form_copy;
    PresidentialPardonForm presidential_pardon_form_equal = presidential_pardon_form;
    std::cout << "presidential_pardon_form_equal is : " << presidential_pardon_form_equal;
    PresidentialPardonForm presidential_pardon_form_const = PresidentialPardonForm("some_target");
    std::cout << "presidential_pardon_form_const is : " << presidential_pardon_form_const;
    presidential_pardon_form_const = presidential_pardon_form;
    std::cout << "after equal presidential_pardon_form_const is : " << presidential_pardon_form_const;

    presidential_pardon_form.execute(bureaucrat_high_grade);
    try
    {
        presidential_pardon_form.execute(bureaucrat_low_grade);
    }
    catch (std::exception & e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }

    PresidentialPardonForm presidential_pardon_form_not_signed = PresidentialPardonForm("not_signed_smth");
    std::cout << presidential_pardon_form_not_signed;
    presidential_pardon_form_not_signed.execute(bureaucrat_high_grade);

    std::cout << std::endl;




    return 0;
}