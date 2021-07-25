#include <iostream>
#include <string>
#include "ZombieHorde.hpp"


int main() {
	Zombie first_zombie = Zombie("Petya", "silly zomb");
	first_zombie.announce();

    ZombieHorde horde = ZombieHorde(5);
    horde.announce();
	return 0;
}
