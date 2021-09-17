#include <iostream>
#include <vector>
#include "ISquad.hpp"

class Squad : ISquad
{
    private:
        std::vector _container;

    public:
        Squad();
        Squad(Squad const &src);
        Squad & operator=(Squad const &src);
        virtual ~ISquad();
        virtual int getCount() const;
        virtual ISpaceMarine* getUnit(int i) const;
        virtual int push(ISpaceMarine* space_marine);
};