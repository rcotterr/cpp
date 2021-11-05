#include <iostream>
#include <string>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() :  AWeapon("Plasma Rifle", 5, 21) {
    return;
}

PlasmaRifle:: PlasmaRifle( PlasmaRifle const &src) : AWeapon(src) {
    *this = src;
    return;
}

PlasmaRifle::~ PlasmaRifle() {
    return;
}

PlasmaRifle &  PlasmaRifle::operator=( PlasmaRifle const &src) {
    return *this;
}

std::string  PlasmaRifle::getName() const {
    return AWeapon::getName();
}

void PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
