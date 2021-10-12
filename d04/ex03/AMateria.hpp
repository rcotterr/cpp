#include <iostream>
#include <string>

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class ICharacter;

class AMateria
{
    protected:
        std::string _type;
        unsigned int _xp;

    public:
        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria(AMateria const &src);
        AMateria & operator=(AMateria const &src);
        std::string const & getType() const; //Returns the materia type
        unsigned int getXP() const; //Returns the Materia's XP
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target); //TODO xp++ here but print in inherited classes
};

#endif