#include <iostream>
#include <string>
#include "FragTrap.hpp"


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

    return 0;
}