#include <iostream>
#include <string>
#include "PlasmaRifle.hpp"

class OneMoreWeapon : public AWeapon
{

    public:
        OneMoreWeapon();
        OneMoreWeapon(OneMoreWeapon const &src);
        virtual ~OneMoreWeapon();
        OneMoreWeapon & operator=(OneMoreWeapon const &src);
        std::string virtual getName() const;
        virtual void attack() const;
};