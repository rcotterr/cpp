#include <iostream>
#include <string>
#include "ClapTrap.hpp"


int main() {
    ClapTrap clap_trap1 = ClapTrap("clap_trap1");
    ClapTrap clap_trap2 = clap_trap1;

    ClapTrap clap_trap3 = ClapTrap("clap_trap3");
    ClapTrap clap_trap4(clap_trap3);

    clap_trap1.attack("target1");
    clap_trap1.takeDamage(5);
    clap_trap1.beRepaired(5);

    return 0;
}