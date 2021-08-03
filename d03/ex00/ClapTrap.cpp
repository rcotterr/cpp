#include <iostream>
#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name) {
    std::cout << "ClapTrap construtor called for " << name << std::endl;
    this->_name = name;
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 10;
    return;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap destructor called for " << this->_name << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
    std::cout << "ClapTrap copy construtor called for " << src._name << std::endl;
    *this = src;
    return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &src) {
    std::cout << "ClapTrap operator = called for " << src._name << std::endl;
    this->_name = src._name;
    this->_hit_points = src._hit_points;
    this->_energy_points = src._energy_points;
    this->_attack_damage = src._attack_damage;
    return *this;
}

void ClapTrap::attack(std::string const &target) {
    std::cout << "ClapTrap " << this->_name << " attacks " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << this->_name << " takes damage " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << this->_name << " is repaired " << amount << std::endl;
}
