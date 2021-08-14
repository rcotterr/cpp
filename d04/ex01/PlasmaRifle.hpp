#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

    public:
        PlasmaRifle();
        PlasmaRifle(PlasmaRifle const &src);
        virtual ~PlasmaRifle();
        PlasmaRifle & operator=(PlasmaRifle const &src);
        std::string virtual getName() const;
        virtual void attack() const;
};