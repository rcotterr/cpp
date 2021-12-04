#include <iostream>
#include <string>
#include <vector>
#include "span.hpp"


int main(void) {
    Span span = Span(5);
    std::cout << span;

    try {
        span.longestSpan();
    }
    catch (const std::exception& e) {
        std::cout << "While finding longest span in empty span: " << e.what() << std::endl;
    }
    try {
        span.shortestSpan();
    }
    catch (const std::exception& e) {
        std::cout << "While finding shortest span in empty span: " << e.what() << std::endl;
    }

    span.addNumber(4);

    try {
        span.longestSpan();
    }
    catch (const std::exception& e) {
        std::cout << "While finding longest span in only one elem span: " << e.what() << std::endl;
    }
    try {
        span.shortestSpan();
    }
    catch (const std::exception& e) {
        std::cout << "While finding shortest span in only one elem span: " << e.what() << std::endl;
    }

    span.addNumber(3);
    span.addNumber(2);
    span.addNumber(-5);
    span.addNumber(0);
    std::cout << span;
    try {
        span.addNumber(1);
    }
    catch (const std::exception& e) {
        std::cout << "While adding a number " << e.what() << std::endl;
    }

    std::cout << "Longest span of span is:  " << span.longestSpan() << std::endl;
    std::cout << "Shortest span of span is:  " << span.shortestSpan() << std::endl;


    Span span_copy = Span(span);
    std::cout << "After copy constructor span_copy is: " << span_copy;
    Span span_equal = span;
    std::cout << "After operator= span_equal is: " << span_equal;

    std::cout << "***Check subject main***" << std::endl;
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    return 0;
}