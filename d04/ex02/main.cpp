#include "Squad.hpp"

int main() {

    std::cout << "   ***check TacticalMarine***" << std::endl;
    TacticalMarine tactical_marine = TacticalMarine();
    TacticalMarine tactical_marine_new = TacticalMarine(tactical_marine);
    tactical_marine.battleCry();
    tactical_marine.rangedAttack();
    tactical_marine.meleeAttack();
    std::cout << std::endl;

    std::cout << "   ***check AssaultTerminator***" << std::endl;
    AssaultTerminator assault_terminator = AssaultTerminator();
    AssaultTerminator assault_terminator_new = AssaultTerminator(assault_terminator);
    assault_terminator.battleCry();
    assault_terminator.rangedAttack();
    assault_terminator.meleeAttack();
    std::cout << std::endl;


    std::cout << "   ***check Squad***" << std::endl;
    ISquad * squad = new Squad();
    Squad squad1 = Squad();
    Squad squad_new = Squad(squad1);
    TacticalMarine * tactical_marine_pointer = new TacticalMarine();
    int i = squad->push(tactical_marine_pointer);
    std::cout << "index of tactical_marine in squad is : " << i << std::endl;
    ISpaceMarine* tactical_marine_from_squad = squad->getUnit(i);
    std::cout << "equal tactical marines : " << (tactical_marine_pointer == tactical_marine_from_squad) << std::endl;
    std::cout << "size of squad is : " << squad->getCount() << std::endl;
    delete squad;
    std::cout << std::endl;
    //TODO check null, same pointer, out of size, negative index


    std::cout << "   ***check SubjectMain***" << std::endl;
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;

    std::cout << std::endl;
    std::cout << "   ***end of check SubjectMain***" << std::endl;

    return 0;
}