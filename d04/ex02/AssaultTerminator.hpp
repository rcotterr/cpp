#include "TacticalMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator();
        ~AssaultTerminator();
        AssaultTerminator(AssaultTerminator const &src);
        AssaultTerminator & operator=(AssaultTerminator const &src);
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};