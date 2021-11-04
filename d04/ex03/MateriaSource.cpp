#include <iostream>
#include <string>
#include "MateriaSource.hpp"
#include "AMateria.hpp"


MateriaSource::MateriaSource() {
    for(int i=0; i < SIZE_SOURCE; i++) {
        (this->_container)[i] = NULL;
    }
    return;
}

MateriaSource::MateriaSource(MateriaSource const &src) {
    for(int i=0; i < SIZE_SOURCE; i++) {
        (this->_container)[i] = NULL;
    }
    *this = src;
    return;
}

MateriaSource::~MateriaSource() {
    for(int i=0; i < SIZE_SOURCE; i++) {
        if ((this->_container)[i] != NULL) {
            delete (this->_container)[i];
        }
    }
    return;
}

MateriaSource & MateriaSource::operator=(MateriaSource const &src) {
    for(int i=0; i < SIZE_SOURCE; i++) {
        AMateria * materia = (this->_container)[i];
        if (materia != NULL) {
            delete materia;
        }
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
