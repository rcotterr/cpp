#include <iostream>
#include <string>
#include "Sorcerer.hpp"


int main() {
    Sorcerer robert = Sorcerer("Robert", "the Magnificent");
    std::cout << robert;
    Sorcerer new_robert = Sorcerer(robert);

    Victim victim1 = Victim("victim1");
    std::cout << victim1;
    Victim victim2 = Victim(victim1);

    robert.polymorph(victim1);

    Peon peon1 = Peon("peon1");
    Peon peon2 = Peon(peon1);
    peon1.getPolymorphed();
    std::cout << peon1;
    robert.polymorph(peon1);

    Cat cat1 = Cat("cat1");
    Cat cat2 = Cat(cat1);
    cat1.getPolymorphed();
    std::cout << cat1;
    robert.polymorph(cat1);

    return 0;
}