#include <iostream>
#include <string>
//#include "AMateria.hpp"
#include "ICharacter.hpp"

int const SIZE = 4;

class Character : public ICharacter
{
    private:
        std::string _name;
        int _materia_num;
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
};