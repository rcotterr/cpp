#include <iostream>
#include <string>
#include <iomanip>
#include "Phonebook.hpp"


Phonebook::Phonebook(void) {
	return;
}

void Phonebook::fulfill(void) {
	std::cout << "Enter the first name" << std::endl;
	std::cin >> this->_first_name;
	std::cout << "Enter the last name" << std::endl;
	std::cin >> this->_last_name;
	std::cout << "Enter the nickname" << std::endl;
	std::cin >> this->_nickname;
	std::cout << "Enter the login" << std::endl;
	std::cin >> this->_login;
	std::cout << "Enter the postal address" << std::endl;
	std::cin >> this->_postal_address;
	std::cout << "Enter the email address" << std::endl;
	std::cin >> this->_email_address;
	std::cout << "Enter the phone number" << std::endl;
	std::cin >> this->_phone_number;
	std::cout << "Enter the birthday date" << std::endl;
	std::cin >> this->_birthday_date;
	std::cout << "Enter the favorite meal" << std::endl;
	std::cin >> this->_favorite_meal;
	std::cout << "Enter the underwear color" << std::endl;
	std::cin >> this->_underwear_color;
	std::cout << "Enter the darkest secret" << std::endl;
	std::cin >> this->_darkest_secret;
}

void Phonebook::_output_detail(std::string detail) const {
	int i = 0;
	int len = detail.length();
	if (len > 10) {
		detail = detail.substr(0, 9) + ".";
	}
	std::cout << std::setw (10) << detail;
}

void Phonebook::output(void) const {
	this->_output_detail(std::to_string(this->index));
	std::cout << '|';
	this->_output_detail(this->_first_name);
	std::cout << '|';
	this->_output_detail(this->_last_name);
	std::cout << '|';
	this->_output_detail(this->_nickname);
	std::cout << std::endl << std::setw (1);
}

void Phonebook::contact_info(void) const {
	std::cout << this->_first_name << std::endl;
	std::cout << this->_last_name << std::endl;
	std::cout << this->_nickname  << std::endl;
	std::cout << this->_login << std::endl;
	std::cout << this->_postal_address << std::endl;
	std::cout << this->_email_address << std::endl;
	std::cout << this->_phone_number << std::endl;
	std::cout << this->_birthday_date << std::endl;
	std::cout << this->_favorite_meal << std::endl;
	std::cout << this->_underwear_color << std::endl;
	std::cout << this->_darkest_secret << std::endl;
}

std::string	Phonebook::get_first_name(void) {
	return Phonebook::_first_name;
}

std::string	Phonebook::get_last_name(void) {
	return Phonebook::_last_name;
}

std::string	Phonebook::get_nickname(void) {
	return Phonebook::_nickname;
}

std::string	Phonebook::get_login(void) {
	return Phonebook::_login;
}

std::string	Phonebook::get_postal_address(void) {
	return Phonebook::_postal_address;
}

std::string	Phonebook::get_email_address(void) {
	return Phonebook::_email_address;
}

std::string	Phonebook::get_phone_number(void) {
	return Phonebook::_phone_number;
}

std::string	Phonebook::get_birthday_date(void) {
	return Phonebook::_birthday_date;
}

std::string	Phonebook::get_favorite_meal(void) {
	return Phonebook::_favorite_meal;
}

std::string	Phonebook::get_underwear_color(void) {
	return Phonebook::_underwear_color;
}

std::string	Phonebook::get_darkest_secret(void) {
	return Phonebook::_darkest_secret;
}

Phonebook::~Phonebook(void) {
	return;
}
