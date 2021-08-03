#include <iostream>
#include <string>
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    public:
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &src);
        ~DiamondTrap();
        DiamondTrap & operator=(DiamondTrap const &src);
        void whoAmI(void);
        using ScavTrap::attack;

    private:
        std::string _name;
        using FragTrap::_hit_points;
        using ScavTrap::_energy_points;
        using FragTrap::_attack_damage;
};