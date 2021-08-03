#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap();
        ScavTrap & operator=(ScavTrap const &src);
        void guardGate(void);
};