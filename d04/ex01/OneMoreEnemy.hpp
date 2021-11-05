#include <iostream>
#include <string>
#include "SuperMutant.hpp"


class OneMoreEnemy : public Enemy
{
    public:
        OneMoreEnemy();
        OneMoreEnemy(OneMoreEnemy const &src);
        virtual ~OneMoreEnemy();
        OneMoreEnemy & operator=(OneMoreEnemy const &src);
};