#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        virtual ~Cure();
        Cure(Cure const &src);
//        Ice & operator=(Ice const &src);
        virtual Cure* clone() const;
        virtual void use(ICharacter& target);
};