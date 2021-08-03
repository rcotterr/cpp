#include <iostream>
#include <string>
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap(std::string name);
        FragTrap(FragTrap const &src);
        ~FragTrap();
        FragTrap & operator=(FragTrap const &src);
        void highFivesGuys(void);
};