#include <iostream>
#include <string>
#include "HumanB.hpp"


int main() {

	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	Weapon        club_ = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club_);
	jim.attack();
	club_.setType("some other type of club");
	jim.attack();

}