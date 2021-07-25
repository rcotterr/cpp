#include <iostream>
#include <string>
#include "Zombie.hpp"


class ZombieEvent {
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		Zombie* randomChump(void);

	private:
		std::string _zombieType;
};