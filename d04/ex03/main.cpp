#include <iostream>
#include <string>
#include "Ice.hpp"


int main() {

    std::cout << "   ***check Ice***" << std::endl;
    AMateria *ice = new Ice();
    std::cout << ice->getType() << std::endl;

    delete ice;


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