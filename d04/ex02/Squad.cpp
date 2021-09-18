#include <iostream>
#include <vector>
#include "Squad.hpp"


Squad::Squad() {
//    this->_container = std::vector<ISpaceMarine>;
    return;
}

Squad::~Squad() {
    int size = (this->_container).size();
    for (int i = 0; i < size; ++i )
    {
        delete (this->_container)[i];
    }
//    delete this->_container;
    return;
}

Squad::Squad(Squad const &src) {
   *this = src;
    return;
}

Squad & Squad::operator=(Squad const &src) {
    int size = (this->_container).size();
    for (int i = 0; i < size; i++) // i++?
    {
        delete (this->_container)[i];
    }
//    this->_container = src
//    delete this->_container;
    int size_new = src.getCount();
    for (int j = 0; j < size_new; j++) {
        (this->_container).push_back(src.getUnit(j));
    }
    return *this;
}

int Squad::getCount() const {
    return (this->_container).size();
}

ISpaceMarine* Squad::getUnit(int i) const {
    if (i < int((this->_container).size())) {
        return (this->_container)[i];
    }
    return NULL;
}

int Squad::push(ISpaceMarine* space_marine) {
// TODO (Adding a null unit, or an unit already in the squad, make no sense at all, of course...
    (this->_container).push_back(space_marine);
    return (this->_container).size();
}

