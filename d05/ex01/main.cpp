#include <iostream>
#include <string>
#include "Form.hpp"

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


    std::cout << "   ***check Form***" << std::endl;
    Form form = Form("form", 10, 100);
    std::cout << "Name of form is: " << form.getName() << std::endl;
    std::cout << "Sign grade of form is: " << form.getSignGrade() << std::endl;
    std::cout << "Execute grade of form is: " << form.getExecuteGrade() << std::endl;
    std::cout << "Signed of form is: " << form.getIsSigned() << std::endl;
    std::cout << form;
    Bureaucrat bureaucrat_sign = Bureaucrat("bureaucrat_sign", 5);
    form.beSigned(bureaucrat_sign);
    std::cout << "after signed: " << form;
    form.beSigned(bureaucrat_sign);

    Form form_copy = Form(form);
    std::cout << "form_copy is : " << form_copy;
    Form form_equal = form;
    std::cout << "form_equal is : " << form_equal;
    Form form_const = Form("some_const_name", 70, 71);
    std::cout << "form_const is : " << form_const;
    form_const = form;
    std::cout << "after equal form_const is : " << form_const;

    try
    {
        Form form_big_sign_grade = Form("form_big_sign_grade", 0, 10);
    }
    catch (std::exception & e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }

    try
    {
        Form form_big_exec_grade = Form("form_big_exec_grade", 5, 0);
    }
    catch (std::exception & e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }

    try
    {
        Form form_big_sign_grade = Form("form_low_sign_grade", 151, 10);
    }
    catch (std::exception & e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }

    try
    {
        Form form_big_exec_grade = Form("form_low_exec_grade", 5, 152);
    }
    catch (std::exception & e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }

    Form some_form = Form("some_form", 1, 100);
    try
    {
        some_form.beSigned(bureaucrat);
    }
    catch (std::exception & e)
    {
        std::cout << "signed exception: " << e.what() << std::endl;
    }

    std::cout << std::endl;

    return 0;
}