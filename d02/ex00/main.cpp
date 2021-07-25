#include <iostream>
#include "Fixed.hpp"


int main( void ) {
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

//    uncomment here to check setRawBits
//    int const rawBits = 10860;
//    Fixed e;
//    e.setRawBits(rawBits);
//    std::cout << "Raw bits from number is " << e.getRawBits() << std::endl;

    return 0;
}