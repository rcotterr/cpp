#include <iostream>
#include <string>
#include "PowerFist.hpp"
#include "RadScorpion.hpp"


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

    std::cout << "   ***check SuperMutant***" << std::endl;
    SuperMutant super_mutant = SuperMutant();
    SuperMutant super_mutant_new = SuperMutant(super_mutant);
    std::cout << "type of super_mutant is : " << super_mutant.getType() << std::endl;
    std::cout << "hp of super_mutant is : " << super_mutant.getHP() << std::endl;
    super_mutant.takeDamage(9);
    std::cout << "after takeDamage(9) hp of super_mutant is : " << super_mutant.getHP() << std::endl;
    std::cout << std::endl;

    std::cout << "   ***check RadScorpion***" << std::endl;
    RadScorpion red_scorpion = RadScorpion();
    RadScorpion red_scorpion_new = RadScorpion(red_scorpion);
    std::cout << "type of red_scorpion is : " << red_scorpion.getType() << std::endl;
    std::cout << "hp of red_scorpion is : " << red_scorpion.getHP() << std::endl;
    red_scorpion.takeDamage(9);
    std::cout << "after takeDamage(9) hp of red_scorpion is : " << red_scorpion.getHP() << std::endl;
    std::cout << std::endl;

    return 0;
}