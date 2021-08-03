#include <iostream>
#include <string>

class ClapTrap {
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &src);
        ~ClapTrap();
        ClapTrap & operator=(ClapTrap const &src);
        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);


    protected:
        std::string _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;



};