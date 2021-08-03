#include <iostream>
#include <string>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap construtor called for " << name << std::endl;
    this->_name = name;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    return;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap destructor called for " << this->_name << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {
    std::cout << "ScavTrap copy construtor called for " << src._name << std::endl;
    *this = src;
    return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &src) {
    std::cout << "ScavTrap operator = called for " << src._name << std::endl;
    this->_name = src._name;
    this->_hit_points = src._hit_points;
    this->_energy_points = src._energy_points;
    this->_attack_damage = src._attack_damage;
    return *this;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap has enterred in Gate keeper mood" << std::endl;
}