#include <iostream>


class Fixed {
	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed(int const num);
		Fixed(float const num);
		~Fixed();
        Fixed & operator=( Fixed const &rhs );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
        int toInt( void ) const;

	private:
		int _value;
		static const int _fractional_bits = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);