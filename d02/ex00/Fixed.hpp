#include <iostream>


class Fixed {
	public:
		Fixed();
		Fixed(Fixed const &src);
		~Fixed();
        Fixed & operator=( Fixed const &rhs );
		int getRawBits( void ) const;
		void setRawBits( int const raw );


	private:
		int _value;
		static const int _fractional_bits = 8;
};