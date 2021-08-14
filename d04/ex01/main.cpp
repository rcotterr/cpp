#include <iostream>
#include <string>
#include "PowerFist.hpp"


int main() {

    std::cout << "   ***check PlasmaRifle***" << std::endl;
    PlasmaRifle plasma_rifle = PlasmaRifle();
    PlasmaRifle plasma_rifle_new = PlasmaRifle(plasma_rifle);
    std::cout << "name of plasma_rifle is : " << plasma_rifle.getName() << std::endl;
    plasma_rifle.attack();
    std::cout << std::endl;

    std::cout << "   ***check PowerFist***" << std::endl;
    PowerFist power_fist = PowerFist();
    PowerFist power_fist_new = PowerFist(power_fist);
    std::cout << "name of power_fist is : " << power_fist.getName() << std::endl;
    power_fist.attack();
    std::cout << std::endl;

    return 0;
}