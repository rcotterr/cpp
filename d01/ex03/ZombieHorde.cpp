#include <iostream>
#include <string>
#include "ZombieHorde.hpp"


ZombieHorde::ZombieHorde(int n) {
    std::string name;
    const int size = 5;

    std::cout << "A new zombie horde was created! Number of zombies - " << n << std::endl;
    this->_horde_array = new Zombie *[n];
    this->_num = n;
    std::string array[size] = {"Vanya", "Katya", "Sasha", "Masha", "Dasha"};
    for (int i = 0; i < n; i++) {
	    name = array[std::rand() % size];
        this->_horde_array[i] = new Zombie(name, "a part of horde");
    }
    return;
}


ZombieHorde::~ZombieHorde(void) {
    std::cout << "Zombie horde was destructed!" << std::endl;
    for (int i = 0; i < this->_num; i++)
        delete this->_horde_array[i];
    delete this->_horde_array;
    return;
}


void ZombieHorde::announce(void) const {
    for (int i = 0; i < this->_num; i++)
        this->_horde_array[i]->announce();
}