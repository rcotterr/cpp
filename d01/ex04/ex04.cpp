#include <iostream>
#include <string>


int main() {
    std::string hello_str = "HI THIS IS BRAIN";

    std::string *ptr = &hello_str;
    std::string &ref = hello_str;

    std::cout << "This is pointer to string " << *ptr << std::endl;
    std::cout << "This is references to string " << ref << std::endl;

    return 0;
}
