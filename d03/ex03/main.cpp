#include <iostream>
#include <string>
#include "DiamondTrap.hpp"


int main() {
    ClapTrap clap_trap1 = ClapTrap("clap_trap1");

    ScavTrap scav_trap1 = ScavTrap("scav_trap1");
    ScavTrap scav_trap2(scav_trap1);

    scav_trap1.attack("target1");
    scav_trap1.takeDamage(5);
    scav_trap1.beRepaired(5);
    scav_trap1.guardGate();

    FragTrap frag_trap1 = FragTrap("frag_trap1");
    FragTrap frag_trap2(frag_trap1);

    frag_trap1.attack("target1");
    frag_trap1.takeDamage(5);
    frag_trap1.beRepaired(5);
    frag_trap1.highFivesGuys();

    std::cout << "\nTests for DiamondTrap" << std::endl;
    DiamondTrap diamond_trap1 = DiamondTrap("diamond_trap1");

    diamond_trap1.highFivesGuys();
    diamond_trap1.guardGate();

    diamond_trap1.whoAmI();
    diamond_trap1.attack("target2");
    return 0;
}