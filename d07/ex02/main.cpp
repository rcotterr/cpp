#include <iostream>
#include <string>
#include "Array.hpp"


int main(void) {

    std::cout << "***check Array***" << std::endl;
    Array<int> a;
    Array<int> b(4);

    std::cout << "Array size of b is: " << b.size() << std::endl;

    std::cout << "The second element of b is: " << b[2] << std::endl;
    b[2] = 5;
    std::cout << "After change the second element of b is: " << b[2] << std::endl;

    Array<int> c = b;
    std::cout << "The second element of c is: " << c[2] << std::endl;

    Array<int> d(b);
    std::cout << "The second element of d is: " << d[2] << std::endl;

    std::cout << "Check out of limits:" << std::endl;
    try {
        b[35];
    }
    catch (std::exception) {
        std::cout << "Exception caught"  << std::endl;
    }

    try {
        b[-1];
    }
    catch (std::exception) {
        std::cout << "Exception caught"  << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Check char array" << std::endl;
    Array<char> char_arr_a;
    Array<char> char_arr_b(5);
    try {
        char_arr_a[0];
    }
    catch (std::exception) {
        std::cout << "Exception caught"  << std::endl;
    }

    char_arr_b[2] = 'a';
    std::cout << "The second element of char_arr_b is: " << char_arr_b[2] << std::endl;
    std::cout << std::endl;

    std::cout << "Check float array" << std::endl;
    Array<float> float_arr_a;
    Array<float> float_arr_b(5);
    try {
        float_arr_a[0];
    }
    catch (std::exception) {
        std::cout << "Exception caught"  << std::endl;
    }

    float_arr_b[2] = 5.1;
    std::cout << "The second element of float_arr_b is: " << float_arr_b[2] << std::endl;

    return 0;
}
