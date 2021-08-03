#include <iostream>
#include <string>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name) {
    std::cout << "DiamondTrap construtor called for " << name << std::endl;
    this->_name = name;
    ClapTrap::_name = name + "_clap_name";
    std::cout << "ClapTrap::_name is initialized to " << ClapTrap::_name << std::endl;
    std::cout << "_hit_points is " << this->_hit_points << std::endl;
    std::cout << "_energy_points is " << this->_energy_points << std::endl;
    std::cout << "_attack_damage is " << this->_attack_damage << std::endl;
    return;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap destructor called for " << this->_name << std::endl;
    return;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ScavTrap(src), FragTrap(src) {
    std::cout << "DiamondTrap copy construtor called for " << src._name << std::endl;
    *this = src;
    return;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &src) {
    std::cout << "DiamondTrap operator = called for " << src._name << std::endl;
    this->_name = src._name;
    this->_hit_points = src._hit_points;
    this->_energy_points = src._energy_points;
    this->_attack_damage = src._attack_damage;
    return *this;
}


void DiamondTrap::whoAmI(void) {
    std::cout << "My name is: " << this->_name << " and ClapTrap name is: " << ClapTrap::_name << std::endl;

}