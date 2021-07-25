#include <iostream>
#include <string>
#include "Human.hpp"


Human::Human(void) {
    Brain human_brain = Brain();

    this->_brain = human_brain;
    return;
}


Human::~Human(void) {
    return;
}


Brain &Human::getBrain(void) {
	Brain & ref = this->_brain;
    return ref;
}


Brain * Human::identify (void) {
    Brain * brain_addr;

    brain_addr = this->_brain.identify();
    return brain_addr;
}
