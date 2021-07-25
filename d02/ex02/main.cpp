#include <iostream>
#include "Fixed.hpp"

int main_for_check( void ) {

    Fixed a(5);
    Fixed b(5);
    Fixed c(10);

    bool result;

    result = a == b;
    std::cout << "a == b: " << result << std::endl;
    result = a == c;
    std::cout << "a == c: " << result << std::endl;

    result = a != b;
    std::cout << "a != b: " << result << std::endl;
    result = a != c;
    std::cout << "a != c: " << result << std::endl;

    result = a > b;
    std::cout << "a > b: " << result << std::endl;
    result = a > c;
    std::cout << "a > c: " << result << std::endl;

    result = a < b;
    std::cout << "a < b: " << result << std::endl;
    result = a < c;
    std::cout << "a < c: " << result << std::endl;

    result = a >= b;
    std::cout << "a >= b: " << result << std::endl;
    result = a >= c;
    std::cout << "a >= c: " << result << std::endl;

    result = a <= b;
    std::cout << "a <= b: " << result << std::endl;
    result = a <= c;
    std::cout << "a <= c: " << result << std::endl;


    Fixed d = a + b;
    std::cout << "d: " << d << std::endl;
    Fixed e = a - b;
    std::cout << "e: " << e << std::endl;

    Fixed f = a * b;
    std::cout << "f: " << f << std::endl;
    Fixed g = a / b;
    std::cout << "g: " << g << std::endl;
    Fixed k = Fixed(5.5555555555f);
    Fixed l = k / b;
    std::cout << "l: " << l << std::endl;



    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a: " << a << std::endl;


    std::cout << "--b: " << --b << std::endl;
    std::cout << "b--: " << b-- << std::endl;
    std::cout << "b: " << b << std::endl;


    std::cout << "Min is: " << Fixed::min( a, b ) << std::endl;
    std::cout << "Max is: " << Fixed::max( a, b ) << std::endl;

    const Fixed h(1);
    const Fixed i;
    std::cout << "Min is: " << Fixed::min( h, i ) << std::endl;
    std::cout << "Max is: " << Fixed::max( h, i ) << std::endl;

    return 0;
}


int main( void ) {

    Fixed a;

    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}