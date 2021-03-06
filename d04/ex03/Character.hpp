#include <iostream>
#include <string>
#include "ICharacter.hpp"

int const SIZE = 4;

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria* _container[SIZE];

    public:
        Character(Character const &src);
        ~Character();
        Character & operator=(Character const &src);
        Character(std::string const & name);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        AMateria * getMateria(int idx) const;
};