#include <iostream>
#include <string>

class Pony {
	public:
		Pony(std::string name);
		~Pony(void);
		void output_info(void) const;

	private:
		std::string _name;
};