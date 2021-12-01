#include <iostream>
#include <string>
#include "whatever.hpp"


int main(void) {

    int a_int = 5;
    int b_int = 6;
    int c_int = 5;

    float a_float = 5.1;
    float b_float = 6.1;
    float c_float = 5.1;

    char a_char = 'a';
    char b_char = 'b';
    char c_char = 'a';


    std::cout << "***Check max***" << std::endl;

    std::cout << "Max of ints " << a_int << " and " << b_int << " is: ";
    std::cout << max<int> (a_int, b_int) << std::endl;
    std::cout << "Max of ints " << a_int << " and " << c_int << " is: ";
    std::cout << max<int> (a_int, c_int) << std::endl;

    std::cout << "Max of floats " << a_float << " and " << b_float << " is: ";
    std::cout << max<float> (a_float, b_float) << std::endl;
    std::cout << "Max of floats " << a_float << " and " << c_float << " is: ";
    std::cout << max<float> (a_float, c_float) << std::endl;

    std::cout << "Max of chars " << a_char << " and " << b_char << " is: ";
    std::cout << max<char> (a_char, b_char) << std::endl;
    std::cout << "Max of chars " << a_char << " and " << c_char << " is: ";
    std::cout << max<char> (a_char, c_char) << std::endl;
    std::cout << std::endl;

    std::cout << "***Check min***" << std::endl;

    std::cout << "Min of ints " << a_int << " and " << b_int << " is: ";
    std::cout << min<int> (a_int, b_int) << std::endl;
    std::cout << "Min of ints " << a_int << " and " << c_int << " is: ";
    std::cout << min<int> (a_int, c_int) << std::endl;

    std::cout << "Min of floats " << a_float << " and " << b_float << " is: ";
    std::cout << min<float> (a_float, b_float) << std::endl;
    std::cout << "Min of floats " << a_float << " and " << c_float << " is: ";
    std::cout << min<float> (a_float, c_float) << std::endl;

    std::cout << "Min of chars " << a_char << " and " << b_char << " is: ";
    std::cout << min<char> (a_char, b_char) << std::endl;
    std::cout << "Min of chars " << a_char << " and " << c_char << " is: ";
    std::cout << min<char> (a_char, c_char) << std::endl;
    std::cout << std::endl;

    std::cout << "***Check swap***" << std::endl;

    std::cout << "Swap of ints " << a_int << " and " << b_int << std::endl;
    swap<int> (a_int, b_int);
    std::cout << "After swap ints: " << a_int << " and " << b_int << std::endl;

    std::cout << "Swap of floats " << a_float << " and " << b_float << std::endl;
    swap<float> (a_float, b_float);
    std::cout << "After swap floats: " << a_float << " and " << b_float << std::endl;

    std::cout << "Swap of chars " << a_char << " and " << b_char << std::endl;
    swap<char> (a_char, b_char);
    std::cout << "After swap chars: " << a_char << " and " << b_char << std::endl;
    std::cout << std::endl;

    std::cout << "***Check subject main***" << std::endl;
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return 0;
}
