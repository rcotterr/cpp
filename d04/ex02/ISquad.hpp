#include "AssaultTerminator.hpp"

class ISquad
{
    public:
        virtual ~ISquad() {}
        virtual int getCount() const = 0;
        virtual ISpaceMarine* getUnit(int i) const = 0;
        virtual int push(ISpaceMarine* space_marine) = 0;
};