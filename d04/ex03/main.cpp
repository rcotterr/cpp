#include <iostream>
#include <string>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"


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


    std::cout << "   ***check Cure***" << std::endl;
    AMateria *cure = new Cure();
    std::cout << "Type of AMateria is: " << cure->getType() << std::endl;
    std::cout << "XP of AMateria is: " << cure->getXP() << std::endl;
    AMateria *cure_clone = cure->clone();
    std::cout << "Clone of cure has been made; type of clone is: " << cure_clone->getType() << std::endl;

    Cure cure_to_copy = Cure();
    Character character_tmp = Character("tmp");
    std::cout << "cure_to_copy xp is : " << cure_to_copy.getXP() << std::endl;
    cure_to_copy.use(character_tmp);
    std::cout << "after use cure_to_copy xp is : " << cure_to_copy.getXP() << std::endl;
    Cure cure_new_overload = Cure(cure_to_copy);
    std::cout << "cure_new_overload xp is : " << cure_new_overload.getXP() << std::endl;
    std::cout << std::endl;


    std::cout << "   ***check Character***" << std::endl;
    ICharacter *character1 = new Character("character1");
    std::cout << "New character has been created with name: " << character1->getName() << std::endl;

    std::cout << "Call character methods: equip, use, unequip" << std::endl;
    Character character2 = Character("character2");
    character1->equip(ice);
    character1->use(0, character2);
    character1->unequip(0);
    std::cout << "Ice xp increased: " << ice->getXP() << std::endl;

    character2.equip(ice);
    character2.equip(cure);
    Character character3 = Character(character2);
    std::cout << "Created character3 with copy constructor: " << character3.getName() << std::endl;

    character1->equip(ice_clone);
    character1->equip(cure_clone);
    delete character1; //delete ice_clone, cure_clone here

    std::cout << std::endl;


    std::cout << "   ***check MateriaSource***" << std::endl;
    MateriaSource *materia_source = new MateriaSource();
    std::cout << "New materia_source has been created" << std::endl;

    std::cout << "Call materia_source methods: learnMateria, createMateria" << std::endl;
    MateriaSource materia_source2 = MateriaSource();
    materia_source2.learnMateria(ice);
    materia_source2.learnMateria(cure);
    AMateria * ice_by_materia_source = materia_source2.createMateria("ice");
    std::cout << "Created ice_by_materia_source with type : " << ice_by_materia_source->getType() << std::endl;
    delete ice_by_materia_source;
    AMateria * cure_by_materia_source = materia_source2.createMateria("cure");
    std::cout << "Created cure_by_materia_source with type : " << cure_by_materia_source->getType() << std::endl;
    delete cure_by_materia_source;

    AMateria * smth = materia_source2.createMateria("some unknown materia");
    std::cout << "Check error unknown materia type : " << smth << std::endl;

    MateriaSource materia_source3 = MateriaSource(materia_source2);
    std::cout << "Created materia_source3 with copy constructor" << std::endl;
    AMateria * cure_by_materia_source_copy = materia_source3.createMateria("cure");
    std::cout << "Created cure_by_materia_source_copy with type : " << cure_by_materia_source_copy->getType() << std::endl;
    delete cure_by_materia_source_copy;

    delete materia_source;
    std::cout << std::endl;


    std::cout << "   ***check SubjectMain***" << std::endl;

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;

    std::cout << "   ***end of check SubjectMain***" << std::endl;


    //ice and cure deleted while destructor for character2
    return 0;
}