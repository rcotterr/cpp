#include <iostream>


int main(int argc, char **argv) {
	int i;
	int count = 0;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (++count < argc) {
		i = -1;
		while (argv[count][++i])
			std::cout << char(toupper(argv[count][i]));
	}
	std::cout << std::endl;
	return 0;
}
