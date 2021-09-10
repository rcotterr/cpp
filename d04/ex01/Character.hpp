#include <iostream>
#include <string>
#include "PowerFist.hpp"
#include "RadScorpion.hpp"

class Character
{
    private:
        std::string _name;
        int _ap;
        AWeapon* _weapon;

    public:
        Character(std::string const & name);
        Character(Character const &src);
        virtual ~Character();
        Character & operator=(Character const &src);
        void recoverAP();
        void equip(AWeapon* weapon);
        void attack(Enemy* enemy);
        std::string const getName() const; //[...]? const?
        int getAp() const; //[...]? const?
        AWeapon* getWeapon() const; //[...]? const?
};


std::ostream & operator<<( std::ostream & o, Character const & src);