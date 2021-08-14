#include <iostream>
#include <string>

class AWeapon
{
    private:
        std::string _name;
        int _apcost;
        int _damage;

    public:
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const &src);
        virtual ~AWeapon();
//        ~AWeapon();
        AWeapon & operator=(AWeapon const &src);
        std::string virtual getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
};
