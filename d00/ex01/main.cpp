#include "Phonebook.hpp"
#include <string>
#include <iostream>
const int SIZE_PHONEBOOK = 8;


int main(void) {
	std::string cmd;

	Phonebook array[SIZE_PHONEBOOK];

	int i = 0;
	int j;
	while (true) {
		if(std::cin.fail()) {
            std::cin.clear();
        }
		std::cin >> cmd;
		if (cmd == "EXIT") {
			return 0;
		}
		else if (cmd == "ADD") {
			if (i < SIZE_PHONEBOOK) {
				array[i].fulfill();
				array[i].index = i;
				i++;
			}
			else {
				std::cout << "You can have only 8 contacts" << std::endl;
			}
		}
		else if (cmd == "SEARCH") {
			if (!i) {
				std::cout << "There is no contact" << std::endl;
				continue;
			}
			j = 0;
			std::cout << "----------|----------|----------|----------" << std::endl;
			std::cout << "     index|first name| last name|  nickname" << std::endl;
			std::cout << "----------|----------|----------|----------" << std::endl;
			while (j < i) {
				array[j].output();
				j++;
			}
			std::cout << "Enter an index of contact" << std::endl;
			std::cin >> j;
			if (j >= 0 && j < i && !std::cin.fail()) {
				array[j].contact_info();
			}
			else {
				std::cout << "Wrong index" << std::endl;
			}
		}
		else {
			std::cout << "Enter a command: ADD, SEARCH or EXIT" << std::endl;
		}
	}
	return 0;
}
