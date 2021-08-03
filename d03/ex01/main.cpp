#include <iostream>
#include <string>
#include "ScavTrap.hpp"


int main() {
    ClapTrap clap_trap1 = ClapTrap("clap_trap1");

    ScavTrap scav_trap1 = ScavTrap("scav_trap1");
    ScavTrap scav_trap2(scav_trap1);

    scav_trap1.attack("target1");
    scav_trap1.takeDamage(5);
    scav_trap1.beRepaired(5);
    scav_trap1.guardGate();
    return 0;
}