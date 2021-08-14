#include <iostream>
#include <string>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() :  AWeapon("Plasma Rifle", 5, 21) {
    std::cout << "PlasmaRifle constructor call" << std::endl;
    return;
}

 PlasmaRifle:: PlasmaRifle( PlasmaRifle const &src) : AWeapon(src) {
    std::cout << "PlasmaRifle copy constructor call" << std::endl;
    *this = src;
    return;
}

 PlasmaRifle::~ PlasmaRifle() {
    std::cout << "PlasmaRifle destructor call" << std::endl;
    return;
}

 PlasmaRifle &  PlasmaRifle::operator=( PlasmaRifle const &src) {
    std::cout << "PlasmaRifle operator = call for " << src.getName() << std::endl;
    return *this;
}


std::string  PlasmaRifle::getName() const {
//    std::cout << " PlasmaRifle getName call for " << this->getName() << std::endl;
    return AWeapon::getName();
}

void PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
