#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

int const SIZE_SOURCE = 4;

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _container[SIZE_SOURCE];

    public:
        MateriaSource(MateriaSource const &src);
        MateriaSource();
        ~MateriaSource();
        MateriaSource & operator=(MateriaSource const &src);
        AMateria * getMateria(int idx) const;
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};