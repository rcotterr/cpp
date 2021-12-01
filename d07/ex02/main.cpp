#include <iostream>
#include <string>
#include "Array.hpp"


int main(void) {

    std::cout << "***check Array***" << std::endl;
    Array<int> a;
    Array<int> b(4);

    std::cout << "Array size of b is: " << b.size() << std::endl;


    return 0;
}
