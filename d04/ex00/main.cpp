#include <iostream>
#include <string>
#include "Sorcerer.hpp"


int main() {
    Sorcerer robert = Sorcerer("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");

    std::cout << robert << jim << joe;

    robert.polymorph(jim);
    robert.polymorph(joe);

    return 0;
}