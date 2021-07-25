#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <string>


class Phonebook {

public:
	int index;

	Phonebook(void);
	~Phonebook(void);

	void fulfill(void);
	void output(void) const;
	void contact_info(void) const;

	std::string	get_first_name( void );
	std::string	get_last_name( void );
	std::string	get_nickname( void );
	std::string	get_login( void );
	std::string	get_postal_address( void );
	std::string	get_email_address( void );
	std::string	get_phone_number( void );
	std::string	get_birthday_date( void );
	std::string	get_favorite_meal( void );
	std::string	get_underwear_color( void );
	std::string	get_darkest_secret( void );

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _login;
	std::string _postal_address;
	std::string _email_address;
	std::string _phone_number;
	std::string _birthday_date;
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string _darkest_secret;
	void _output_detail(std::string detail) const;

};

#endif