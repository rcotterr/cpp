#include <iostream>
#include <string>
#include "ZombieEvent.hpp"


int main() {
	Zombie first_zombie = Zombie("Petya", "silly zomb");
	first_zombie.announce();

	ZombieEvent event = ZombieEvent();
	event.setZombieType("smart zomb");

	Zombie* second_zombie = event.newZombie("Vasya");
	second_zombie->announce();
	delete second_zombie;

	Zombie* third_zombie = event.randomChump();
	delete third_zombie;

	return 0;
}
