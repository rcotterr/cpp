#include <iostream>
#include <string>
#include <vector>
#include "span.hpp"


int main(void) {
    Span sp = Span(5);
    std::cout << sp << std::endl;
    sp.addNumber(4);
    sp.addNumber(3);
    sp.addNumber(2);
    sp.addNumber(5);
    sp.addNumber(0);
    std::cout << sp << std::endl;


    return 0;
}