#include <iostream>
#include <string>


class Weapon {
	public:
		Weapon(std::string);
		~Weapon();
		void setType(std::string);
		const std::string & getType();

	private:
		std::string & _type;
		std::string str_type;
};