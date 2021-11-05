#include <iostream>
#include <string>
#include "SuperMutant.hpp"


class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        RadScorpion(RadScorpion const &src);
        virtual ~RadScorpion();
        RadScorpion & operator=(RadScorpion const &src);
};