#include <iostream>
#include <string>
#include <vector>
#include "span.hpp"


int main(void) {
    Span sp = Span(5);
    std::cout << sp;
    sp.addNumber(4);
    sp.addNumber(3);
    sp.addNumber(2);
    sp.addNumber(5);
    sp.addNumber(0);
    std::cout << sp << std::endl;

    Span sp_copy = Span(sp);
    std::cout << "After copy constructor sp_copy is: " << sp_copy;
    Span sp_equal = sp;
    std::cout << "After operator= sp_equal is: " << sp_equal;

    return 0;
}