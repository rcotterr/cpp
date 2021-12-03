#include <iostream>
#include <string>
#include <vector>
#include "easyfind.hpp"


int main(void) {

    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);

    std::cout << std::boolalpha << "Find elem: " << easyfind<std::vector<int> >(v, 1) << std::endl;
    std::cout << "Find elem: " << easyfind<std::vector<int> >(v, 3) << std::endl;
    std::cout << "Find elem: " << easyfind<std::vector<int> >(v, 5) << std::endl;
    try {
        bool el = easyfind<std::vector<int> >(v, 0);
        std::cout << "Find elem: " << el << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
