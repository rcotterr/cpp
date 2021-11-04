#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        virtual ~Ice();
        Ice(Ice const &src);
        virtual Ice* clone() const;
        virtual void use(ICharacter& target);
};