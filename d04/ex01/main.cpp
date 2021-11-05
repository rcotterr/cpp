#include <iostream>
#include <string>
#include "Character.hpp"


int main() {

    std::cout << "   ***check PlasmaRifle***" << std::endl;
    PlasmaRifle plasma_rifle = PlasmaRifle();
    PlasmaRifle plasma_rifle_new = PlasmaRifle(plasma_rifle);
    std::cout << "name of plasma_rifle is : " << plasma_rifle.getName() << std::endl;
    plasma_rifle.attack();
    std::cout << std::endl;

    std::cout << "   ***check PowerFist***" << std::endl;
    PowerFist power_fist = PowerFist();
    PowerFist power_fist_new = PowerFist(power_fist);
    std::cout << "name of power_fist is : " << power_fist.getName() << std::endl;
    power_fist.attack();
    std::cout << std::endl;

    std::cout << "   ***check SuperMutant***" << std::endl;
    SuperMutant super_mutant = SuperMutant();
    SuperMutant super_mutant_new = SuperMutant(super_mutant);
    std::cout << "type of super_mutant is : " << super_mutant.getType() << std::endl;
    std::cout << "hp of super_mutant is : " << super_mutant.getHP() << std::endl;
    super_mutant.takeDamage(9);
    std::cout << "after takeDamage(9) hp of super_mutant is : " << super_mutant.getHP() << std::endl;
    SuperMutant super_mutant_copy = SuperMutant(super_mutant);
    std::cout << "after copy super_mutant_copy xp is : " << super_mutant_copy.getHP() << std::endl;
    SuperMutant super_mutant_equal;
    super_mutant_equal = super_mutant;
    std::cout << "after copy super_mutant_equal xp is : " << super_mutant_equal.getHP() << std::endl;
    std::cout << std::endl;

    std::cout << "   ***check RadScorpion***" << std::endl;
    RadScorpion red_scorpion = RadScorpion();
    RadScorpion red_scorpion_new = RadScorpion(red_scorpion);
    std::cout << "type of red_scorpion is : " << red_scorpion.getType() << std::endl;
    std::cout << "hp of red_scorpion is : " << red_scorpion.getHP() << std::endl;
    red_scorpion.takeDamage(9);
    std::cout << "after takeDamage(9) hp of red_scorpion is : " << red_scorpion.getHP() << std::endl;
    RadScorpion red_scorpion_copy = RadScorpion(red_scorpion);
    std::cout << "after copy red_scorpion_copy xp is : " << red_scorpion_copy.getHP() << std::endl;
    RadScorpion red_scorpion_equal;
    red_scorpion_equal = red_scorpion;
    std::cout << "after copy red_scorpion_equal xp is : " << red_scorpion_equal.getHP() << std::endl;
    std::cout << std::endl;

    std::cout << "   ***check Character***" << std::endl;
    Character character = Character("character1");
    Character character_new = Character(character);
    std::cout << "name of character is : " << character.getName() << std::endl;
    std::cout << "ap of character is : " << character.getAp() << std::endl;
    character.recoverAP();
    std::cout << "after recover with max ap of character is : " << character.getAp() << std::endl;
    character.equip(&power_fist);
    character.attack(&red_scorpion);
    std::cout << "after attack power_fist ap of character is : " << character.getAp() << std::endl;
    std::cout << character;
    Character character_equal = character;
    std::cout << "character_equal " << character_equal;
    std::cout << std::endl;


    std::cout << "   ***check SubjectMain***" << std::endl;
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

    std::cout << std::endl;

    return 0;
}