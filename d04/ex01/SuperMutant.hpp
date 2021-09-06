#include <iostream>
#include <string>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        SuperMutant(SuperMutant const &src);
        virtual ~SuperMutant();
//        SuperMutant & operator=(SuperMutant const &src);
        virtual void takeDamage(int damage);
};