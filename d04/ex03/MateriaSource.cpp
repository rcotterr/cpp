#include <iostream>
#include <string>
#include "MateriaSource.hpp"
#include "AMateria.hpp"


MateriaSource::MateriaSource() {
    for(int i=0; i < SIZE_SOURCE; i++) {
        (this->_container)[i] = NULL;
//        std::cout <<this->_name << (this->_container)[i]<< std::endl;
    }
    return;
}

MateriaSource::MateriaSource(MateriaSource const &src) {
//    std::cout << "copy constructor" << std::endl;
    for(int i=0; i < SIZE_SOURCE; i++) {
        (this->_container)[i] = NULL;
//        std::cout <<this->_name << (this->_container)[i]<< std::endl;
    }
    *this = src;
    return;
}

MateriaSource::~MateriaSource() {
//    std::cout <<"lala MateriaSource" << std::endl;
    for(int i=0; i < SIZE_SOURCE; i++) {
//        std::cout <<"lala"<< std::endl;
//        std::cout << i << std::endl;
        if ((this->_container)[i] != NULL) {
//            std::cout <<((this->_container)[i])->getType()<< std::endl;
            delete (this->_container)[i];
        }
    }
//    std::cout <<"lala_ MateriaSource"<< std::endl;
    return;
}

MateriaSource & MateriaSource::operator=(MateriaSource const &src) {
//    std::cout << "operator =" << std::endl;
//    this->_name = src.getName();
    for(int i=0; i < SIZE_SOURCE; i++) {
//        std::cout <<i<< std::endl;
        AMateria * materia = (this->_container)[i];
//        std::cout <<materia<< std::endl;
        if (materia != NULL) {
//            std::cout <<"before"<< std::endl;
            delete materia;
        }
//        std::cout <<"lala_"<< std::endl;
        AMateria * target_materia = src.getMateria(i);
        if (target_materia != NULL) {
            (this->_container)[i] = target_materia->clone();
        }
    }
    return *this;
}

AMateria * MateriaSource::getMateria(int idx) const {
    return (this->_container)[idx];
}


void MateriaSource::learnMateria(AMateria* m) {
    for(int i=0; i < SIZE_SOURCE; i++) {
        if ((this->_container)[i] == NULL) {
            (this->_container)[i] = m->clone();
//            std::cout <<this->_name << " " << i << " " << (this->_container)[i] << std::endl;
            return;
        }
    }
}


AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i=0; i < SIZE_SOURCE; i++) {
        AMateria* materia = (this->_container)[i];
        if (materia != NULL && materia->getType() == type) {
            return materia->clone();
        }
    }
    return NULL;
}
