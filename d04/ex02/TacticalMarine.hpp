#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        ~TacticalMarine();
        TacticalMarine(TacticalMarine const &src);
        TacticalMarine & operator=(TacticalMarine const &src);
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};