#include <iostream>
#include <string>
#include "Ice.hpp"
#include "Character.hpp"


int main() {

    std::cout << "   ***check Ice***" << std::endl;
    AMateria *ice = new Ice();
    std::cout << "Type of AMateria is: " << ice->getType() << std::endl;
    std::cout << "XP of AMateria is: " << ice->getXP() << std::endl;
    AMateria *ice_clone = ice->clone();
    std::cout << "Clone of ice has been made; type of clone is: " << ice_clone->getType() << std::endl;

    Ice ice_to_copy = Ice();
    Ice ice_new_overload = Ice(ice_to_copy);
    std::cout << std::endl;

    std::cout << "   ***check Character***" << std::endl;
    ICharacter *character = new Character("character");
    std::cout << "New character has been created with name: " << character->getName() << std::endl;
    character->equip(ice);
    character->unequip(0);



    //    ice->use();
    // connections (a lot of materia, no materia at all and so on)

//    make the same for Character
//    Ice ice_to_copy = Ice();
//    Ice ice_new_overload = Ice(ice_to_copy);
//    std::cout << std::endl;

    delete ice;
    delete ice_clone;
    delete character;



//    std::cout << "   ***check SubjectMain***" << std::endl;
//
//    IMateriaSource* src = new MateriaSource();
//    src->learnMateria(new Ice());
//    src->learnMateria(new Cure());
//    ICharacter* me = new Character("me");
//    AMateria* tmp;
//    tmp = src->createMateria("ice");
//    me->equip(tmp);
//    tmp = src->createMateria("cure");
//    me->equip(tmp);
//    ICharacter* bob = new Character("bob");
//    me->use(0, *bob);
//    me->use(1, *bob);
//    delete bob;
//    delete me;
//    delete src;
//
//    std::cout << std::endl;
//    std::cout << "   ***end of check SubjectMain***" << std::endl;

    return 0;
}