#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
//        Ice() : AMateria("ice");
        virtual ~Ice();
        Ice(Ice const &src);
        Ice & operator=(Ice const &src);
        std::string const & getType() const; //Returns the materia type
        unsigned int getXP() const; //Returns the Materia's XP
        virtual Ice* clone() const;
        virtual void use(ICharacter& target);
};