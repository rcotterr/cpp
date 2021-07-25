#include <iostream>
#include <string>
#include "ZombieEvent.hpp"


ZombieEvent::ZombieEvent(void) {
	std::cout << "Zombie event created!" << std::endl;
	return;
}

ZombieEvent::~ZombieEvent(void) {
	std::cout << "Zombie event destructed!" << std::endl;
	return;
}

void ZombieEvent::setZombieType(std::string type) {
	this->_zombieType = type;
	std::cout << "Now zombie type is " << this->_zombieType << std::endl;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie *new_zomb = new Zombie(name, this->_zombieType);
	return new_zomb;
}

Zombie* ZombieEvent::randomChump(void) {
	const int size = 4;
	std::string array[size] = {"Vanya", "Katya", "Sasha", "Masha"};
	std::string name = array[std::rand() % size];
	Zombie *new_zomb = new Zombie(name, this->_zombieType);
	new_zomb->announce();
	return new_zomb;
}