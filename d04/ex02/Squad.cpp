#include <iostream>
#include <vector>
#include "Squad.hpp"


Squad::Squad() {
    return;
}

Squad::~Squad() {
    int size = (this->_container).size();
    for (int i = 0; i < size; ++i )
    {
        delete (this->_container)[i];
    }
    return;
}

Squad::Squad(Squad const &src) {
   *this = src;
    return;
}

Squad & Squad::operator=(Squad const &src) {
    int size = (this->_container).size();
    for (int i = 0; i < size; i++)
    {
        delete (this->_container)[i];
    }
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
    if (i >= 0 && i < int((this->_container).size())) {
        return (this->_container)[i];
    }
    return NULL;
}

int Squad::push(ISpaceMarine* space_marine) {
    int size = (this->_container).size();
    if (space_marine == NULL) {
        return size;
    }
    for (int i = 0; i < size; i++)
    {
        if (space_marine == (this->_container)[i]) {
            return size;
        }
    }
    (this->_container).push_back(space_marine);
    return (this->_container).size();
}

