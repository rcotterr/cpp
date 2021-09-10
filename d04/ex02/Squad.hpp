#include <iostream>
#include "ISquad.hpp"

class Squad
{
    public:
        virtual ~ISquad();
        virtual int getCount() const;
        virtual ISpaceMarine* getUnit(int) const;
        virtual int push(ISpaceMarine*);
};