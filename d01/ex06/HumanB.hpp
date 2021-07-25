#include <iostream>
#include <string>
#include "HumanA.hpp"


class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon weapon);


	private:
		std::string _name;
		Weapon *_weapon_ref;
};