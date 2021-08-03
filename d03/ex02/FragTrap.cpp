#include <iostream>
#include <string>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap construtor called for " << name << std::endl;
    this->_name = name;
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    return;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap destructor called for " << this->_name << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {
    std::cout << "FragTrap copy construtor called for " << src._name << std::endl;
    *this = src;
    return;
}

FragTrap & FragTrap::operator=(FragTrap const &src) {
    std::cout << "FragTrap operator = called for " << src._name << std::endl;
    this->_name = src._name;
    this->_hit_points = src._hit_points;
    this->_energy_points = src._energy_points;
    this->_attack_damage = src._attack_damage;
    return *this;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap requests high fives" << std::endl;
}