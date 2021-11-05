#include <iostream>
#include <string>
#include "OneMoreWeapon.hpp"

class PowerFist : public AWeapon
{

    public:
        PowerFist();
        PowerFist(PowerFist const &src);
        virtual ~PowerFist();
        PowerFist & operator=(PowerFist const &src);
        std::string virtual getName() const;
        virtual void attack() const;
};