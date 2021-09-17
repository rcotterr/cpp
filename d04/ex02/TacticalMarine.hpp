#include "ISpaceMarine.hpp"

class TacticalMarine
{
    public:
        virtual ~TacticalMarine() {}
        virtual TacticalMarine* clone();
        virtual void battleCry();
        virtual void rangedAttack();
        virtual void meleeAttack();
};