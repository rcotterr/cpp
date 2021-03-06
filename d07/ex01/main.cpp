#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void foo(T const var) {
    std::cout << "Foo var is: " << var << std::endl;
}

template <typename T>
void another_foo(T const var) {
    std::cout << "Another foo var is: " << var << std::endl;
}

template <typename T>
void one_more_foo(T const var) {
    std::cout << "One more foo var is: " << var << std::endl;
}


int main(void) {
    const int len_arr_int = 3;
    const int len_arr_char = 5;
    const int len_arr_float = 2;
    int arr_int[len_arr_int] = {1, 2, 3};
    char arr_char[len_arr_char] = {'a', 'b', 'c', 'd', 'e'};
    float arr_float[len_arr_float] = {1.5, 2.0};

    std::cout << "***check int array with foo***" << std::endl;
    iter<int>(arr_int, len_arr_int, foo);
    std::cout << std::endl;

    std::cout << "***check char array with another_foo***" << std::endl;
    iter<char>(arr_char, len_arr_char, another_foo);
    std::cout << std::endl;

    std::cout << "***check float array with one_more_foo***" << std::endl;
    iter<float>(arr_float, len_arr_float, one_more_foo);
    std::cout << std::endl;

    return 0;
}
