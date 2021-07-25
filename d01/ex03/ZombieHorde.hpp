#include <iostream>
#include <string>
#include "Zombie.hpp"


class ZombieHorde {
    public:
        ZombieHorde(int n);
        ~ZombieHorde(void);
        void announce(void) const;

    private:
        Zombie ** _horde_array;
        int _num;
};