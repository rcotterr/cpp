#include <iostream>
#include <string>
#include <vector>
#include "span.hpp"


int main(void) {
    Span sp = Span(5);
    std::cout << sp;

    try {
        sp.longestSpan();
    }
    catch (const std::exception& e) {
        std::cout << "While finding longest span in empty sp: " << e.what() << std::endl;
    }
    sp.addNumber(4);
    try {
        sp.longestSpan();
    }
    catch (const std::exception& e) {
        std::cout << "While finding longest span in only one elem sp: " << e.what() << std::endl;
    }
    sp.addNumber(3);
    sp.addNumber(2);
    sp.addNumber(5);
    sp.addNumber(0);
    std::cout << sp;
    try {
        sp.addNumber(1);
    }
    catch (const std::exception& e) {
        std::cout << "While adding a number " << e.what() << std::endl;
    }

    std::cout << "Longest span of sp is:  " << sp.longestSpan() << std::endl;



    Span sp_copy = Span(sp);
    std::cout << "After copy constructor sp_copy is: " << sp_copy;
    Span sp_equal = sp;
    std::cout << "After operator= sp_equal is: " << sp_equal;

    return 0;
}