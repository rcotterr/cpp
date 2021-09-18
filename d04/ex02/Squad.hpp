#include <iostream>
#include <vector>
#include "ISquad.hpp"

class Squad : public ISquad
{
    private:
        std::vector<ISpaceMarine *> _container;

    public:
        Squad();
        Squad(Squad const &src);
        Squad & operator=(Squad const &src);
        virtual ~Squad();
        virtual int getCount() const;
        virtual ISpaceMarine* getUnit(int i) const;
        virtual int push(ISpaceMarine* space_marine);
};